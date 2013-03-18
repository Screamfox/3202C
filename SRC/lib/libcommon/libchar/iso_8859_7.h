/* Copyright (C) ALi Shanghai Corp. 2005
 *
 * Filename	: iso_8859_7.c
 * Description	: ISO-8859_7 charset mapping file.
 * Generated by	: ISO-Convertor, powered by Delphi
 */
#include <types.h>
#include <sys_config.h>

#ifdef ISO_8859_7_SUPPORT

#include "char_map.h"

static UINT16 iso8859_7_map_A0_FF[] = {
	0x00A0,	/*A0	NO-BREAK SPACE */
	0x2018,	/*A1	LEFT SINGLE QUOTATION MARK */
	0x2019,	/*A2	RIGHT SINGLE QUOTATION MARK */
	0x00A3,	/*A3	POUND SIGN */
	0x20AC,	/*A4	EURO SIGN */
	0x20AF,	/*A5	DRACHMA SIGN */
	0x00A6,	/*A6	BROKEN BAR */
	0x00A7,	/*A7	SECTION SIGN */
	0x00A8,	/*A8	DIAERESIS */
	0x00A9,	/*A9	COPYRIGHT SIGN */
	0x037A,	/*AA	GREEK YPOGEGRAMMENI */
	0x00AB,	/*AB	LEFT-POINTING DOUBLE ANGLE QUOTATION MARK */
	0x00AC,	/*AC	NOT SIGN */
	0x00AD,	/*AD	SOFT HYPHEN */
	0xFFFF,	/*AE	INVALID */
	0x2015,	/*AF	HORIZONTAL BAR */
	0x00B0,	/*B0	DEGREE SIGN */
	0x00B1,	/*B1	PLUS-MINUS SIGN */
	0x00B2,	/*B2	SUPERSCRIPT TWO */
	0x00B3,	/*B3	SUPERSCRIPT THREE */
	0x0384,	/*B4	GREEK TONOS */
	0x0385,	/*B5	GREEK DIALYTIKA TONOS */
	0x0386,	/*B6	GREEK CAPITAL LETTER ALPHA WITH TONOS */
	0x00B7,	/*B7	MIDDLE DOT */
	0x0388,	/*B8	GREEK CAPITAL LETTER EPSILON WITH TONOS */
	0x0389,	/*B9	GREEK CAPITAL LETTER ETA WITH TONOS */
	0x038A,	/*BA	GREEK CAPITAL LETTER IOTA WITH TONOS */
	0x00BB,	/*BB	RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK */
	0x038C,	/*BC	GREEK CAPITAL LETTER OMICRON WITH TONOS */
	0x00BD,	/*BD	VULGAR FRACTION ONE HALF */
	0x038E,	/*BE	GREEK CAPITAL LETTER UPSILON WITH TONOS */
	0x038F,	/*BF	GREEK CAPITAL LETTER OMEGA WITH TONOS */
	0x0390,	/*C0	GREEK SMALL LETTER IOTA WITH DIALYTIKA AND TONOS */
	0x0391,	/*C1	GREEK CAPITAL LETTER ALPHA */
	0x0392,	/*C2	GREEK CAPITAL LETTER BETA */
	0x0393,	/*C3	GREEK CAPITAL LETTER GAMMA */
	0x0394,	/*C4	GREEK CAPITAL LETTER DELTA */
	0x0395,	/*C5	GREEK CAPITAL LETTER EPSILON */
	0x0396,	/*C6	GREEK CAPITAL LETTER ZETA */
	0x0397,	/*C7	GREEK CAPITAL LETTER ETA */
	0x0398,	/*C8	GREEK CAPITAL LETTER THETA */
	0x0399,	/*C9	GREEK CAPITAL LETTER IOTA */
	0x039A,	/*CA	GREEK CAPITAL LETTER KAPPA */
	0x039B,	/*CB	GREEK CAPITAL LETTER LAMDA */
	0x039C,	/*CC	GREEK CAPITAL LETTER MU */
	0x039D,	/*CD	GREEK CAPITAL LETTER NU */
	0x039E,	/*CE	GREEK CAPITAL LETTER XI */
	0x039F,	/*CF	GREEK CAPITAL LETTER OMICRON */
	0x03A0,	/*D0	GREEK CAPITAL LETTER PI */
	0x03A1,	/*D1	GREEK CAPITAL LETTER RHO */
	0xFFFF,	/*D2	INVALID */
	0x03A3,	/*D3	GREEK CAPITAL LETTER SIGMA */
	0x03A4,	/*D4	GREEK CAPITAL LETTER TAU */
	0x03A5,	/*D5	GREEK CAPITAL LETTER UPSILON */
	0x03A6,	/*D6	GREEK CAPITAL LETTER PHI */
	0x03A7,	/*D7	GREEK CAPITAL LETTER CHI */
	0x03A8,	/*D8	GREEK CAPITAL LETTER PSI */
	0x03A9,	/*D9	GREEK CAPITAL LETTER OMEGA */
	0x03AA,	/*DA	GREEK CAPITAL LETTER IOTA WITH DIALYTIKA */
	0x03AB,	/*DB	GREEK CAPITAL LETTER UPSILON WITH DIALYTIKA */
	0x03AC,	/*DC	GREEK SMALL LETTER ALPHA WITH TONOS */
	0x03AD,	/*DD	GREEK SMALL LETTER EPSILON WITH TONOS */
	0x03AE,	/*DE	GREEK SMALL LETTER ETA WITH TONOS */
	0x03AF,	/*DF	GREEK SMALL LETTER IOTA WITH TONOS */
	0x03B0,	/*E0	GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND TONOS */
	0x03B1,	/*E1	GREEK SMALL LETTER ALPHA */
	0x03B2,	/*E2	GREEK SMALL LETTER BETA */
	0x03B3,	/*E3	GREEK SMALL LETTER GAMMA */
	0x03B4,	/*E4	GREEK SMALL LETTER DELTA */
	0x03B5,	/*E5	GREEK SMALL LETTER EPSILON */
	0x03B6,	/*E6	GREEK SMALL LETTER ZETA */
	0x03B7,	/*E7	GREEK SMALL LETTER ETA */
	0x03B8,	/*E8	GREEK SMALL LETTER THETA */
	0x03B9,	/*E9	GREEK SMALL LETTER IOTA */
	0x03BA,	/*EA	GREEK SMALL LETTER KAPPA */
	0x03BB,	/*EB	GREEK SMALL LETTER LAMDA */
	0x03BC,	/*EC	GREEK SMALL LETTER MU */
	0x03BD,	/*ED	GREEK SMALL LETTER NU */
	0x03BE,	/*EE	GREEK SMALL LETTER XI */
	0x03BF,	/*EF	GREEK SMALL LETTER OMICRON */
	0x03C0,	/*F0	GREEK SMALL LETTER PI */
	0x03C1,	/*F1	GREEK SMALL LETTER RHO */
	0x03C2,	/*F2	GREEK SMALL LETTER FINAL SIGMA */
	0x03C3,	/*F3	GREEK SMALL LETTER SIGMA */
	0x03C4,	/*F4	GREEK SMALL LETTER TAU */
	0x03C5,	/*F5	GREEK SMALL LETTER UPSILON */
	0x03C6,	/*F6	GREEK SMALL LETTER PHI */
	0x03C7,	/*F7	GREEK SMALL LETTER CHI */
	0x03C8,	/*F8	GREEK SMALL LETTER PSI */
	0x03C9,	/*F9	GREEK SMALL LETTER OMEGA */
	0x03CA,	/*FA	GREEK SMALL LETTER IOTA WITH DIALYTIKA */
	0x03CB,	/*FB	GREEK SMALL LETTER UPSILON WITH DIALYTIKA */
	0x03CC,	/*FC	GREEK SMALL LETTER OMICRON WITH TONOS */
	0x03CD,	/*FD	GREEK SMALL LETTER UPSILON WITH TONOS */
	0x03CE,	/*FE	GREEK SMALL LETTER OMEGA WITH TONOS */
	0xFFFF, /*FF	INVALID */
};

/* TODO: insert your code here */

#endif /* ISO_8859_7_SUPPORT */
