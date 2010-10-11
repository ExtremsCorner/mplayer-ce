/*
 * This file is part of MPlayer CE.
 *
 * MPlayer CE is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * MPlayer CE is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with MPlayer CE; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef AVUTIL_PPC_PAIRED_H
#define AVUTIL_PPC_PAIRED_H

#include "config.h"

#if HAVE_PAIRED_H
#include <paired.h>
#else
#define vector register
#endif

#define psq_l(d, rA, W, I) ({																\
	vector float frD;																		\
	asm volatile("psq_l	%0,%1(%2),%3,%4" : "=f"(frD) : "i"(d), "b"(rA), "i"(W), "i"(I));	\
	frD;																					\
})

#define psq_lx(rA, rB, W, I) ({																	\
	vector float frD;																			\
	asm volatile("psq_lx	%0,%1,%2,%3,%4" : "=f"(frD) : "b"(rA), "r"(rB), "i"(W), "i"(I));	\
	frD;																						\
})

#define psq_lu(d, rA, W, I) ({																	\
	vector float frD;																			\
	asm volatile("psq_lu	%0,%1(%2),%3,%4" : "=f"(frD) : "i"(d), "b"(rA), "i"(W), "i"(I));	\
	frD;																						\
})

#define psq_lux(rA, rB, W, I) ({																\
	vector float frD;																			\
	asm volatile("psq_lux	%0,%1,%2,%3,%4" : "=f"(frD) : "b"(rA), "r"(rB), "i"(W), "i"(I));	\
	frD;																						\
})

#define psq_st(frD, d, rA, W, I) ({																\
	asm volatile("psq_st	%0,%1(%2),%3,%4" : : "f"(frD), "i"(d), "b"(rA), "i"(W), "i"(I));	\
})

#define psq_stx(frD, rA, rB, W, I) ({															\
	asm volatile("psq_stx	%0,%1,%2,%3,%4" : : "f"(frD), "b"(rA), "r"(rB), "i"(W), "i"(I));	\
})

#define psq_stu(frD, d, rA, W, I) ({															\
	asm volatile("psq_stu	%0,%1(%2),%3,%4" : : "f"(frD), "i"(d), "b"(rA), "i"(W), "i"(I));	\
})

#define psq_stux(frD, rA, rB, W, I) ({															\
	asm volatile("psq_stux	%0,%1,%2,%3,%4" : : "f"(frD), "b"(rA), "r"(rB), "i"(W), "i"(I));	\
})

#define ps_neg(frB) ({							\
	vector float frD;							\
	asm("ps_neg	%0,%1" : "=f"(frD) : "f"(frB));	\
	frD;										\
})

#define ps_add(frA, frB) ({										\
	vector float frD;											\
	asm("ps_add	%0,%1,%2" : "=f"(frD) : "f"(frA), "f"(frB));	\
	frD;														\
})

#define ps_sub(frA, frB) ({										\
	vector float frD;											\
	asm("ps_sub	%0,%1,%2" : "=f"(frD) : "f"(frA), "f"(frB));	\
	frD;														\
})

#define ps_mul(frA, frC) ({										\
	vector float frD;											\
	asm("ps_mul	%0,%1,%2" : "=f"(frD) : "f"(frA), "f"(frC));	\
	frD;														\
})

#define ps_madd(frA, frC, frB) ({												\
	vector float frD;															\
	asm("ps_madd	%0,%1,%2,%3" : "=f"(frD) : "f"(frA), "f"(frC), "f"(frB));	\
	frD;																		\
})

#define ps_madds0(frA, frC, frB) ({												\
	vector float frD;															\
	asm("ps_madds0	%0,%1,%2,%3" : "=f"(frD) : "f"(frA), "f"(frC), "f"(frB));	\
	frD;																		\
})

#define ps_madds1(frA, frC, frB) ({												\
	vector float frD;															\
	asm("ps_madds1	%0,%1,%2,%3" : "=f"(frD) : "f"(frA), "f"(frC), "f"(frB));	\
	frD;																		\
})

#define ps_msub(frA, frC, frB) ({												\
	vector float frD;															\
	asm("ps_msub	%0,%1,%2,%3" : "=f"(frD) : "f"(frA), "f"(frC), "f"(frB));	\
	frD;																		\
})

#define ps_muls0(frA, frC) ({										\
	vector float frD;												\
	asm("ps_muls0	%0,%1,%2" : "=f"(frD) : "f"(frA), "f"(frC));	\
	frD;															\
})

#define ps_muls1(frA, frC) ({										\
	vector float frD;												\
	asm("ps_muls1	%0,%1,%2" : "=f"(frD) : "f"(frA), "f"(frC));	\
	frD;															\
})

#define ps_nmadd(frA, frC, frB) ({												\
	vector float frD;															\
	asm("ps_nmadd	%0,%1,%2,%3" : "=f"(frD) : "f"(frA), "f"(frC), "f"(frB));	\
	frD;																		\
})

#define ps_nmsub(frA, frC, frB) ({												\
	vector float frD;															\
	asm("ps_nmsub	%0,%1,%2,%3" : "=f"(frD) : "f"(frA), "f"(frC), "f"(frB));	\
	frD;																		\
})

#define ps_merge00(frA, frB) ({										\
	vector float frD;												\
	asm("ps_merge00	%0,%1,%2" : "=f"(frD) : "f"(frA), "f"(frB));	\
	frD;															\
})

#define ps_merge01(frA, frB) ({										\
	vector float frD;												\
	asm("ps_merge01	%0,%1,%2" : "=f"(frD) : "f"(frA), "f"(frB));	\
	frD;															\
})

#define ps_merge10(frA, frB) ({										\
	vector float frD;												\
	asm("ps_merge10	%0,%1,%2" : "=f"(frD) : "f"(frA), "f"(frB));	\
	frD;															\
})

#define ps_merge11(frA, frB) ({										\
	vector float frD;												\
	asm("ps_merge11	%0,%1,%2" : "=f"(frD) : "f"(frA), "f"(frB));	\
	frD;															\
})

#define ps_sum0(frA, frC, frB) ({												\
	vector float frD;															\
	asm("ps_sum0	%0,%1,%2,%3" : "=f"(frD) : "f"(frA), "f"(frC), "f"(frB));	\
	frD;																		\
})

#define ps_sum1(frA, frC, frB) ({												\
	vector float frD;															\
	asm("ps_sum1	%0,%1,%2,%3" : "=f"(frD) : "f"(frA), "f"(frC), "f"(frB));	\
	frD;																		\
})

#if !HAVE_PAIRED_H
#define paired_msub ps_msub
#define paired_madd ps_madd
#define paired_nmsub ps_nmsub
#define paired_nmadd ps_nmadd
#define paired_sum0 ps_sum0
#define paired_sum1 ps_sum1
#define paired_add ps_add
#define paired_sub ps_sub
#define paired_mul ps_mul
#define paired_muls0 ps_muls0
#define paired_muls1 ps_muls1
#define paired_madds0 ps_madds0
#define paired_madds1 ps_madds1
#define paired_merge00 ps_merge00
#define paired_merge01 ps_merge01
#define paired_merge10 ps_merge10
#define paired_merge11 ps_merge11
#define paired_neg ps_neg
#define paired_stx(frD,rB,rA) psq_stx(frD,rA,rB,0,0)
#define paired_lx(rB,rA) psq_lx(rA,rB,0,0)
#endif

#endif /* AVUTIL_PPC_PAIRED_H */
