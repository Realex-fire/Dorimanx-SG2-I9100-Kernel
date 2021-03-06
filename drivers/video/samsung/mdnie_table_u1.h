#ifndef __MDNIE_TABLE_H__
#define __MDNIE_TABLE_H__

#include "mdnie.h"


static unsigned short tune_dynamic_gallery[] = {
	/*start U1 dynamic gallery */
	0x0001, 0x0041, /*SCR + PCC */
	0x002c, 0x0fff, /*DNR bypass 0x003C */
	0x002d, 0x1900, /*DNR bypass 0x0a08 */
	0x002e, 0x0000, /*DNR bypass 0x1010 */
	0x002f, 0x0fff, /*DNR bypass 0x0400 */
	0x003A, 0x000D, /*HDTR DE CS */
	0x003B, 0x03ff, /*DE SHARPNESS */
	0x003C, 0x0000, /*NOISE LEVEL */
	0x003F, 0x012c, /*CS GAIN  */
	0x0042, 0x0020, /*DE TH (MAX DIFF) */
	0x0049, 0x0400, /*pcc skin */
	0x004a, 0x7a00,
	0x004b, 0x008f,
	0x004d, 0x0100, /*pcc strength */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0x0000, /*gc R */
	0x00ca, 0xffff,	/*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x0000, /*rm G */
	0x00cf, 0xffff, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x00ff, /*gc B */
	0x00d2, 0x00ff, /*rm B */
	0x00d3, 0x00ff, /*yw B */
	0x00D6, 0x1d00, /*GAMMA start C210 */
	0x00D7, 0x1d00,
	0x00D8, 0x1d00,
	0x00D9, 0x1d00,
	0x00DA, 0x1d00,
	0x00DB, 0x1d00,
	0x00DC, 0x1d00,
	0x00DD, 0x1d00,
	0x00DE, 0x1d00,
	0x00DF, 0x1d00,
	0x00E0, 0x1d00,
	0x00E1, 0x1d00,
	0x00E2, 0x1d00,
	0x00E3, 0x1d00,
	0x00E4, 0x1d00,
	0x00E5, 0xa40e,
	0x00E6, 0xa40e,
	0x00E7, 0xa40e,
	0x00E8, 0xa819,
	0x00E9, 0xa40a,
	0x00EA, 0x2200,
	0x00EB, 0x1c25,
	0x00EC, 0x1842,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000
};

static unsigned short tune_dynamic_ui[] = {
	/*start U1 dynamic ui */
	0x0001, 0x0000,
	0x002c, 0x0fff, /*DNR bypass 0x003C */
	0x002d, 0x1900, /*DNR bypass 0x0a08 */
	0x002e, 0x0000, /*DNR bypass 0x1010 */
	0x002f, 0x0fff, /*DNR bypass 0x0400 */
	0x003A, 0x000d, /*HDTR DE_off CS : de on = d ,  de off = 9 */
	0x003B, 0x0001, /*DE SHARPNESS(0~1023)  off */
	0x003C, 0x0000, /*NOISE LEVEL */
	0x003F, 0x012c, /*CS GAIN 300 */
	0x003B, 0x0001, /*DE SHARPNESS(0~1023)  off */
	0x0042, 0x0030, /*DE TH (MAX DIFF) */
	0x004d, 0x0100, /*pcc strength */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0x0000, /*gc R */
	0x00ca, 0xffff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x0000, /*rm G */
	0x00cf, 0xffff, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x00ff, /*gc B */
	0x00d2, 0x00ff, /*rm B */
	0x00d3, 0x00ff, /*yw B */
	0x00D6, 0x1d00, /*GAMMA start */
	0x00D7, 0x1d00,
	0x00D8, 0x1d00,
	0x00D9, 0x1d00,
	0x00DA, 0x1d00,
	0x00DB, 0x1d00,
	0x00DC, 0x1d00,
	0x00DD, 0x1d00,
	0x00DE, 0x1d00,
	0x00DF, 0x1d00,
	0x00E0, 0x1d00,
	0x00E1, 0x1d00,
	0x00E2, 0x1d00,
	0x00E3, 0x1d00,
	0x00E4, 0x1d00,
	0x00E5, 0xa40e,
	0x00E6, 0xa40e,
	0x00E7, 0xa40e,
	0x00E8, 0xa819,
	0x00E9, 0xa40a,
	0x00EA, 0x2200,
	0x00EB, 0x1c25,
	0x00EC, 0x1842,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000
};

