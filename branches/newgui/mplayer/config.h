/*----------------------------------------------------------------------------
** This file has been automatically generated by configure any changes in it
** will be lost when you run configure again.
** Instead of modifying definitions here, use the --enable/--disable options
** of the configure script! See ./configure --help for details.
*---------------------------------------------------------------------------*/

#ifndef MPLAYER_CONFIG_H
#define MPLAYER_CONFIG_H

/* Undefine this if you do not want to select mono audio (left or right)
   with a stereo MPEG layer 2/3 audio stream. The command line option
   -stereo has three possible values (0 for stereo, 1 for left-only, 2 for
   right-only), with 0 being the default.
   */
#define CONFIG_FAKE_MONO 1

/* set up max. outburst. use 65536 for ALSA 0.5, for others 16384 is enough */
#define MAX_OUTBURST 65536

/* set up audio OUTBURST. Do not change this! */
#define OUTBURST 512

/* Enable fast OSD/SUB renderer (looks ugly, but uses less CPU power) */
#undef FAST_OSD
#undef FAST_OSD_TABLE

/* Define this to enable MPEG-1/2 image postprocessing in libmpeg2 */
#define MPEG12_POSTPROC 1
#define ATTRIBUTE_ALIGNED_MAX 16



#define CONFIGURATION "--with-twiizers"

char MPLAYER_DATADIR[100]; 
char MPLAYER_CONFDIR[100]; 
char MPLAYER_LIBDIR[100]; 

/* definitions needed by included libraries */
#define HAVE_INTTYPES_H 1
/* libmpeg2 + FFmpeg */

/* libdvdcss */
#define HAVE_ERRNO_H 1
/* libdvdcss + libdvdread */
#define HAVE_LIMITS_H 1
/* libdvdcss + libfaad2 */
#define HAVE_UNISTD_H 1
/* libfaad2 + libdvdread */
#define STDC_HEADERS 1
#define HAVE_MEMCPY 1
/* libfaad2 */
#define HAVE_STRING_H 1
#undef HAVE_STRINGS_H
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1
/* libdvdnav */
#define READ_CACHE_TRACE 0
/* libdvdread */
#define HAVE_DLFCN_H 1


/* system headers */
#define HAVE_ALLOCA_H 1
#undef HAVE_ALSA_ASOUNDLIB_H
#define HAVE_ALTIVEC_H 0
#define HAVE_MALLOC_H 1
#undef HAVE_SYS_MMAN_H

#undef HAVE_SOUNDCARD_H
#undef HAVE_SYS_ASOUNDLIB_H
#define HAVE_SYS_SOUNDCARD_H 1
#undef HAVE_SYS_SYSINFO_H
#undef HAVE_TERMIOS_H
#define HAVE_SYS_TERMIOS_H 1
#define HAVE_WINSOCK2_H 0


/* system functions */
#undef HAVE_GETHOSTBYNAME2
#define HAVE_GETTIMEOFDAY 1
#undef HAVE_GLOB
#define HAVE_LANGINFO 1
#undef HAVE_LLRINT
#define HAVE_LRINT 1
#define HAVE_LRINTF 1

#define HAVE_MEMALIGN 1
#undef HAVE_NANOSLEEP
#undef HAVE_POSIX_SELECT
#define HAVE_ROUND 1
#define HAVE_ROUNDF 1
#define HAVE_AUDIO_SELECT 1
#define HAVE_SETENV 1
#define HAVE_SHM 1
#define HAVE_STRSEP 1
#define HAVE_SWAB 1


#undef HAVE_TERMCAP
#define HAVE_TERMIOS 1
#define HAVE_TRUNCF 1
#define HAVE_VSSCANF 1


/* system-specific features */
#define ASMALIGN(ZEROBITS) ".align 1<<" #ZEROBITS "\n\t"
#define HAVE_BUILTIN_EXPECT 1
#define HAVE_LIBDL 1
#define EXTERN_PREFIX "_"
#define CONFIG_ICONV 1
#undef HAVE_LIBKSTAT



#define NAMED_ASM_ARGS 1
#undef CONFIG_PRIORITY

#define restrict __restrict
#undef HAVE_RTC
#undef CONFIG_UNRAR_EXEC

/* configurable options */
#define MSG_CHARSET "UTF-8"
#undef CONFIG_CRASH_DEBUG
#undef MP_DEBUG
#undef CONFIG_DYNAMIC_PLUGINS
#define CONFIG_FASTMEMCPY 1
#define CONFIG_MENU 1
#undef RUNTIME_CPUDETECT
#define CONFIG_SIGHANDLER 1
#define CONFIG_SORTSUB 1
#define CONFIG_STREAM_CACHE 1
#define PTHREAD_CACHE 1


/* CPU stuff */
#define __CPU__ 686
#define WORDS_BIGENDIAN 1
#define ARCH_X86 0
#define ARCH_X86_32 0
#define ARCH_X86_64 0
#define ARCH_IA64 0
#define ARCH_SPARC 0
#define ARCH_ARM 0
#define ARCH_AVR32 0
#define ARCH_SH4 0
#define ARCH_PPC 1
#define ARCH_ALPHA 0
#define ARCH_SGI_MIPS 0
#define ARCH_PA_RISC 0
#define ARCH_S390 0
#define ARCH_S390X 0
#define ARCH_VAX 0
#define ARCH_BFIN 0
#define ARCH_XTENSA 0
#define ARCH_GENERIC 0
#define HAVE_ALTIVEC 0
#define HAVE_MMX 0
#define HAVE_MMX2 0
#define HAVE_AMD3DNOW 0
#define HAVE_AMD3DNOWEXT 0
#define HAVE_SSE 0
#define HAVE_SSE2 0
#define HAVE_SSSE3 0
#define HAVE_FAST_CMOV 0
#define HAVE_CMOV 0
#define HAVE_PLD 0
#define HAVE_ARMV5TE 0
#define HAVE_ARMV6 0
#define HAVE_ARMV6T2 0
#define HAVE_ARMVFP 0
#define HAVE_IWMMXT 0
#define HAVE_MMI 0
#define HAVE_VIS 0
#define HAVE_MVI 0
#define HAVE_VIRTUALALLOC 0

/* DVD/VCD/CD */
#define DEFAULT_CDROM_DEVICE    "/dev/di"
#define DEFAULT_DVD_DEVICE     "/dev/di"

