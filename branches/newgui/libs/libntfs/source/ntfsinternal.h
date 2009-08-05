/**
 * ntfsinternal.h - Internal support routines for NTFS-based devices.
 *
 * Copyright (c) 2009 Rhys "Shareese" Koedijk
 * Copyright (c) 2006 Michael "Chishm" Chisholm
 *
 * This program/include file is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as published
 * by the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program/include file is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _NTFSINTERNAL_H
#define _NTFSINTERNAL_H

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "types.h"
#include "compat.h"
#include "logging.h"
#include "layout.h"
#include "device.h"
#include "volume.h"
#include "dir.h"
#include "inode.h"
#include "attrib.h"
#include "unistr.h"

#include <gccore.h>
#include <ogc/disc_io.h>
#include <sys/iosupport.h>

#define MBR_SIGNATURE                   0xAA55
#define EBR_SIGNATURE                   0xAA55

#define PARTITION_STATUS_NONBOOTABLE    0x00 /* Non-bootable */
#define PARTITION_STATUS_BOOTABLE       0x80 /* Bootable (active) */

#define PARTITION_TYPE_EMPTY            0x00 /* Empty */
#define PARTITION_TYPE_DOS33_EXTENDED   0x05 /* DOS 3.3+ extended partition */
#define PARTITION_TYPE_NTFS             0x07 /* Windows NT NTFS */
#define PARTITION_TYPE_WIN95_EXTENDED   0x0F /* Windows 95 extended partition, LBA-mapped*/

/**
 * PRIMARY_PARTITION - Block device partition record
 */
struct _PARTITION_RECORD {
    u8 status;                          /* Partition status; see above */
    u8 chs_start[3];                    /* Cylinder-head-sector address to first block of partition */
    u8 type;                            /* Partition type; see above */
    u8 chs_end[3];                      /* Cylinder-head-sector address to last block of partition */
    u32 lba_start;                      /* Local block address to first sector of partition */
    u32 block_count;                    /* Number of blocks in partition */
} __attribute__ ((packed));

typedef struct _PARTITION_RECORD PARTITION_RECORD ;

/**
 * MASTER_BOOT_RECORD - Block device master boot record
 */
struct _MASTER_BOOT_RECORD {
    u8 code_area[446];                  /* Code area; Normally empty */
    PARTITION_RECORD partitions[4];     /* 4 primary partitions */
    u16 signature;                      /* MBR signature; 0xAA55 */
} __attribute__ ((packed));

typedef struct _MASTER_BOOT_RECORD MASTER_BOOT_RECORD;

/**
 * EXTENDED_PARTITION - Block device extended boot record
 */
struct _EXTENDED_BOOT_RECORD {
    u8 code_area[446];                  /* Normally empty */
    PARTITION_RECORD partition;         /* Primary partition */
    PARTITION_RECORD next_ebr;          /* Next extended boot record in the chain */
    u8 reserved[32];                    /* Normally empty */
    u16 signature;                      /* EBR signature; 0xAA55 */
} __attribute__ ((packed));

typedef struct _EXTENDED_BOOT_RECORD EXTENDED_BOOT_RECORD;

/**
 * INTERFACE_ID - Disc interface identifier
 */
typedef struct _INTERFACE_ID {
    const char *name;                   /* Interface name */
    const DISC_INTERFACE *interface;    /* Disc interface */
} INTERFACE_ID;

/**
 * ntfs_atime_t - File access time state
 */
typedef enum {
    ATIME_ENABLED,                      /* Update access times */
    ATIME_DISABLED,                     /* Don't update access times */
    ATIME_RELATIVE                      /* Only update if older than last modified date */
} ntfs_atime_t;

/**
 * ntfs_vd - NTFS volume descriptor
 */
typedef struct _ntfs_vd {
    ntfs_volume *vol;                   /* NTFS volume handle */
    mutex_t lock;                       /* Volume lock mutex */
    s64 id;                             /* Filesystem id */
    u16 flags;                          /* Mount flags */
    u16 uid;                            /* User id for entry creation */
    u16 gid;                            /* Group id for entry creation */
    u16 fmask;                          /* Unix style permissions mask for file creation */
    u16 dmask;                          /* Unix style permissions mask for directory creation */
    ntfs_atime_t atime;                 /* Entry access time update stratagy */
    bool showSystemFiles;               /* If true, show system file when enumerating directories */
    ntfs_inode *cwd_ni;                 /* Current directory */
} ntfs_vd;

/* Lock volume */
static inline void ntfsLock (ntfs_vd *vd)
{
    LWP_MutexLock(vd->lock);
}

/* Unlock volume */
static inline void ntfsUnlock (ntfs_vd *vd)
{
    LWP_MutexUnlock(vd->lock);
}

/* Miscellaneous helper/support routines */
const char *ntfsRealPath (const char *path);
ntfs_vd *ntfsGetVolume (const char *path);
ntfs_inode *ntfsOpenEntry (ntfs_vd *vd, const char *path);
void ntfsCloseEntry (ntfs_vd *vd, ntfs_inode *ni);
ntfs_inode *ntfsCreate (ntfs_vd *vd, const char *path, dev_t type, dev_t dev, const char *target);
int ntfsLink (ntfs_vd *vd, const char *old_path, const char *new_path);
int ntfsUnlink (ntfs_vd *vd, const char *path);
int ntfsStat (ntfs_vd *vd, ntfs_inode *ni, struct stat *st);
void ntfsUpdateTimes (ntfs_vd *vd, ntfs_inode *ni, ntfs_time_update_flags mask);

int ntfsUnicodeToLocal (const ntfschar *ins, const int ins_len, char **outs, int outs_len);
int ntfsLocalToUnicode (const char *ins, ntfschar **outs);

/* Gekko devoptab related routines */
const INTERFACE_ID* ntfsGetDiscInterfaces (void);
const devoptab_t *ntfsDeviceOpTab (void);
const devoptab_t *ntfsGetDeviceOpTab (const char *name);

#endif /* _NTFSINTERNAL_H */