static unsigned short tune_dynamic_video[] = {
	/*start U1 dynamic video */
	0x0001, 0x0041, /*PCC 40 */
	0x002c, 0x003C, /*DNR bypass 0x003C */
	0x002d, 0x1908, /*DNR bypass 0x0a08 */
	0x002e, 0x1005, /*DNR bypass 0x1010 */
	0x002f, 0x0400, /*DNR bypass 0x0400 */
	0x003A, 0x000D, /*HDTR DE CS  de on = d ,  de off = 9 */
	0x003B, 0x03ff, /*DE SHARPNESS */
	0x003C, 0x0000, /*NOISE LEVEL */
	0x003F, 0x012c, /*CS GAIN  */
	0x0042, 0x0020, /*DE TH (MAX DIFF) */
	0x0049, 0x0400, /*pcc skin */
	0x004a, 0x7a00, /*7300 */
	0x004b, 0x008F, /*008f */
	0x004d, 0x0100, /*pcc strength */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0x0000, /*gc R */
	0x00ca, 0xffff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x0000, /*rm G */
	0x00cf, 0xffff, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x00ff, /*gc B */
	0x00d2, 0x00ff, /*rm B */
	0x00d3, 0x00ff, /*yw B */
	0x00D6, 0x1d00, /*GAMMA start C210 */
	0x00D7, 0x1d00,
	0x00D8, 0x1d00,
	0x00D9, 0x1d00,
	0x00DA, 0x1d00,
	0x00DB, 0x1d00,
	0x00DC, 0x1d00,
	0x00DD, 0x1d00,
	0x00DE, 0x1d00,
	0x00DF, 0x1d00,
	0x00E0, 0x1d00,
	0x00E1, 0x1d00,
	0x00E2, 0x1d00,
	0x00E3, 0x1d00,
	0x00E4, 0x1d00,
	0x00E5, 0xa40e,
	0x00E6, 0xa40e,
	0x00E7, 0xa40e,
	0x00E8, 0xa819,
	0x00E9, 0xa40a,
	0x00EA, 0x2200,
	0x00EB, 0x1c25,
	0x00EC, 0x1842,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000,	/*Register Mask */
	/*end */
	END_SEQ, 0x0000
};

static unsigned short tune_dynamic_vt[] = {
	/*start U1 dynamic vt */
	0x0001, 0x0040, /*SCR HDTR */
	0x002c, 0x0fff, /*DNR dirTh */
	0x002d, 0x19ff, /*DNR dirnumTh decon7Th */
	0x002e, 0xff16, /*DNR decon5Th maskTh */
	0x002f, 0x0000, /*DNR blTh */
	0x003a, 0x000d, /*HDTR DE CS */
	0x003b, 0x03ff, /*DE SHARPNESS */
	0x003c, 0x0000, /*NOISE LEVEL */
	0x003f, 0x0100, /*CS GAIN */
	0x0042, 0x0000, /*DE TH (MAX DIFF) */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0x0000, /*gc R */
	0x00ca, 0xffff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x0000, /*rm G */
	0x00cf, 0xffff, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x00ff, /*gc B */
	0x00d2, 0x00ff, /*rm B */
	0x00d3, 0x00ff, /*yw B */
	0x00D6, 0x1d00, /*GAMMA start C210 */
	0x00D7, 0x1d00,
	0x00D8, 0x1d00,
	0x00D9, 0x1d00,
	0x00DA, 0x1d00,
	0x00DB, 0x1d00,
	0x00DC, 0x1d00,
	0x00DD, 0x1d00,
	0x00DE, 0x1d00,
	0x00DF, 0x1d00,
	0x00E0, 0x1d00,
	0x00E1, 0x1d00,
	0x00E2, 0x1d00,
	0x00E3, 0x1d00,
	0x00E4, 0x1d00,
	0x00E5, 0xa40e,
	0x00E6, 0xa40e,
	0x00E7, 0xa40e,
	0x00E8, 0xa819,
	0x00E9, 0xa40a,
	0x00EA, 0x2200,
	0x00EB, 0x1c25,
	0x00EC, 0x1842,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000
};