#undef CONFIG_CDDB
#undef DVD_STRUCT_IN_SYS_CDIO_H
#undef CONFIG_CDDA
#undef DVD_STRUCT_IN_LINUX_CDROM_H
#undef DVD_STRUCT_IN_DVD_H




#undef DVD_STRUCT_IN_SYS_DVDIO_H
#define CONFIG_DVDNAV 1
#define CONFIG_DVDREAD 1

#undef CONFIG_LIBCDIO

#undef CONFIG_VCD


/* codec libraries */
#undef CONFIG_FAAC
#define CONFIG_FAAD 1
#define CONFIG_FAAD_INTERNAL 1
#define CONFIG_LIBA52 1
#define CONFIG_LIBA52_INTERNAL 1
#undef CONFIG_LIBDCA
#undef CONFIG_LIBDV095
#undef CONFIG_LIBLZO
#define CONFIG_LIBMPEG2 1
#undef CONFIG_LIBMAD
#undef CONFIG_MP3LAME
#undef CONFIG_MP3LAME_PRESET
#undef CONFIG_MP3LAME_PRESET_MEDIUM
#define CONFIG_MP3LIB 1
#undef CONFIG_MUSEPACK
#undef CONFIG_SPEEX
#undef CONFIG_OGGTHEORA
#undef CONFIG_TOOLAME
#define CONFIG_TREMOR 1
#undef CONFIG_TWOLAME
#define CONFIG_OGGVORBIS 1
#undef CONFIG_X264
#undef CONFIG_XVID4
#define CONFIG_ZLIB 1

#undef CONFIG_LIBNUT


/* binary codecs */
/*
#define CONFIG_QTX_CODECS 1
#define CONFIG_QTX_CODECS_WIN32 1
#define CONFIG_REALCODECS 1
#define REALCODEC_PATH "/usr/local/lib/codecs"

#define CONFIG_WIN32DLL 1
#define WIN32_PATH "/usr/local/lib/codecs"
#define CONFIG_XANIM 1
#define XACODEC_PATH "/usr/local/lib/codecs"
*/
#undef CONFIG_XMMS
//#define XMMS_INPUT_PLUGIN_DIR ""


/* GUI */
#undef CONFIG_GTK2
#undef CONFIG_GUI



/* Audio output drivers */
#undef CONFIG_ALSA
#undef CONFIG_ALSA1X
#undef CONFIG_ALSA5
#undef CONFIG_ALSA9



#undef CONFIG_ESD
#undef CONFIG_ESD_LATENCY

#undef CONFIG_NAS


#undef CONFIG_OSS_AUDIO
#define PATH_DEV_DSP ""
#define PATH_DEV_MIXER ""
#undef CONFIG_PULSE

#undef CONFIG_SUN_AUDIO
#undef CONFIG_WIN32WAVEOUT

#undef CONFIG_LADSPA


/* input */




#undef CONFIG_JOYSTICK
#undef CONFIG_LIRC
#undef CONFIG_LIRCC
#undef CONFIG_PVR
#undef CONFIG_RADIO
#undef CONFIG_RADIO_BSDBT848
#undef CONFIG_RADIO_CAPTURE
#undef CONFIG_RADIO_V4L
#undef CONFIG_RADIO_V4L2
#undef CONFIG_TV

#undef CONFIG_TV_DSHOW
#undef CONFIG_TV_TELETEXT
#undef CONFIG_TV_V4L

#undef CONFIG_TV_V4L2


/* font stuff */
#define CONFIG_ASS 1
#define CONFIG_BITMAP_FONT 1
#undef CONFIG_ENCA
#undef CONFIG_FONTCONFIG
#define CONFIG_FREETYPE 1
#define CONFIG_FRIBIDI 1


/* networking */
#define HAVE_CLOSESOCKET 0
#define CONFIG_FTP 1
#undef HAVE_AF_INET6
#undef HAVE_INET_PTON
#define HAVE_INET_ATON 1
//#define HAVE_INET_PTON 1
#undef CONFIG_LIVE555
#undef CONFIG_LIBNEMESI
#define CONFIG_NETWORK 1
#undef CONFIG_LIBSMBCLIENT
#define HAVE_SOCKLEN_T 1
#undef CONFIG_VSTREAM


/* libvo options */
#undef CONFIG_3DFX
#undef CONFIG_AA
#undef CONFIG_BL
#undef CONFIG_CACA

#undef CONFIG_DFBMGA
#undef CONFIG_DGA
#undef CONFIG_DGA1
#undef CONFIG_DGA2
#undef CONFIG_DIRECT3D
#undef CONFIG_DIRECTFB

#undef CONFIG_DIRECTX
#undef CONFIG_DVB
#undef CONFIG_DVB_HEAD
#undef CONFIG_DVBIN 
#undef CONFIG_DXR2
#undef CONFIG_DXR3
#undef CONFIG_FBDEV
#undef CONFIG_GGI
#undef CONFIG_GGIWMH
#undef CONFIG_GIF
#undef CONFIG_GIF_4

#undef CONFIG_GL

#undef CONFIG_IVTV
#define CONFIG_JPEG 1
#undef CONFIG_MD5SUM
#undef CONFIG_MGA
#undef CONFIG_MNG
#undef CONFIG_PNG
#undef CONFIG_PNM

#undef CONFIG_S3FB
#undef CONFIG_SDL

#undef CONFIG_SVGALIB
#undef CONFIG_TDFXFB
#undef CONFIG_XVR100
#undef CONFIG_TGA
#undef CONFIG_V4L2_DECODER
#undef CONFIG_VDPAU
#undef CONFIG_VESA
#undef CONFIG_VIDIX
#undef CONFIG_VIDIX_DRV_CYBERBLADE
#undef CONFIG_VIDIX_DRV_IVTV
#undef CONFIG_VIDIX_DRV_MACH64
#undef CONFIG_VIDIX_DRV_MGA
#undef CONFIG_VIDIX_DRV_MGA_CRTC2
#undef CONFIG_VIDIX_DRV_NVIDIA
#undef CONFIG_VIDIX_DRV_PM3
#undef CONFIG_VIDIX_DRV_RADEON
#undef CONFIG_VIDIX_DRV_RAGE128
#undef CONFIG_VIDIX_DRV_S3
#undef CONFIG_VIDIX_DRV_SH_VEU
#undef CONFIG_VIDIX_DRV_SIS
#undef CONFIG_VIDIX_DRV_UNICHROME

