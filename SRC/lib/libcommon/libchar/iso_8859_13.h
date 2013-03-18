/* Copyright (C) ALi Shanghai Corp. 2005
 *
 * Filename	: iso_8859_13.c
 * Description	: ISO-8859_13 charset mapping file.
 * Generated by	: ISO-Convertor, powered by Delphi
 */
#include <types.h>
#include <sys_config.h>

#ifdef ISO_8859_13_SUPPORT

#include "char_map.h"

static UINT16 iso8859_13_map_A0_FF[] = {
	0x00A0,	/*A0	NO-BREAK SPACE */
	0x201D,	/*A1	RIGHT DOUBLE QUOTATION MARK */
	0x00A2,	/*A2	CENT SIGN */
	0x00A3,	/*A3	POUND SIGN */
	0x00A4,	/*A4	CURRENCY SIGN */
	0x201E,	/*A5	DOUBLE LOW-9 QUOTATION MARK */
	0x00A6,	/*A6	BROKEN BAR */
	0x00A7,	/*A7	SECTION SIGN */
	0x00D8,	/*A8	LATIN CAPITAL LETTER O WITH STROKE */
	0x00A9,	/*A9	COPYRIGHT SIGN */
	0x0156,	/*AA	LATIN CAPITAL LETTER R WITH CEDILLA */
	0x00AB,	/*AB	LEFT-POINTING DOUBLE ANGLE QUOTATION MARK */
	0x00AC,	/*AC	NOT SIGN */
	0x00AD,	/*AD	SOFT HYPHEN */
	0x00AE,	/*AE	REGISTERED SIGN */
	0x00C6,	/*AF	LATIN CAPITAL LETTER AE */
	0x00B0,	/*B0	DEGREE SIGN */
	0x00B1,	/*B1	PLUS-MINUS SIGN */
	0x00B2,	/*B2	SUPERSCRIPT TWO */
	0x00B3,	/*B3	SUPERSCRIPT THREE */
	0x201C,	/*B4	LEFT DOUBLE QUOTATION MARK */
	0x00B5,	/*B5	MICRO SIGN */
	0x00B6,	/*B6	PILCROW SIGN */
	0x00B7,	/*B7	MIDDLE DOT */
	0x00F8,	/*B8	LATIN SMALL LETTER O WITH STROKE */
	0x00B9,	/*B9	SUPERSCRIPT ONE */
	0x0157,	/*BA	LATIN SMALL LETTER R WITH CEDILLA */
	0x00BB,	/*BB	RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK */
	0x00BC,	/*BC	VULGAR FRACTION ONE QUARTER */
	0x00BD,	/*BD	VULGAR FRACTION ONE HALF */
	0x00BE,	/*BE	VULGAR FRACTION THREE QUARTERS */
	0x00E6,	/*BF	LATIN SMALL LETTER AE */
	0x0104,	/*C0	LATIN CAPITAL LETTER A WITH OGONEK */
	0x012E,	/*C1	LATIN CAPITAL LETTER I WITH OGONEK */
	0x0100,	/*C2	LATIN CAPITAL LETTER A WITH MACRON */
	0x0106,	/*C3	LATIN CAPITAL LETTER C WITH ACUTE */
	0x00C4,	/*C4	LATIN CAPITAL LETTER A WITH DIAERESIS */
	0x00C5,	/*C5	LATIN CAPITAL LETTER A WITH RING ABOVE */
	0x0118,	/*C6	LATIN CAPITAL LETTER E WITH OGONEK */
	0x0112,	/*C7	LATIN CAPITAL LETTER E WITH MACRON */
	0x010C,	/*C8	LATIN CAPITAL LETTER C WITH CARON */
	0x00C9,	/*C9	LATIN CAPITAL LETTER E WITH ACUTE */
	0x0179,	/*CA	LATIN CAPITAL LETTER Z WITH ACUTE */
	0x0116,	/*CB	LATIN CAPITAL LETTER E WITH DOT ABOVE */
	0x0122,	/*CC	LATIN CAPITAL LETTER G WITH CEDILLA */
	0x0136,	/*CD	LATIN CAPITAL LETTER K WITH CEDILLA */
	0x012A,	/*CE	LATIN CAPITAL LETTER I WITH MACRON */
	0x013B,	/*CF	LATIN CAPITAL LETTER L WITH CEDILLA */
	0x0160,	/*D0	LATIN CAPITAL LETTER S WITH CARON */
	0x0143,	/*D1	LATIN CAPITAL LETTER N WITH ACUTE */
	0x0145,	/*D2	LATIN CAPITAL LETTER N WITH CEDILLA */
	0x00D3,	/*D3	LATIN CAPITAL LETTER O WITH ACUTE */
	0x014C,	/*D4	LATIN CAPITAL LETTER O WITH MACRON */
	0x00D5,	/*D5	LATIN CAPITAL LETTER O WITH TILDE */
	0x00D6,	/*D6	LATIN CAPITAL LETTER O WITH DIAERESIS */
	0x00D7,	/*D7	MULTIPLICATION SIGN */
	0x0172,	/*D8	LATIN CAPITAL LETTER U WITH OGONEK */
	0x0141,	/*D9	LATIN CAPITAL LETTER L WITH STROKE */
	0x015A,	/*DA	LATIN CAPITAL LETTER S WITH ACUTE */
	0x016A,	/*DB	LATIN CAPITAL LETTER U WITH MACRON */
	0x00DC,	/*DC	LATIN CAPITAL LETTER U WITH DIAERESIS */
	0x017B,	/*DD	LATIN CAPITAL LETTER Z WITH DOT ABOVE */
	0x017D,	/*DE	LATIN CAPITAL LETTER Z WITH CARON */
	0x00DF,	/*DF	LATIN SMALL LETTER SHARP S (German) */
	0x0105,	/*E0	LATIN SMALL LETTER A WITH OGONEK */
	0x012F,	/*E1	LATIN SMALL LETTER I WITH OGONEK */
	0x0101,	/*E2	LATIN SMALL LETTER A WITH MACRON */
	0x0107,	/*E3	LATIN SMALL LETTER C WITH ACUTE */
	0x00E4,	/*E4	LATIN SMALL LETTER A WITH DIAERESIS */
	0x00E5,	/*E5	LATIN SMALL LETTER A WITH RING ABOVE */
	0x0119,	/*E6	LATIN SMALL LETTER E WITH OGONEK */
	0x0113,	/*E7	LATIN SMALL LETTER E WITH MACRON */
	0x010D,	/*E8	LATIN SMALL LETTER C WITH CARON */
	0x00E9,	/*E9	LATIN SMALL LETTER E WITH ACUTE */
	0x017A,	/*EA	LATIN SMALL LETTER Z WITH ACUTE */
	0x0117,	/*EB	LATIN SMALL LETTER E WITH DOT ABOVE */
	0x0123,	/*EC	LATIN SMALL LETTER G WITH CEDILLA */
	0x0137,	/*ED	LATIN SMALL LETTER K WITH CEDILLA */
	0x012B,	/*EE	LATIN SMALL LETTER I WITH MACRON */
	0x013C,	/*EF	LATIN SMALL LETTER L WITH CEDILLA */
	0x0161,	/*F0	LATIN SMALL LETTER S WITH CARON */
	0x0144,	/*F1	LATIN SMALL LETTER N WITH ACUTE */
	0x0146,	/*F2	LATIN SMALL LETTER N WITH CEDILLA */
	0x00F3,	/*F3	LATIN SMALL LETTER O WITH ACUTE */
	0x014D,	/*F4	LATIN SMALL LETTER O WITH MACRON */
	0x00F5,	/*F5	LATIN SMALL LETTER O WITH TILDE */
	0x00F6,	/*F6	LATIN SMALL LETTER O WITH DIAERESIS */
	0x00F7,	/*F7	DIVISION SIGN */
	0x0173,	/*F8	LATIN SMALL LETTER U WITH OGONEK */
	0x0142,	/*F9	LATIN SMALL LETTER L WITH STROKE */
	0x015B,	/*FA	LATIN SMALL LETTER S WITH ACUTE */
	0x016B,	/*FB	LATIN SMALL LETTER U WITH MACRON */
	0x00FC,	/*FC	LATIN SMALL LETTER U WITH DIAERESIS */
	0x017C,	/*FD	LATIN SMALL LETTER Z WITH DOT ABOVE */
	0x017E,	/*FE	LATIN SMALL LETTER Z WITH CARON */
	0x2019,	/*FF	RIGHT SINGLE QUOTATION MARK */
};

/* TODO: insert your code here */

#endif /* ISO_8859_13_SUPPORT */