static unsigned short tune_movie_gallery[] = {
	/*start U1 movie gallery */
	0x0001, 0x0041, /*SCR + PCC */
	0x002c, 0x0fff, /*DNR bypass 0x003C */
	0x002d, 0x1900, /*DNR bypass 0x0a08 */
	0x002e, 0x0000, /*DNR bypass 0x1010 */
	0x002f, 0x0fff, /*DNR bypass 0x0400 */
	0x003A, 0x000D, /*HDTR DE CS */
	0x003B, 0x0001, /*DE SHARPNESS */
	0x003C, 0x0000, /*NOISE LEVEL */
	0x003F, 0x0032, /*CS GAIN 300 */
	0x0042, 0x003f, /*DE TH (MAX DIFF) */
	0x0049, 0x0400, /*pcc skin */
	0x004a, 0x7a00,
	0x004b, 0x008f,
	0x004d, 0x0000, /*pcc strength */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0xb6bc, /*gc R */
	0x00ca, 0xd4ff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x2148, /*rm G */
	0x00cf, 0xe8f1, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x53ee, /*gc B */
	0x00d2, 0x28f6, /*rm B */
	0x00d3, 0x56e7, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000
};

static unsigned short tune_movie_ui[] = {
	/*start U1 movie ui */
	0x0001, 0x0040, /*scr */
	0x002c, 0x0fff, /*DNR bypass 0x003C */
	0x002d, 0x1900, /*DNR bypass 0x0a08 */
	0x002e, 0x0000, /*DNR bypass 0x1010 */
	0x002f, 0x0fff, /*DNR bypass 0x0400 */
	0x003A, 0x000d, /*HDTR DE_off CS : de on = d ,  de off = 9 */
	0x003B, 0x0001, /*DE SHARPNESS(0~1023)  off */
	0x003C, 0x0000, /*NOISE LEVEL */
	0x003F, 0x0032, /*CS GAIN 50 */
	0x0042, 0x0030, /*DE TH (MAX DIFF) */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0xb6bc, /*gc R */
	0x00ca, 0xd4ff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x2148, /*rm G */
	0x00cf, 0xe8f1, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x53ee, /*gc B */
	0x00d2, 0x28f6, /*rm B */
	0x00d3, 0x56e7, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000
};

static unsigned short tune_movie_video[] = {
	/*start U1 movie video */
	0x0001, 0x0041, /*PCC 40 */
	0x002c, 0x003C, /*DNR bypass 0x003C */
	0x002d, 0x1908, /*DNR bypass 0x0a08 */
	0x002e, 0x1005, /*DNR bypass 0x1010 */
	0x002f, 0x0400, /*DNR bypass 0x0400 */
	0x003A, 0x000D, /*HDTR DE CS  de on = d ,  de off = 9 */
	0x003B, 0x0001, /*DE SHARPNESS */
	0x003C, 0x0000, /*NOISE LEVEL */
	0x003F, 0x0032, /*CS GAIN 300 */
	0x0042, 0x003f, /*DE TH (MAX DIFF) */
	0x0049, 0x0400, /*pcc skin */
	0x004a, 0x7a00, /*7300 */
	0x004b, 0x008F, /*008f */
	0x004d, 0x0000, /*pcc strength */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0xb6bc, /*gc R */
	0x00ca, 0xd4ff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x2148, /*rm G */
	0x00cf, 0xe8f1, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x53ee, /*gc B */
	0x00d2, 0x28f6, /*rm B */
	0x00d3, 0x56e7, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000
};