#undef CONFIG_XF86VM
#undef CONFIG_WII
#undef CONFIG_X11
#undef CONFIG_XDPMS
#undef CONFIG_XF86XK
#undef CONFIG_XINERAMA
#undef CONFIG_XMGA
#undef CONFIG_XSS
#undef CONFIG_XV
#undef CONFIG_XVMC

#undef CONFIG_YUV4MPEG
#undef CONFIG_ZR


/* FFmpeg */
#define CONFIG_LIBAVCODEC 1
#define CONFIG_LIBAVCODEC_A 1
#undef CONFIG_LIBAVCODEC_SO
#define CONFIG_LIBAVFORMAT 1
#define CONFIG_LIBAVFORMAT_A 1
#undef CONFIG_LIBAVFORMAT_SO
#define CONFIG_LIBAVUTIL 1
#define CONFIG_LIBAVUTIL_A 1
#undef CONFIG_LIBAVUTIL_SO
#define CONFIG_LIBPOSTPROC 1
#define CONFIG_LIBPOSTPROC_A 1
#undef CONFIG_LIBPOSTPROC_SO
#define CONFIG_LIBSWSCALE 1
#define CONFIG_LIBSWSCALE_A 1
#undef CONFIG_LIBSWSCALE_SO

#define CONFIG_DECODERS 1
#define CONFIG_ENCODERS 1
#define CONFIG_DEMUXERS 1
#define CONFIG_MUXERS 1

#undef HAVE_ARPA_INET_H
#define HAVE_BSWAP 1
#define CONFIG_BZLIB 0

#define HAVE_DOS_PATHS 1
#define HAVE_FAST_64BIT 0
#define HAVE_FAST_UNALIGNED 1
#define CONFIG_MPEGAUDIO_HP 1
#define CONFIG_MEMALIGN_HACK 0
#define CONFIG_MLIB 0
#define HAVE_MKSTEMP 1
#undef HAVE_POSIX_MEMALIGN
#undef HAVE_PTHREADS
#define HAVE_TEN_OPERANDS 1
#define HAVE_THREADS 1
#undef HAVE_YASM

#define CONFIG_FASTDIV 0
#define CONFIG_FFSERVER 0
#define CONFIG_GPL 1
#define CONFIG_GRAY 0
#define CONFIG_HARDCODED_TABLES 0
#define CONFIG_LIBAMR_NB_FIXED 0
#define CONFIG_LIBVORBIS 0
#define CONFIG_POWERPC_PERF 1
#define CONFIG_SMALL 0
#define CONFIG_SWSCALE 1
#define CONFIG_SWSCALE_ALPHA 1

#define HAVE_GETHRTIME 0
#define HAVE_INLINE_ASM 0
#define HAVE_POLL_H 1
#define HAVE_PPC4XX 0

/* Some FFmpeg codecs depend on these. Enable them unconditionally for now. */
#define CONFIG_AANDCT 1
#define CONFIG_FFT 1
#define CONFIG_GOLOMB 1
#define CONFIG_MDCT 1
#define CONFIG_RDFT 1

/* Use these registers in FFmpeg x86 inline asm. No proper detection yet. */
#define HAVE_EBX_AVAILABLE 1
#ifndef MP_DEBUG
#define HAVE_EBP_AVAILABLE 1
#else
#define HAVE_EBP_AVAILABLE 0
#endif

/* External libraries used through libavcodec. */
#define CONFIG_LIBFAAC 0

#define CONFIG_LIBAMR_NB 0
#define CONFIG_LIBAMR_WB 0
#define CONFIG_LIBDIRAC 0
#define CONFIG_LIBSCHROEDINGER 0
#define CONFIG_LIBMP3LAME 0
#define CONFIG_LIBX264 0
#define CONFIG_LIBXVID 0

