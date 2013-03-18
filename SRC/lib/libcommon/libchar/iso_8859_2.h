/* Copyright (C) ALi Shanghai Corp. 2005
 *
 * Filename	: iso_8859_2.c
 * Description	: ISO-8859_2 charset mapping file.
 * Generated by	: ISO-Convertor, powered by Delphi
 */
#include <types.h>
#include <sys_config.h>

#ifdef ISO_8859_2_SUPPORT

#include "char_map.h"

static UINT16 iso8859_2_map_A0_FF[] = {
	0x00A0,	/*A0	NO-BREAK SPACE */
	0x0104,	/*A1	LATIN CAPITAL LETTER A WITH OGONEK */
	0x02D8,	/*A2	BREVE */
	0x0141,	/*A3	LATIN CAPITAL LETTER L WITH STROKE */
	0x00A4,	/*A4	CURRENCY SIGN */
	0x013D,	/*A5	LATIN CAPITAL LETTER L WITH CARON */
	0x015A,	/*A6	LATIN CAPITAL LETTER S WITH ACUTE */
	0x00A7,	/*A7	SECTION SIGN */
	0x00A8,	/*A8	DIAERESIS */
	0x0160,	/*A9	LATIN CAPITAL LETTER S WITH CARON */
	0x015E,	/*AA	LATIN CAPITAL LETTER S WITH CEDILLA */
	0x0164,	/*AB	LATIN CAPITAL LETTER T WITH CARON */
	0x0179,	/*AC	LATIN CAPITAL LETTER Z WITH ACUTE */
	0x00AD,	/*AD	SOFT HYPHEN */
	0x017D,	/*AE	LATIN CAPITAL LETTER Z WITH CARON */
	0x017B,	/*AF	LATIN CAPITAL LETTER Z WITH DOT ABOVE */
	0x00B0,	/*B0	DEGREE SIGN */
	0x0105,	/*B1	LATIN SMALL LETTER A WITH OGONEK */
	0x02DB,	/*B2	OGONEK */
	0x0142,	/*B3	LATIN SMALL LETTER L WITH STROKE */
	0x00B4,	/*B4	ACUTE ACCENT */
	0x013E,	/*B5	LATIN SMALL LETTER L WITH CARON */
	0x015B,	/*B6	LATIN SMALL LETTER S WITH ACUTE */
	0x02C7,	/*B7	CARON */
	0x00B8,	/*B8	CEDILLA */
	0x0161,	/*B9	LATIN SMALL LETTER S WITH CARON */
	0x015F,	/*BA	LATIN SMALL LETTER S WITH CEDILLA */
	0x0165,	/*BB	LATIN SMALL LETTER T WITH CARON */
	0x017A,	/*BC	LATIN SMALL LETTER Z WITH ACUTE */
	0x02DD,	/*BD	DOUBLE ACUTE ACCENT */
	0x017E,	/*BE	LATIN SMALL LETTER Z WITH CARON */
	0x017C,	/*BF	LATIN SMALL LETTER Z WITH DOT ABOVE */
	0x0154,	/*C0	LATIN CAPITAL LETTER R WITH ACUTE */
	0x00C1,	/*C1	LATIN CAPITAL LETTER A WITH ACUTE */
	0x00C2,	/*C2	LATIN CAPITAL LETTER A WITH CIRCUMFLEX */
	0x0102,	/*C3	LATIN CAPITAL LETTER A WITH BREVE */
	0x00C4,	/*C4	LATIN CAPITAL LETTER A WITH DIAERESIS */
	0x0139,	/*C5	LATIN CAPITAL LETTER L WITH ACUTE */
	0x0106,	/*C6	LATIN CAPITAL LETTER C WITH ACUTE */
	0x00C7,	/*C7	LATIN CAPITAL LETTER C WITH CEDILLA */
	0x010C,	/*C8	LATIN CAPITAL LETTER C WITH CARON */
	0x00C9,	/*C9	LATIN CAPITAL LETTER E WITH ACUTE */
	0x0118,	/*CA	LATIN CAPITAL LETTER E WITH OGONEK */
	0x00CB,	/*CB	LATIN CAPITAL LETTER E WITH DIAERESIS */
	0x011A,	/*CC	LATIN CAPITAL LETTER E WITH CARON */
	0x00CD,	/*CD	LATIN CAPITAL LETTER I WITH ACUTE */
	0x00CE,	/*CE	LATIN CAPITAL LETTER I WITH CIRCUMFLEX */
	0x010E,	/*CF	LATIN CAPITAL LETTER D WITH CARON */
	0x0110,	/*D0	LATIN CAPITAL LETTER D WITH STROKE */
	0x0143,	/*D1	LATIN CAPITAL LETTER N WITH ACUTE */
	0x0147,	/*D2	LATIN CAPITAL LETTER N WITH CARON */
	0x00D3,	/*D3	LATIN CAPITAL LETTER O WITH ACUTE */
	0x00D4,	/*D4	LATIN CAPITAL LETTER O WITH CIRCUMFLEX */
	0x0150,	/*D5	LATIN CAPITAL LETTER O WITH DOUBLE ACUTE */
	0x00D6,	/*D6	LATIN CAPITAL LETTER O WITH DIAERESIS */
	0x00D7,	/*D7	MULTIPLICATION SIGN */
	0x0158,	/*D8	LATIN CAPITAL LETTER R WITH CARON */
	0x016E,	/*D9	LATIN CAPITAL LETTER U WITH RING ABOVE */
	0x00DA,	/*DA	LATIN CAPITAL LETTER U WITH ACUTE */
	0x0170,	/*DB	LATIN CAPITAL LETTER U WITH DOUBLE ACUTE */
	0x00DC,	/*DC	LATIN CAPITAL LETTER U WITH DIAERESIS */
	0x00DD,	/*DD	LATIN CAPITAL LETTER Y WITH ACUTE */
	0x0162,	/*DE	LATIN CAPITAL LETTER T WITH CEDILLA */
	0x00DF,	/*DF	LATIN SMALL LETTER SHARP S */
	0x0155,	/*E0	LATIN SMALL LETTER R WITH ACUTE */
	0x00E1,	/*E1	LATIN SMALL LETTER A WITH ACUTE */
	0x00E2,	/*E2	LATIN SMALL LETTER A WITH CIRCUMFLEX */
	0x0103,	/*E3	LATIN SMALL LETTER A WITH BREVE */
	0x00E4,	/*E4	LATIN SMALL LETTER A WITH DIAERESIS */
	0x013A,	/*E5	LATIN SMALL LETTER L WITH ACUTE */
	0x0107,	/*E6	LATIN SMALL LETTER C WITH ACUTE */
	0x00E7,	/*E7	LATIN SMALL LETTER C WITH CEDILLA */
	0x010D,	/*E8	LATIN SMALL LETTER C WITH CARON */
	0x00E9,	/*E9	LATIN SMALL LETTER E WITH ACUTE */
	0x0119,	/*EA	LATIN SMALL LETTER E WITH OGONEK */
	0x00EB,	/*EB	LATIN SMALL LETTER E WITH DIAERESIS */
	0x011B,	/*EC	LATIN SMALL LETTER E WITH CARON */
	0x00ED,	/*ED	LATIN SMALL LETTER I WITH ACUTE */
	0x00EE,	/*EE	LATIN SMALL LETTER I WITH CIRCUMFLEX */
	0x010F,	/*EF	LATIN SMALL LETTER D WITH CARON */
	0x0111,	/*F0	LATIN SMALL LETTER D WITH STROKE */
	0x0144,	/*F1	LATIN SMALL LETTER N WITH ACUTE */
	0x0148,	/*F2	LATIN SMALL LETTER N WITH CARON */
	0x00F3,	/*F3	LATIN SMALL LETTER O WITH ACUTE */
	0x00F4,	/*F4	LATIN SMALL LETTER O WITH CIRCUMFLEX */
	0x0151,	/*F5	LATIN SMALL LETTER O WITH DOUBLE ACUTE */
	0x00F6,	/*F6	LATIN SMALL LETTER O WITH DIAERESIS */
	0x00F7,	/*F7	DIVISION SIGN */
	0x0159,	/*F8	LATIN SMALL LETTER R WITH CARON */
	0x016F,	/*F9	LATIN SMALL LETTER U WITH RING ABOVE */
	0x00FA,	/*FA	LATIN SMALL LETTER U WITH ACUTE */
	0x0171,	/*FB	LATIN SMALL LETTER U WITH DOUBLE ACUTE */
	0x00FC,	/*FC	LATIN SMALL LETTER U WITH DIAERESIS */
	0x00FD,	/*FD	LATIN SMALL LETTER Y WITH ACUTE */
	0x0163,	/*FE	LATIN SMALL LETTER T WITH CEDILLA */
	0x02D9,	/*FF	DOT ABOVE */
};

/* TODO: insert your code here */

#endif /* ISO_8859_2_SUPPORT */