static unsigned short tune_movie_vt[] = {
	/*start U1 movie vt */
	0x0001, 0x0040, /*SCR HDTR */
	0x002c, 0x0fff, /*DNR dirTh */
	0x002d, 0x19ff, /*DNR dirnumTh decon7Th */
	0x002e, 0xff16, /*DNR decon5Th maskTh */
	0x002f, 0x0000, /*DNR blTh */
	0x003a, 0x000d, /*HDTR DE CS */
	0x003b, 0x0000, /*DE SHARPNESS */
	0x003c, 0x0000, /*NOISE LEVEL */
	0x003f, 0x0030, /*CS GAIN */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0xb6bc, /*gc R */
	0x00ca, 0xd4ff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x2148, /*rm G */
	0x00cf, 0xe8f1, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x53ee, /*gc B */
	0x00d2, 0x28f6, /*rm B */
	0x00d3, 0x56e7, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000
};

static unsigned short tune_standard_gallery[] = {
	/*start U1 standard gallery */
	0x0001, 0x0041, /*SCR + PCC */
	0x002c, 0x0fff, /*DNR bypass 0x003C */
	0x002d, 0x1900, /*DNR bypass 0x0a08 */
	0x002e, 0x0000, /*DNR bypass 0x1010 */
	0x002f, 0x0fff, /*DNR bypass 0x0400 */
	0x003A, 0x000D, /*HDTR DE CS */
	0x003B, 0x03ff, /*DE SHARPNESS */
	0x003C, 0x0000, /*NOISE LEVEL */
	0x003F, 0x0032, /*CS GAIN  */
	0x0042, 0x0020, /*DE TH (MAX DIFF) */
	0x0049, 0x0400, /*pcc skin */
	0x004a, 0x7a00,
	0x004b, 0x008f,
	0x004d, 0x0100, /*pcc strength */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0x0000, /*gc R */
	0x00ca, 0xffff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x0000, /*rm G */
	0x00cf, 0xffff, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x00ff, /*gc B */
	0x00d2, 0x00ff, /*rm B */
	0x00d3, 0x00ff, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000
};

static unsigned short tune_standard_ui[] = {
	/*start U1 standard ui */
	0x0001, 0x0040, /* */
	0x002c, 0x0fff, /*DNR bypass 0x003C */
	0x002d, 0x1900, /*DNR bypass 0x0a08 */
	0x002e, 0x0000,	/*DNR bypass 0x1010 */
	0x002f, 0x0fff,	/*DNR bypass 0x0400 */
	0x003A, 0x000d,	/*HDTR DE_off CS : de on = d ,  de off = 9 */
	0x003B, 0x0001,	/*DE SHARPNESS(0~1023)  off */
	0x003C, 0x0000,	/*NOISE LEVEL */
	0x003F, 0x001e,	/*CS GAIN 30 */
	0x0042, 0x0030,	/*DE TH (MAX DIFF) */
	0x00c8, 0x0000,	/*kb R	SCR */
	0x00c9, 0x0000,	/*gc R */
	0x00ca, 0xffff,	/*rm R */
	0x00cb, 0xffff,	/*yw R */
	0x00cc, 0x0000,	/*kb G */
	0x00cd, 0xffff,	/*gc G */
	0x00ce, 0x0000,	/*rm G */
	0x00cf, 0xffff,	/*yw G */
	0x00d0, 0x00ff,	/*kb B */
	0x00d1, 0x00ff,	/*gc B */
	0x00d2, 0x00ff,	/*rm B */
	0x00d3, 0x00ff,	/*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000
};

static unsigned short tune_standard_video[] = {
	/*start U1 standard video */
	0x0001, 0x0041, /*PCC 40 */
	0x002c, 0x003C, /*DNR bypass 0x003C */
	0x002d, 0x1908, /*DNR bypass 0x0a08 */
	0x002e, 0x1005, /*DNR bypass 0x1010 */
	0x002f, 0x0400, /*DNR bypass 0x0400 */
	0x003A, 0x000D, /*HDTR DE CS  de on = d ,  de off = 9 */
	0x003B, 0x03ff, /*DE SHARPNESS */
	0x003C, 0x0000, /*NOISE LEVEL */
	0x003F, 0x0032, /*CS GAIN  */
	0x0042, 0x0020, /*DE TH (MAX DIFF) */
	0x0049, 0x0400, /*pcc skin */
	0x004a, 0x7a00, /*7300 */
	0x004b, 0x008F, /*008f */
	0x004d, 0x0100, /*pcc strength */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0x0000, /*gc R */
	0x00ca, 0xffff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x0000, /*rm G */
	0x00cf, 0xffff, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x00ff, /*gc B */
	0x00d2, 0x00ff, /*rm B */
	0x00d3, 0x00ff, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000
};