#define CONFIG_PGMYUV_DECODER 1
#define CONFIG_PPM_DECODER 1
#define CONFIG_PBM_DECODER 1
#define CONFIG_PGM_DECODER 1
#define CONFIG_PAM_DECODER 1
#define CONFIG_AASC_DECODER 1
#define CONFIG_TRUEHD_DECODER 1
#define CONFIG_AMV_DECODER 1
#define CONFIG_ASV1_DECODER 1
#define CONFIG_ASV2_DECODER 1
#define CONFIG_AVS_DECODER 1
#define CONFIG_BETHSOFTVID_DECODER 1
#define CONFIG_BFI_DECODER 1
#define CONFIG_BMP_DECODER 1
#define CONFIG_C93_DECODER 1
#define CONFIG_CAVS_DECODER 1
#define CONFIG_CINEPAK_DECODER 1
#define CONFIG_CLJR_DECODER 1
#define CONFIG_CSCD_DECODER 1
#define CONFIG_CYUV_DECODER 1
#define CONFIG_DNXHD_DECODER 1
#define CONFIG_DSICINVIDEO_DECODER 1
#define CONFIG_DVVIDEO_DECODER 1
#define CONFIG_DXA_DECODER 1
#define CONFIG_EACMV_DECODER 1
#define CONFIG_EATGQ_DECODER 1
#define CONFIG_EATGV_DECODER 1
#define CONFIG_EATQI_DECODER 1
#define CONFIG_EIGHTBPS_DECODER 1
#define CONFIG_EIGHTSVX_EXP_DECODER 1
#define CONFIG_EIGHTSVX_FIB_DECODER 1
#define CONFIG_ESCAPE124_DECODER 1
#define CONFIG_FFV1_DECODER 1
#define CONFIG_FFVHUFF_DECODER 1
#define CONFIG_FLASHSV_DECODER 1
#define CONFIG_FLIC_DECODER 1
#define CONFIG_FLV_DECODER 1
#define CONFIG_FOURXM_DECODER 1
#define CONFIG_FRAPS_DECODER 1
#define CONFIG_GIF_DECODER 1
#define CONFIG_H261_DECODER 1
#define CONFIG_H263_DECODER 1
#define CONFIG_H263I_DECODER 1
#define CONFIG_H264_DECODER 1
#define CONFIG_H264_VDPAU_DECODER 0
#define CONFIG_HUFFYUV_DECODER 1
#define CONFIG_IDCIN_DECODER 1
#define CONFIG_INDEO2_DECODER 1
#define CONFIG_INDEO3_DECODER 1
#define CONFIG_INTERPLAY_VIDEO_DECODER 1
#define CONFIG_JPEGLS_DECODER 1
#define CONFIG_KMVC_DECODER 1
#define CONFIG_LOCO_DECODER 1
#define CONFIG_MDEC_DECODER 1
#define CONFIG_MIMIC_DECODER 1
#define CONFIG_MJPEG_DECODER 1
#define CONFIG_MJPEGB_DECODER 1
#define CONFIG_MMVIDEO_DECODER 1
#define CONFIG_MOTIONPIXELS_DECODER 1
#define CONFIG_MPEG_XVMC_DECODER 0
#define CONFIG_MPEG1VIDEO_DECODER 1
#define CONFIG_MPEG2VIDEO_DECODER 1
#define CONFIG_MPEG4_DECODER 1
#define CONFIG_MPEGVIDEO_DECODER 1
#define CONFIG_MPEG_VDPAU_DECODER 0
#define CONFIG_MPEG1_VDPAU_DECODER 0
#define CONFIG_MSMPEG4V1_DECODER 1
#define CONFIG_MSMPEG4V2_DECODER 1
#define CONFIG_MSMPEG4V3_DECODER 1
#define CONFIG_MSRLE_DECODER 1
#define CONFIG_MSVIDEO1_DECODER 1
#define CONFIG_V210X_DECODER 1
#define CONFIG_MSZH_DECODER 1
#define CONFIG_NUV_DECODER 1
#define CONFIG_PCX_DECODER 1
#define CONFIG_PNG_DECODER 1
#define CONFIG_PTX_DECODER 1
#define CONFIG_QDRAW_DECODER 1
#define CONFIG_QPEG_DECODER 1
#define CONFIG_QTRLE_DECODER 1
#define CONFIG_RAWVIDEO_DECODER 1
#define CONFIG_RL2_DECODER 1
#define CONFIG_ROQ_DECODER 1
#define CONFIG_RPZA_DECODER 1
#define CONFIG_RV10_DECODER 1
#define CONFIG_RV20_DECODER 1
#define CONFIG_RV30_DECODER 1
#define CONFIG_RV40_DECODER 1
#define CONFIG_SGI_DECODER 1
#define CONFIG_SMACKER_DECODER 1
#define CONFIG_SMC_DECODER 1
#define CONFIG_SNOW_DECODER 1
#define CONFIG_SP5X_DECODER 1
#define CONFIG_SUNRAST_DECODER 1
#define CONFIG_SVQ1_DECODER 1
#define CONFIG_SVQ3_DECODER 1
#define CONFIG_TARGA_DECODER 1
#define CONFIG_THEORA_DECODER 1
#define CONFIG_THP_DECODER 1
#define CONFIG_TIERTEXSEQVIDEO_DECODER 1
#define CONFIG_TIFF_DECODER 1
#define CONFIG_TRUEMOTION1_DECODER 1
#define CONFIG_TRUEMOTION2_DECODER 1
#define CONFIG_TSCC_DECODER 1
#define CONFIG_TXD_DECODER 1
#define CONFIG_ULTI_DECODER 1
#define CONFIG_VB_DECODER 1
#define CONFIG_VC1_DECODER 1
#define CONFIG_VC1_VDPAU_DECODER 0
#define CONFIG_VCR1_DECODER 1
#define CONFIG_VMDVIDEO_DECODER 1
#define CONFIG_VMNC_DECODER 1
#define CONFIG_VP3_DECODER 1
#define CONFIG_VP5_DECODER 1
#define CONFIG_VP6_DECODER 1
#define CONFIG_VP6A_DECODER 1
#define CONFIG_VP6F_DECODER 1
#define CONFIG_VQA_DECODER 1
#define CONFIG_WMV1_DECODER 1
#define CONFIG_WMV2_DECODER 1
#define CONFIG_WMV3_DECODER 1
#define CONFIG_WMV3_VDPAU_DECODER 0
#define CONFIG_WNV1_DECODER 1
#define CONFIG_XAN_WC3_DECODER 1
#define CONFIG_XL_DECODER 1
#define CONFIG_ZLIB_DECODER 1
#define CONFIG_ZMBV_DECODER 1
#define CONFIG_AAC_DECODER 1
#define CONFIG_AC3_DECODER 1
#define CONFIG_ALAC_DECODER 1
#define CONFIG_APE_DECODER 1
#define CONFIG_ATRAC3_DECODER 1
#define CONFIG_COOK_DECODER 1
#define CONFIG_DCA_DECODER 1
#define CONFIG_DSICINAUDIO_DECODER 1
#define CONFIG_EAC3_DECODER 1
#define CONFIG_FLAC_DECODER 1
#define CONFIG_IMC_DECODER 1
#define CONFIG_MACE3_DECODER 1
#define CONFIG_MACE6_DECODER 1
#define CONFIG_MLP_DECODER 1
#define CONFIG_MP1_DECODER 1
#define CONFIG_MP2_DECODER 1
#define CONFIG_MP3_DECODER 1
#define CONFIG_MP3ADU_DECODER 1
#define CONFIG_MP3ON4_DECODER 1
#define CONFIG_MPC7_DECODER 1
#define CONFIG_MPC8_DECODER 1
#define CONFIG_NELLYMOSER_DECODER 1
#define CONFIG_QCELP_DECODER 1
#define CONFIG_QDM2_DECODER 1
#define CONFIG_RA_144_DECODER 1
#define CONFIG_RA_288_DECODER 1
#define CONFIG_SHORTEN_DECODER 1
#define CONFIG_SMACKAUD_DECODER 1
#define CONFIG_SONIC_DECODER 1
#define CONFIG_TRUESPEECH_DECODER 1
#define CONFIG_TTA_DECODER 1
#define CONFIG_VMDAUDIO_DECODER 1
#define CONFIG_VORBIS_DECODER 1
#define CONFIG_WAVPACK_DECODER 1
#define CONFIG_WMAV1_DECODER 1
#define CONFIG_WMAV2_DECODER 1
#define CONFIG_WS_SND1_DECODER 1
#define CONFIG_PCM_ALAW_DECODER 1
#define CONFIG_PCM_DVD_DECODER 1
#define CONFIG_PCM_F32BE_DECODER 1
#define CONFIG_PCM_F32LE_DECODER 1
#define CONFIG_PCM_F64BE_DECODER 1
#define CONFIG_PCM_F64LE_DECODER 1
#define CONFIG_PCM_MULAW_DECODER 1
#define CONFIG_PCM_S8_DECODER 1
#define CONFIG_PCM_S16BE_DECODER 1
#define CONFIG_PCM_S16LE_DECODER 1
#define CONFIG_PCM_S16LE_PLANAR_DECODER 1
#define CONFIG_PCM_S24BE_DECODER 1
#define CONFIG_PCM_S24DAUD_DECODER 1
#define CONFIG_PCM_S24LE_DECODER 1
#define CONFIG_PCM_S32BE_DECODER 1
#define CONFIG_PCM_S32LE_DECODER 1
#define CONFIG_PCM_U8_DECODER 1
#define CONFIG_PCM_U16BE_DECODER 1
#define CONFIG_PCM_U16LE_DECODER 1
#define CONFIG_PCM_U24BE_DECODER 1
#define CONFIG_PCM_U24LE_DECODER 1
#define CONFIG_PCM_U32BE_DECODER 1
#define CONFIG_PCM_U32LE_DECODER 1
#define CONFIG_PCM_ZORK_DECODER 1
#define CONFIG_INTERPLAY_DPCM_DECODER 1
#define CONFIG_ROQ_DPCM_DECODER 1
#define CONFIG_SOL_DPCM_DECODER 1
#define CONFIG_XAN_DPCM_DECODER 1
#define CONFIG_ADPCM_4XM_DECODER 1
#define CONFIG_ADPCM_ADX_DECODER 1
#define CONFIG_ADPCM_CT_DECODER 1
#define CONFIG_ADPCM_EA_DECODER 1
#define CONFIG_ADPCM_EA_MAXIS_XA_DECODER 1
#define CONFIG_ADPCM_EA_R1_DECODER 1
#define CONFIG_ADPCM_EA_R2_DECODER 1
#define CONFIG_ADPCM_EA_R3_DECODER 1
#define CONFIG_ADPCM_EA_XAS_DECODER 1
#define CONFIG_ADPCM_G726_DECODER 1
#define CONFIG_ADPCM_IMA_AMV_DECODER 1
#define CONFIG_ADPCM_IMA_DK3_DECODER 1
#define CONFIG_ADPCM_IMA_DK4_DECODER 1
#define CONFIG_ADPCM_IMA_EA_EACS_DECODER 1
#define CONFIG_ADPCM_IMA_EA_SEAD_DECODER 1
#define CONFIG_ADPCM_IMA_ISS_DECODER 1
#define CONFIG_ADPCM_IMA_QT_DECODER 1
#define CONFIG_ADPCM_IMA_SMJPEG_DECODER 1
#define CONFIG_ADPCM_IMA_WAV_DECODER 1
#define CONFIG_ADPCM_IMA_WS_DECODER 1
#define CONFIG_ADPCM_MS_DECODER 1
#define CONFIG_ADPCM_SBPRO_2_DECODER 1
#define CONFIG_ADPCM_SBPRO_3_DECODER 1
#define CONFIG_ADPCM_SBPRO_4_DECODER 1
#define CONFIG_ADPCM_SWF_DECODER 1
#define CONFIG_ADPCM_THP_DECODER 1
#define CONFIG_ADPCM_XA_DECODER 1
#define CONFIG_ADPCM_YAMAHA_DECODER 1
#define CONFIG_DVBSUB_DECODER 1
#define CONFIG_DVDSUB_DECODER 1
#define CONFIG_XSUB_DECODER 1
#define CONFIG_LIBAMR_NB_DECODER 0
#define CONFIG_LIBAMR_WB_DECODER 0
#define CONFIG_LIBDIRAC_DECODER 0
#define CONFIG_LIBFAAD_DECODER 0
#define CONFIG_LIBGSM_DECODER 0
#define CONFIG_LIBGSM_MS_DECODER 0
#define CONFIG_LIBOPENJPEG_DECODER 0
#define CONFIG_LIBSCHROEDINGER_DECODER 0
#define CONFIG_LIBSPEEX_DECODER 0
#define CONFIG_ASV1_ENCODER 1
#define CONFIG_ASV2_ENCODER 1
#define CONFIG_TRUEHD_ENCODER 1
#define CONFIG_BMP_ENCODER 0
#define CONFIG_DNXHD_ENCODER 0
#define CONFIG_DVVIDEO_ENCODER 1
#define CONFIG_FFV1_ENCODER 1
#define CONFIG_FFVHUFF_ENCODER 1
#define CONFIG_FLASHSV_ENCODER 0
#define CONFIG_FLV_ENCODER 1
#define CONFIG_GIF_ENCODER 0
#define CONFIG_H261_ENCODER 0
#define CONFIG_H263_ENCODER 1
#define CONFIG_H263P_ENCODER 1
#define CONFIG_HUFFYUV_ENCODER 1
#define CONFIG_JPEGLS_ENCODER 0
#define CONFIG_LJPEG_ENCODER 0
#define CONFIG_MJPEG_ENCODER 0
#define CONFIG_MPEG1VIDEO_ENCODER 1
#define CONFIG_MPEG2VIDEO_ENCODER 1
#define CONFIG_MPEG4_ENCODER 1
#define CONFIG_MSMPEG4V1_ENCODER 1
#define CONFIG_MSMPEG4V2_ENCODER 1
#define CONFIG_MSMPEG4V3_ENCODER 1
#define CONFIG_PAM_ENCODER 1
#define CONFIG_PBM_ENCODER 1
#define CONFIG_PGM_ENCODER 1
#define CONFIG_PGMYUV_ENCODER 1
#define CONFIG_PNG_ENCODER 1
#define CONFIG_PPM_ENCODER 1
#define CONFIG_QTRLE_ENCODER 0
#define CONFIG_RAWVIDEO_ENCODER 0
#define CONFIG_ROQ_ENCODER 0
#define CONFIG_RV10_ENCODER 1
#define CONFIG_RV20_ENCODER 1
#define CONFIG_SGI_ENCODER 0
#define CONFIG_SNOW_ENCODER 1
#define CONFIG_SVQ1_ENCODER 0
#define CONFIG_TARGA_ENCODER 0
#define CONFIG_TIFF_ENCODER 0
#define CONFIG_WMV1_ENCODER 1
#define CONFIG_WMV2_ENCODER 0
#define CONFIG_ZLIB_ENCODER 0
#define CONFIG_ZMBV_ENCODER 0
#define CONFIG_AC3_ENCODER 0
#define CONFIG_ALAC_ENCODER 0
#define CONFIG_FLAC_ENCODER 0
#define CONFIG_MP2_ENCODER 0
#define CONFIG_PCX_ENCODER 0
#define CONFIG_NELLYMOSER_ENCODER 0
#define CONFIG_SONIC_ENCODER 1
#define CONFIG_SONIC_LS_ENCODER 1
#define CONFIG_VORBIS_ENCODER 0
#define CONFIG_WMAV1_ENCODER 0
#define CONFIG_WMAV2_ENCODER 0
#define CONFIG_PCM_ALAW_ENCODER 1
#define CONFIG_PCM_F32BE_ENCODER 1
#define CONFIG_PCM_F32LE_ENCODER 1
#define CONFIG_PCM_F64BE_ENCODER 1
#define CONFIG_PCM_F64LE_ENCODER 1
#define CONFIG_PCM_MULAW_ENCODER 1
#define CONFIG_PCM_S8_ENCODER 1
#define CONFIG_PCM_S16BE_ENCODER 1
#define CONFIG_PCM_S16LE_ENCODER 1
#define CONFIG_PCM_S24BE_ENCODER 1
#define CONFIG_PCM_S24DAUD_ENCODER 1
#define CONFIG_PCM_S24LE_ENCODER 1
#define CONFIG_PCM_S32BE_ENCODER 1
#define CONFIG_PCM_S32LE_ENCODER 1
#define CONFIG_PCM_U8_ENCODER 1
#define CONFIG_PCM_U16BE_ENCODER 1
#define CONFIG_PCM_U16LE_ENCODER 1
#define CONFIG_PCM_U24BE_ENCODER 1
#define CONFIG_PCM_U24LE_ENCODER 1
#define CONFIG_PCM_U32BE_ENCODER 1
#define CONFIG_PCM_U32LE_ENCODER 1
#define CONFIG_PCM_ZORK_ENCODER 1
#define CONFIG_ROQ_DPCM_ENCODER 0
#define CONFIG_ADPCM_ADX_ENCODER 0
#define CONFIG_ADPCM_G726_ENCODER 1
#define CONFIG_ADPCM_IMA_QT_ENCODER 1
#define CONFIG_ADPCM_IMA_WAV_ENCODER 1
#define CONFIG_ADPCM_MS_ENCODER 1
#define CONFIG_ADPCM_SWF_ENCODER 1
#define CONFIG_ADPCM_YAMAHA_ENCODER 1
#define CONFIG_DVBSUB_ENCODER 0
#define CONFIG_DVDSUB_ENCODER 0
#define CONFIG_LIBAMR_NB_ENCODER 0
#define CONFIG_LIBAMR_WB_ENCODER 0
#define CONFIG_LIBDIRAC_ENCODER 0
#define CONFIG_LIBFAAC_ENCODER 0
#define CONFIG_LIBGSM_ENCODER 0
#define CONFIG_LIBGSM_MS_ENCODER 0
#define CONFIG_LIBMP3LAME_ENCODER 0
#define CONFIG_LIBSCHROEDINGER_ENCODER 0
#define CONFIG_LIBTHEORA_ENCODER 0
#define CONFIG_LIBVORBIS_ENCODER 0
#define CONFIG_LIBX264_ENCODER 0
#define CONFIG_LIBXVID_ENCODER 0
#define CONFIG_AAC_PARSER 1
#define CONFIG_AC3_PARSER 1
#define CONFIG_CAVSVIDEO_PARSER 1
#define CONFIG_DCA_PARSER 1
#define CONFIG_DIRAC_PARSER 1
#define CONFIG_DNXHD_PARSER 1
#define CONFIG_DVBSUB_PARSER 1
#define CONFIG_DVDSUB_PARSER 1
#define CONFIG_H261_PARSER 1
#define CONFIG_H263_PARSER 1
#define CONFIG_H264_PARSER 1
#define CONFIG_MJPEG_PARSER 1
#define CONFIG_MLP_PARSER 1
#define CONFIG_MPEG4VIDEO_PARSER 1
#define CONFIG_MPEGAUDIO_PARSER 1
#define CONFIG_MPEGVIDEO_PARSER 1
#define CONFIG_PNM_PARSER 1
#define CONFIG_VC1_PARSER 1
#define CONFIG_VP3_PARSER 1
#define CONFIG_AAC_DEMUXER 1
#define CONFIG_MLP_DEMUXER 1
#define CONFIG_AC3_DEMUXER 1
#define CONFIG_AIFF_DEMUXER 1
#define CONFIG_AMR_DEMUXER 1
#define CONFIG_APC_DEMUXER 1
#define CONFIG_APE_DEMUXER 1
#define CONFIG_ASF_DEMUXER 1
#define CONFIG_ASS_DEMUXER 1
#define CONFIG_TRUEHD_DEMUXER 1
#define CONFIG_AU_DEMUXER 1
#define CONFIG_AVI_DEMUXER 1
#define CONFIG_AVISYNTH_DEMUXER 0
#define CONFIG_AVS_DEMUXER 1
#define CONFIG_BETHSOFTVID_DEMUXER 1
#define CONFIG_BFI_DEMUXER 1
#define CONFIG_C93_DEMUXER 1
#define CONFIG_CAVSVIDEO_DEMUXER 1
#define CONFIG_DAUD_DEMUXER 1
#define CONFIG_DIRAC_DEMUXER 1
#define CONFIG_DNXHD_DEMUXER 1
#define CONFIG_DSICIN_DEMUXER 1
#define CONFIG_DTS_DEMUXER 1
#define CONFIG_DV_DEMUXER 1
#define CONFIG_DXA_DEMUXER 1
#define CONFIG_EA_DEMUXER 1
#define CONFIG_EA_CDATA_DEMUXER 1
#define CONFIG_EAC3_DEMUXER 1
#define CONFIG_FFM_DEMUXER 1
#define CONFIG_FLAC_DEMUXER 1
#define CONFIG_FLIC_DEMUXER 1
#define CONFIG_FLV_DEMUXER 1
#define CONFIG_FOURXM_DEMUXER 1
#define CONFIG_GSM_DEMUXER 1
#define CONFIG_GXF_DEMUXER 1
#define CONFIG_H261_DEMUXER 1
#define CONFIG_H263_DEMUXER 1
#define CONFIG_H264_DEMUXER 1
#define CONFIG_IDCIN_DEMUXER 1
#define CONFIG_IFF_DEMUXER 1
#define CONFIG_IMAGE2_DEMUXER 1
#define CONFIG_IMAGE2PIPE_DEMUXER 1
#define CONFIG_INGENIENT_DEMUXER 1
#define CONFIG_IPMOVIE_DEMUXER 1
#define CONFIG_ISS_DEMUXER 1
#define CONFIG_LMLM4_DEMUXER 1
#define CONFIG_M4V_DEMUXER 1
#define CONFIG_MATROSKA_DEMUXER 1
#define CONFIG_MJPEG_DEMUXER 1
#define CONFIG_MLP_DEMUXER 1
#define CONFIG_MM_DEMUXER 1
#define CONFIG_MMF_DEMUXER 1
#define CONFIG_MOV_DEMUXER 1
#define CONFIG_MP3_DEMUXER 1
#define CONFIG_MPC_DEMUXER 1
#define CONFIG_MPC8_DEMUXER 1
#define CONFIG_MPEGPS_DEMUXER 1
#define CONFIG_MPEGTS_DEMUXER 1
#define CONFIG_MPEGTSRAW_DEMUXER 1
#define CONFIG_MPEGVIDEO_DEMUXER 1
#define CONFIG_MSNWC_TCP_DEMUXER 1
#define CONFIG_MTV_DEMUXER 1
#define CONFIG_MVI_DEMUXER 1
#define CONFIG_MXF_DEMUXER 1
#define CONFIG_NC_DEMUXER 1
#define CONFIG_NSV_DEMUXER 1
#define CONFIG_NUT_DEMUXER 1
#define CONFIG_NUV_DEMUXER 1
#define CONFIG_OGG_DEMUXER 1
#define CONFIG_OMA_DEMUXER 1
#define CONFIG_PCM_ALAW_DEMUXER 1
#define CONFIG_PCM_MULAW_DEMUXER 1
#define CONFIG_PCM_F64BE_DEMUXER 1
#define CONFIG_PCM_F64LE_DEMUXER 1
#define CONFIG_PCM_F32BE_DEMUXER 1
#define CONFIG_PCM_F32LE_DEMUXER 1
#define CONFIG_PCM_S32BE_DEMUXER 1
#define CONFIG_PCM_S32LE_DEMUXER 1
#define CONFIG_PCM_S24BE_DEMUXER 1
#define CONFIG_PCM_S24LE_DEMUXER 1
#define CONFIG_PCM_S16BE_DEMUXER 1
#define CONFIG_PCM_S16LE_DEMUXER 1
#define CONFIG_PCM_S8_DEMUXER 1
#define CONFIG_PCM_U32BE_DEMUXER 1
#define CONFIG_PCM_U32LE_DEMUXER 1
#define CONFIG_PCM_U24BE_DEMUXER 1
#define CONFIG_PCM_U24LE_DEMUXER 1
#define CONFIG_PCM_U16BE_DEMUXER 1
#define CONFIG_PCM_U16LE_DEMUXER 1
#define CONFIG_PCM_U8_DEMUXER 1
#define CONFIG_PVA_DEMUXER 1
#define CONFIG_R3D_DEMUXER 1
#define CONFIG_RAWVIDEO_DEMUXER 1
#define CONFIG_REDIR_DEMUXER 0
#define CONFIG_RL2_DEMUXER 1
#define CONFIG_RM_DEMUXER 1
#define CONFIG_ROQ_DEMUXER 1
#define CONFIG_RPL_DEMUXER 1
#define CONFIG_RTSP_DEMUXER 0
#define CONFIG_SDP_DEMUXER 0
#define CONFIG_SEGAFILM_DEMUXER 1
#define CONFIG_SHORTEN_DEMUXER 1
#define CONFIG_SIFF_DEMUXER 1
#define CONFIG_SMACKER_DEMUXER 1
#define CONFIG_SOL_DEMUXER 1
#define CONFIG_STR_DEMUXER 1
#define CONFIG_SWF_DEMUXER 1
#define CONFIG_THP_DEMUXER 1
#define CONFIG_TIERTEXSEQ_DEMUXER 1
#define CONFIG_TTA_DEMUXER 1
#define CONFIG_TXD_DEMUXER 1
#define CONFIG_VC1_DEMUXER 1
#define CONFIG_VC1T_DEMUXER 1
#define CONFIG_VMD_DEMUXER 1
#define CONFIG_VOC_DEMUXER 1
#define CONFIG_VQF_DEMUXER 1
#define CONFIG_WAV_DEMUXER 1
#define CONFIG_WC3_DEMUXER 1
#define CONFIG_WSAUD_DEMUXER 1
#define CONFIG_WSVQA_DEMUXER 1
#define CONFIG_WV_DEMUXER 1
#define CONFIG_XA_DEMUXER 1
#define CONFIG_YUV4MPEGPIPE_DEMUXER 1
#define CONFIG_LIBNUT_DEMUXER 0
#define CONFIG_AC3_MUXER 1
#define CONFIG_ADTS_MUXER 0
#define CONFIG_AIFF_MUXER 1
#define CONFIG_AMR_MUXER 1
#define CONFIG_ASF_MUXER 0
#define CONFIG_ASS_MUXER 0
#define CONFIG_TRUEHD_MUXER 1
#define CONFIG_ASF_STREAM_MUXER 0
#define CONFIG_AU_MUXER 1
#define CONFIG_AVI_MUXER 0
#define CONFIG_AVM2_MUXER 0
#define CONFIG_CRC_MUXER 0
#define CONFIG_DAUD_MUXER 1
#define CONFIG_DIRAC_MUXER 1
#define CONFIG_DNXHD_MUXER 1
#define CONFIG_DTS_MUXER 1
#define CONFIG_DV_MUXER 0
#define CONFIG_EAC3_MUXER 1
#define CONFIG_FFM_MUXER 0
#define CONFIG_FLAC_MUXER 0
#define CONFIG_FLV_MUXER 0
#define CONFIG_FRAMECRC_MUXER 0
#define CONFIG_GIF_MUXER 0
#define CONFIG_GXF_MUXER 0
#define CONFIG_H261_MUXER 1
#define CONFIG_H263_MUXER 1
#define CONFIG_H264_MUXER 1
#define CONFIG_IMAGE2_MUXER 1
#define CONFIG_IMAGE2PIPE_MUXER 1
#define CONFIG_IPOD_MUXER 0
#define CONFIG_M4V_MUXER 1
#define CONFIG_MATROSKA_MUXER 0
#define CONFIG_MATROSKA_AUDIO_MUXER 0
#define CONFIG_MJPEG_MUXER 1
#define CONFIG_MMF_MUXER 1
#define CONFIG_MOV_MUXER 0
#define CONFIG_MP2_MUXER 1
#define CONFIG_MP3_MUXER 1
#define CONFIG_MP4_MUXER 0
#define CONFIG_MLP_MUXER 1
#define CONFIG_MPEG1SYSTEM_MUXER 0
#define CONFIG_MPEG1VCD_MUXER 0
#define CONFIG_MPEG1VIDEO_MUXER 1
#define CONFIG_MPEG2DVD_MUXER 0
#define CONFIG_MPEG2SVCD_MUXER 0
#define CONFIG_MPEG2VIDEO_MUXER 1
#define CONFIG_MPEG2VOB_MUXER 0
#define CONFIG_MPEGTS_MUXER 0
#define CONFIG_MPJPEG_MUXER 0
#define CONFIG_MXF_MUXER 0
#define CONFIG_MXF_D10_MUXER 0
#define CONFIG_NULL_MUXER 1
#define CONFIG_NUT_MUXER 0
#define CONFIG_OGG_MUXER 0
#define CONFIG_PCM_ALAW_MUXER 1
#define CONFIG_PCM_MULAW_MUXER 1
#define CONFIG_PCM_F64BE_MUXER 1
#define CONFIG_PCM_F64LE_MUXER 1
#define CONFIG_PCM_F32BE_MUXER 1
#define CONFIG_PCM_F32LE_MUXER 1
#define CONFIG_PCM_S32BE_MUXER 1
#define CONFIG_PCM_S32LE_MUXER 1
#define CONFIG_PCM_S24BE_MUXER 1
#define CONFIG_PCM_S24LE_MUXER 1
#define CONFIG_PCM_S16BE_MUXER 1
#define CONFIG_PCM_S16LE_MUXER 1
#define CONFIG_PCM_S8_MUXER 1
#define CONFIG_PCM_U32BE_MUXER 1
#define CONFIG_PCM_U32LE_MUXER 1
#define CONFIG_PCM_U24BE_MUXER 1
#define CONFIG_PCM_U24LE_MUXER 1
#define CONFIG_PCM_U16BE_MUXER 1
#define CONFIG_PCM_U16LE_MUXER 1
#define CONFIG_PCM_U8_MUXER 1
#define CONFIG_PSP_MUXER 0
#define CONFIG_RAWVIDEO_MUXER 1
#define CONFIG_RM_MUXER 0
#define CONFIG_ROQ_MUXER 1
#define CONFIG_RTP_MUXER 0
#define CONFIG_SWF_MUXER 0
#define CONFIG_TG2_MUXER 0
#define CONFIG_TGP_MUXER 0
#define CONFIG_VC1T_MUXER 0
#define CONFIG_VOC_MUXER 0
#define CONFIG_WAV_MUXER 1
#define CONFIG_YUV4MPEGPIPE_MUXER 1
#define CONFIG_LIBNUT_MUXER 0
#define CONFIG_FILE_PROTOCOL 0
#define CONFIG_GOPHER_PROTOCOL 0
#define CONFIG_HTTP_PROTOCOL 0
#define CONFIG_PIPE_PROTOCOL 0
#define CONFIG_RTP_PROTOCOL 0
#define CONFIG_TCP_PROTOCOL 0
#define CONFIG_UDP_PROTOCOL 0
#define CONFIG_DUMP_EXTRADATA_BSF 1
#define CONFIG_H264_MP4TOANNEXB_BSF 1
#define CONFIG_IMX_DUMP_HEADER_BSF 1
#define CONFIG_MJPEGA_DUMP_HEADER_BSF 1
#define CONFIG_MP3_HEADER_COMPRESS_BSF 1
#define CONFIG_MP3_HEADER_DECOMPRESS_BSF 1
#define CONFIG_MOV2TEXTSUB_BSF 1
#define CONFIG_NOISE_BSF 1
#define CONFIG_REMOVE_EXTRADATA_BSF 1
#define CONFIG_TEXT2MOVSUB_BSF 1
#define CONFIG_H263_VAAPI_HWACCEL 0
#define CONFIG_MPEG2_VAAPI_HWACCEL 0
#define CONFIG_MPEG4_VAAPI_HWACCEL 0
#define CONFIG_H264_VAAPI_HWACCEL 0
#define CONFIG_VC1_VAAPI_HWACCEL 0
#define CONFIG_WMV3_VAAPI_HWACCEL 0
#undef CONFIG_LIBBS2B
#define CONFIG_TMV_DECODER 1
#define CONFIG_V210_DECODER 1
#define CONFIG_V210_ENCODER 0
#define CONFIG_QCP_DEMUXER 1
#define CONFIG_TMV_DEMUXER 1
#define CONFIG_TMV_MUXER 1
#define CONFIG_AAC_ADTSTOASC_BSF 1
#define CONFIG_SOX_DEMUXER 1
#define CONFIG_SOX_MUXER 0
#define CONFIG_LIBOPENCORE_AMRNB_ENCODER 0
#define CONFIG_LIBOPENCORE_AMRNB_DECODER 0
#define CONFIG_LIBOPENCORE_AMRWB_DECODER 0
#define CONFIG_LIBOPENCORE_AMRWB_ENCODER 0

#endif /* MPLAYER_CONFIG_H */
