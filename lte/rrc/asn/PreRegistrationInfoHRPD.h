/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_PreRegistrationInfoHRPD_H_
#define	_PreRegistrationInfoHRPD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "PreRegistrationZoneIdHRPD.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SecondaryPreRegistrationZoneIdListHRPD;

/* PreRegistrationInfoHRPD */
typedef struct PreRegistrationInfoHRPD {
	BOOLEAN_t	 preRegistrationAllowed;
	PreRegistrationZoneIdHRPD_t	*preRegistrationZoneId	/* OPTIONAL */;
	struct SecondaryPreRegistrationZoneIdListHRPD	*secondaryPreRegistrationZoneIdList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PreRegistrationInfoHRPD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PreRegistrationInfoHRPD;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SecondaryPreRegistrationZoneIdListHRPD.h"

#endif	/* _PreRegistrationInfoHRPD_H_ */
#include <asn_internal.h>