static unsigned short tune_standard_vt[] = {
	/*start U1 standard vt */
	0x0001, 0x0040, /*SCR HDTR */
	0x002c, 0x0fff, /*DNR dirTh */
	0x002d, 0x19ff, /*DNR dirnumTh decon7Th */
	0x002e, 0xff16, /*DNR decon5Th maskTh */
	0x002f, 0x0000, /*DNR blTh */
	0x003a, 0x000d, /*HDTR DE CS */
	0x003b, 0x03f8, /*DE SHARPNESS */
	0x003c, 0x0000, /*NOISE LEVEL */
	0x003f, 0x00a0, /*CS GAIN */
	0x0042, 0x0000, /*DE TH (MAX DIFF) */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0x0000, /*gc R */
	0x00ca, 0xffff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x0000, /*rm G */
	0x00cf, 0xffff, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x00ff, /*gc B */
	0x00d2, 0x00ff, /*rm B */
	0x00d3, 0x00ff, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000
};

static unsigned short tune_natural_gallery[] = {
	/*start U1 natural gallery */
	0x0001, 0x0041, /*SCR + PCC */
	0x002c, 0x0fff, /*DNR bypass 0x003C */
	0x002d, 0x1900, /*DNR bypass 0x0a08 */
	0x002e, 0x0000, /*DNR bypass 0x1010 */
	0x002f, 0x0fff, /*DNR bypass 0x0400 */
	0x003A, 0x000D, /*HDTR DE CS */
	0x003B, 0x03ff, /*DE SHARPNESS */
	0x003C, 0x0000, /*NOISE LEVEL */
	0x003F, 0x0180, /*CS GAIN  */
	0x0042, 0x0020, /*DE TH (MAX DIFF) */
	0x0049, 0x0400, /*pcc skin */
	0x004a, 0x7a00,
	0x004b, 0x008f,
	0x004d, 0x0100, /*pcc strength */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0xb6bc, /*gc R */
	0x00ca, 0xd4ff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x2148, /*rm G */
	0x00cf, 0xe8f1, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x53ee, /*gc B */
	0x00d2, 0x28f6, /*rm B */
	0x00d3, 0x56ec, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000
};

static unsigned short tune_natural_ui[] = {
	/*start U1 natural ui */
	0x0001, 0x0040, /*SCR HDTR */
	0x002c, 0x0fff, /*DNR bypass 0x003C */
	0x002d, 0x1900, /*DNR bypass 0x0a08 */
	0x002e, 0x0000, /*DNR bypass 0x1010 */
	0x002f, 0x0fff, /*DNR bypass 0x0400 */
	0x003A, 0x000d, /*HDTR DE_off CS : de on = d ,  de off = 9 */
	0x003B, 0x0001, /*DE SHARPNESS(0~1023)  off */
	0x003C, 0x0000, /*NOISE LEVEL */
	0x003F, 0x0180, /*CS GAIN 30 */
	0x0042, 0x0030, /*DE TH (MAX DIFF) */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0xb6bc, /*gc R */
	0x00ca, 0xd4ff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x2148, /*rm G */
	0x00cf, 0xe8f1, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x53ee, /*gc B */
	0x00d2, 0x28f6, /*rm B */
	0x00d3, 0x56ec, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000
};

static unsigned short tune_natural_video[] = {
	/*start U1 natural video */
	0x0001, 0x0041, /*PCC 40 */
	0x002c, 0x003C, /*DNR bypass 0x003C */
	0x002d, 0x1908, /*DNR bypass 0x0a08 */
	0x002e, 0x1005, /*DNR bypass 0x1010 */
	0x002f, 0x0400, /*DNR bypass 0x0400 */
	0x003A, 0x000D, /*HDTR DE CS  de on = d ,  de off = 9 */
	0x003B, 0x03ff, /*DE SHARPNESS */
	0x003C, 0x0000, /*NOISE LEVEL */
	0x003F, 0x0180, /*CS GAIN  */
	0x0042, 0x0020, /*DE TH (MAX DIFF) */
	0x0049, 0x0400, /*pcc skin */
	0x004a, 0x7a00, /*7300 */
	0x004b, 0x008F, /*008f */
	0x004d, 0x0100, /*pcc strength */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0xb6bc, /*gc R */
	0x00ca, 0xd4ff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x2148, /*rm G */
	0x00cf, 0xe8f1, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x53ee, /*gc B */
	0x00d2, 0x28f6, /*rm B */
	0x00d3, 0x56ec, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000
};

