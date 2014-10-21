/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "NeighCellCDMA2000-v920.h"

static asn_TYPE_member_t asn_MBR_NeighCellCDMA2000_v920_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NeighCellCDMA2000_v920, neighCellsPerFreqList_v920),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NeighCellsPerBandclassListCDMA2000_v920,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"neighCellsPerFreqList-v920"
		},
};
static ber_tlv_tag_t asn_DEF_NeighCellCDMA2000_v920_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_NeighCellCDMA2000_v920_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* neighCellsPerFreqList-v920 at 1713 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NeighCellCDMA2000_v920_specs_1 = {
	sizeof(struct NeighCellCDMA2000_v920),
	offsetof(struct NeighCellCDMA2000_v920, _asn_ctx),
	asn_MAP_NeighCellCDMA2000_v920_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_NeighCellCDMA2000_v920 = {
	"NeighCellCDMA2000-v920",
	"NeighCellCDMA2000-v920",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_NeighCellCDMA2000_v920_tags_1,
	sizeof(asn_DEF_NeighCellCDMA2000_v920_tags_1)
		/sizeof(asn_DEF_NeighCellCDMA2000_v920_tags_1[0]), /* 1 */
	asn_DEF_NeighCellCDMA2000_v920_tags_1,	/* Same as above */
	sizeof(asn_DEF_NeighCellCDMA2000_v920_tags_1)
		/sizeof(asn_DEF_NeighCellCDMA2000_v920_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_NeighCellCDMA2000_v920_1,
	1,	/* Elements count */
	&asn_SPC_NeighCellCDMA2000_v920_specs_1	/* Additional specs */
};

