/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "EUTRA-InterNodeDefinitions.asn"
 */

#ifndef	_AdditionalReestabInfoList_H_
#define	_AdditionalReestabInfoList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AdditionalReestabInfo;

/* AdditionalReestabInfoList */
typedef struct AdditionalReestabInfoList {
	A_SEQUENCE_OF(struct AdditionalReestabInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AdditionalReestabInfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AdditionalReestabInfoList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AdditionalReestabInfo.h"

#endif	/* _AdditionalReestabInfoList_H_ */
#include <asn_internal.h>