static unsigned short tune_natural_vt[] = {
	/*start U1 natural vt */
	0x0001, 0x0040, /*SCR HDTR */
	0x002c, 0x0fff, /*DNR dirTh */
	0x002d, 0x19ff, /*DNR dirnumTh decon7Th */
	0x002e, 0xff16, /*DNR decon5Th maskTh */
	0x002f, 0x0000, /*DNR blTh */
	0x003a, 0x000d, /*HDTR DE CS */
	0x003b, 0x03f8, /*DE SHARPNESS */
	0x003c, 0x0000, /*NOISE LEVEL */
	0x003f, 0x0180, /*CS GAIN */
	0x0042, 0x0000, /*DE TH (MAX DIFF) */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0xb6bc, /*gc R */
	0x00ca, 0xd4ff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x2148, /*rm G */
	0x00cf, 0xe8f1, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x53ee, /*gc B */
	0x00d2, 0x28f6, /*rm B */
	0x00d3, 0x56ec, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000
};

static unsigned short tune_camera[] = {
	/*start */
	0x0001, 0x0000, /* */
	0x002c, 0x0fff, /*DNR bypass 0x003C */
	0x002d, 0x1900, /*DNR bypass 0x0a08 */
	0x002e, 0x0000, /*DNR bypass 0x1010 */
	0x002f, 0x0fff, /*DNR bypass 0x0400 */
	0x003A, 0x0009, /*HDTR (DE off)(CS only 9) */
	0x003B, 0x0000, /*DE SHARPNESS */
	0x003C, 0x0000, /*NOISE LEVEL */
	0x003F, 0x0000, /*CS GAIN */
	0x0042, 0x003f, /*DE TH (MAX DIFF) */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000
};

static struct mdnie_tuning_info tuning_table[CABC_MAX][MODE_MAX][SCENARIO_MAX] = {
	{
		{
			{"dynamic_ui",		tune_dynamic_ui},
			{"dynamic_video",	tune_dynamic_video},
			{"dynamic_video",	tune_dynamic_video},
			{"dynamic_video",	tune_dynamic_video},
			{"camera",		tune_camera},
			{"dynamic_ui",		tune_dynamic_ui},
			{"dynamic_gallery",	tune_dynamic_gallery},
			{"dynamic_vt",		tune_dynamic_vt}
		}, {
			{"standard_ui",		tune_standard_ui},
			{"standard_video",	tune_standard_video},
			{"standard_video",	tune_standard_video},
			{"standard_video",	tune_standard_video},
			{"camera",		tune_camera},
			{"standard_ui",		tune_standard_ui},
			{"standard_gallery",	tune_standard_gallery},
			{"standard_vt",		tune_standard_vt}
		}, {
			{"natural_ui",		tune_natural_ui},
			{"natural_video",	tune_natural_video},
			{"natural_video",	tune_natural_video},
			{"natural_video",	tune_natural_video},
			{"camera",		tune_camera},
			{"natural_ui",		tune_natural_ui},
			{"natural_gallery",	tune_natural_gallery},
			{"natural_vt",		tune_natural_vt}
		}, {
			{"movie_ui",		tune_movie_ui},
			{"movie_video",		tune_movie_video},
			{"movie_video",		tune_movie_video},
			{"movie_video",		tune_movie_video},
			{"camera",		tune_camera},
			{"movie_ui",		tune_movie_ui},
			{"movie_gallery",	tune_movie_gallery},
			{"movie_vt",		tune_movie_vt}
		}
	}
};

#endif /* __MDNIE_TABLE_H__ */
