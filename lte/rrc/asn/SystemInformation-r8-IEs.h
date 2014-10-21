/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SystemInformation_r8_IEs_H_
#define	_SystemInformation_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "SystemInformationBlockType2.h"
#include "SystemInformationBlockType3.h"
#include "SystemInformationBlockType4.h"
#include "SystemInformationBlockType5.h"
#include "SystemInformationBlockType6.h"
#include "SystemInformationBlockType7.h"
#include "SystemInformationBlockType8.h"
#include "SystemInformationBlockType9.h"
#include "SystemInformationBlockType10.h"
#include "SystemInformationBlockType11.h"
#include "SystemInformationBlockType12-r9.h"
#include "SystemInformationBlockType13-r9.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR {
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_NOTHING,	/* No components present */
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib2,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib3,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib4,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib5,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib6,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib7,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib8,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib9,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib10,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib11,
	/* Extensions may appear below */
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib12_v920,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib13_v920
} SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR;

/* Forward declarations */
struct SystemInformation_v8a0_IEs;

/* SystemInformation-r8-IEs */
typedef struct SystemInformation_r8_IEs {
	struct SystemInformation_r8_IEs__sib_TypeAndInfo {
		A_SEQUENCE_OF(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member {
			SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR present;
			union SystemInformation_r8_IEs__sib_TypeAndInfo__Member_u {
				SystemInformationBlockType2_t	 sib2;
				SystemInformationBlockType3_t	 sib3;
				SystemInformationBlockType4_t	 sib4;
				SystemInformationBlockType5_t	 sib5;
				SystemInformationBlockType6_t	 sib6;
				SystemInformationBlockType7_t	 sib7;
				SystemInformationBlockType8_t	 sib8;
				SystemInformationBlockType9_t	 sib9;
				SystemInformationBlockType10_t	 sib10;
				SystemInformationBlockType11_t	 sib11;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				SystemInformationBlockType12_r9_t	 sib12_v920;
				SystemInformationBlockType13_r9_t	 sib13_v920;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} ) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} sib_TypeAndInfo;
	struct SystemInformation_v8a0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformation_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformation_r8_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SystemInformation-v8a0-IEs.h"

#endif	/* _SystemInformation_r8_IEs_H_ */
#include <asn_internal.h>
