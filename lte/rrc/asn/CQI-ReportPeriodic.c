/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "CQI-ReportPeriodic.h"

static int
memb_k_constraint_8(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_cqi_PUCCH_ResourceIndex_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1185)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_cqi_pmi_ConfigIndex_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ri_ConfigIndex_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_k_constr_9 = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_cqi_FormatIndicatorPeriodic_constr_6 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cqi_PUCCH_ResourceIndex_constr_4 = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1185 }	/* (0..1185) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cqi_pmi_ConfigIndex_constr_5 = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ri_ConfigIndex_constr_10 = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_CQI_ReportPeriodic_constr_1 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_subbandCQI_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic__subbandCQI, k),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_k_constraint_8,
		&asn_PER_memb_k_constr_9,
		0,
		"k"
		},
};
static ber_tlv_tag_t asn_DEF_subbandCQI_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_subbandCQI_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* k at 1890 */
};
static asn_SEQUENCE_specifics_t asn_SPC_subbandCQI_specs_8 = {
	sizeof(struct CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic__subbandCQI),
	offsetof(struct CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic__subbandCQI, _asn_ctx),
	asn_MAP_subbandCQI_tag2el_8,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subbandCQI_8 = {
	"subbandCQI",
	"subbandCQI",
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
	asn_DEF_subbandCQI_tags_8,
	sizeof(asn_DEF_subbandCQI_tags_8)
		/sizeof(asn_DEF_subbandCQI_tags_8[0]) - 1, /* 1 */
	asn_DEF_subbandCQI_tags_8,	/* Same as above */
	sizeof(asn_DEF_subbandCQI_tags_8)
		/sizeof(asn_DEF_subbandCQI_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_subbandCQI_8,
	1,	/* Elements count */
	&asn_SPC_subbandCQI_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cqi_FormatIndicatorPeriodic_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic, choice.widebandCQI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"widebandCQI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic, choice.subbandCQI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_subbandCQI_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"subbandCQI"
		},
};
static asn_TYPE_tag2member_t asn_MAP_cqi_FormatIndicatorPeriodic_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* widebandCQI at 1888 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* subbandCQI at 1891 */
};
static asn_CHOICE_specifics_t asn_SPC_cqi_FormatIndicatorPeriodic_specs_6 = {
	sizeof(struct CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic),
	offsetof(struct CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic, _asn_ctx),
	offsetof(struct CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic, present),
	sizeof(((struct CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic *)0)->present),
	asn_MAP_cqi_FormatIndicatorPeriodic_tag2el_6,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cqi_FormatIndicatorPeriodic_6 = {
	"cqi-FormatIndicatorPeriodic",
	"cqi-FormatIndicatorPeriodic",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_cqi_FormatIndicatorPeriodic_constr_6,
	asn_MBR_cqi_FormatIndicatorPeriodic_6,
	2,	/* Elements count */
	&asn_SPC_cqi_FormatIndicatorPeriodic_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic__setup, cqi_PUCCH_ResourceIndex),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_cqi_PUCCH_ResourceIndex_constraint_3,
		&asn_PER_memb_cqi_PUCCH_ResourceIndex_constr_4,
		0,
		"cqi-PUCCH-ResourceIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic__setup, cqi_pmi_ConfigIndex),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_cqi_pmi_ConfigIndex_constraint_3,
		&asn_PER_memb_cqi_pmi_ConfigIndex_constr_5,
		0,
		"cqi-pmi-ConfigIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic__setup, cqi_FormatIndicatorPeriodic),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cqi_FormatIndicatorPeriodic_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cqi-FormatIndicatorPeriodic"
		},
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportPeriodic__setup, ri_ConfigIndex),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_ri_ConfigIndex_constraint_3,
		&asn_PER_memb_ri_ConfigIndex_constr_10,
		0,
		"ri-ConfigIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic__setup, simultaneousAckNackAndCQI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"simultaneousAckNackAndCQI"
		},
};
static int asn_MAP_setup_oms_3[] = { 3 };
static ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cqi-PUCCH-ResourceIndex at 1885 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cqi-pmi-ConfigIndex at 1886 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cqi-FormatIndicatorPeriodic at 1888 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ri-ConfigIndex at 1893 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* simultaneousAckNackAndCQI at 1894 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct CQI_ReportPeriodic__setup),
	offsetof(struct CQI_ReportPeriodic__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	5,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
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
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_3,
	5,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CQI_ReportPeriodic_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_CQI_ReportPeriodic_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release at 1883 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup at 1885 */
};
static asn_CHOICE_specifics_t asn_SPC_CQI_ReportPeriodic_specs_1 = {
	sizeof(struct CQI_ReportPeriodic),
	offsetof(struct CQI_ReportPeriodic, _asn_ctx),
	offsetof(struct CQI_ReportPeriodic, present),
	sizeof(((struct CQI_ReportPeriodic *)0)->present),
	asn_MAP_CQI_ReportPeriodic_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_CQI_ReportPeriodic = {
	"CQI-ReportPeriodic",
	"CQI-ReportPeriodic",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_CQI_ReportPeriodic_constr_1,
	asn_MBR_CQI_ReportPeriodic_1,
	2,	/* Elements count */
	&asn_SPC_CQI_ReportPeriodic_specs_1	/* Additional specs */
};

