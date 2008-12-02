/* $Id: sn_fru.h,v 1.1.1.4 2003/10/14 08:09:11 sparq Exp $
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 1992 - 1997, 1999-2001 Silicon Graphics, Inc. 
 * All rights reserved.
 */
#ifndef _ASM_IA64_SN_SN_FRU_H
#define _ASM_IA64_SN_SN_FRU_H

#define MAX_DIMMS			8	 /* max # of dimm banks */
#define MAX_PCIDEV			8	 /* max # of pci devices on a pci bus */

typedef unsigned char confidence_t;

typedef struct kf_mem_s {
	confidence_t km_confidence; /* confidence level that the memory is bad
				     * is this necessary ?
				     */
	confidence_t km_dimm[MAX_DIMMS];
				    /* confidence level that dimm[i] is bad
				     *I think this is the right number
				     */

} kf_mem_t;

typedef struct kf_cpu_s {
	confidence_t	kc_confidence; /* confidence level that cpu is bad */
	confidence_t	kc_icache; /* confidence level that instr. cache is bad */
	confidence_t	kc_dcache; /* confidence level that data   cache is bad */
	confidence_t	kc_scache; /* confidence level that sec.   cache is bad */
	confidence_t	kc_sysbus; /* confidence level that sysad/cmd/state bus is bad */
} kf_cpu_t;


typedef struct kf_pci_bus_s {
	confidence_t	kpb_belief;	/* confidence level  that the  pci bus is bad */
	confidence_t	kpb_pcidev_belief[MAX_PCIDEV];
					/* confidence level that the pci dev is bad */
} kf_pci_bus_t;


#endif /* _ASM_IA64_SN_SN_FRU_H */

