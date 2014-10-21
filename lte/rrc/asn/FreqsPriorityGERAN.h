/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_FreqsPriorityGERAN_H_
#define	_FreqsPriorityGERAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CarrierFreqsGERAN.h"
#include "CellReselectionPriority.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FreqsPriorityGERAN */
typedef struct FreqsPriorityGERAN {
	CarrierFreqsGERAN_t	 carrierFreqs;
	CellReselectionPriority_t	 cellReselectionPriority;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FreqsPriorityGERAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FreqsPriorityGERAN;

#ifdef __cplusplus
}
#endif

#endif	/* _FreqsPriorityGERAN_H_ */
#include <asn_internal.h>
