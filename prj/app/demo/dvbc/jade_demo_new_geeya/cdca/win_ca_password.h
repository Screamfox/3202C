/***************************************************************************************************
	This header file is generated by the Vega from a xform file.
	Please don't modify it!!
---------------------------------------------------------------------------------------------------*/
		
#ifndef __WIN_CA_PASSWORD_H__FC067ACB_CDCF_4300_A243_B550B0ED9658
#define __WIN_CA_PASSWORD_H__FC067ACB_CDCF_4300_A243_B550B0ED9658


/*******************************************************************************
*	Objects definition
*******************************************************************************/
extern BITMAP ca_pwd_bitmap4;
extern BITMAP ca_pwd_bitmap2;
extern BITMAP ca_pwd_bitmap6;
extern BITMAP ca_pwd_bitmap5;
extern CONTAINER g_win_ca_pwd_con;
extern BITMAP ca_pwd_bitmap1;
extern TEXT_FIELD ca_pwd_title;
extern TEXT_FIELD ca_pwd_wrong_result;
extern BITMAP ca_pwd_bitmap3;

//g_win_ca_pwd_con ------------------------------------------------------------------------
static VACTION pwd_con_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT pwd_con_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER g_win_ca_pwd_con = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {310, 170, 307, 181},
		.style = {
			.bShowIdx = WSTL_EMIAL_OL_CON, .bHLIdx = WSTL_EMIAL_OL_CON, .bSelIdx = WSTL_EMIAL_OL_CON, .bGrayIdx = WSTL_EMIAL_OL_CON
		},
		.pfnKeyMap = pwd_con_keymap, .pfnCallback = pwd_con_callback,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)NULL
	},
	.pNextInCntn = (POBJECT_HEAD)&ca_pwd_title,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 0,
};

//ca_pwd_title ------------------------------------------------------------------------

TEXT_FIELD ca_pwd_title = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {341, 171, 127, 30},
		.style = {
			.bShowIdx = WSTL_TXT_5, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_5, .bGrayIdx = WSTL_TXT_5
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&ca_pwd_wrong_result, .pRoot = (POBJECT_HEAD)&g_win_ca_pwd_con
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_CA_INPUT_PIN,
	.pString = NULL
};

//ca_pwd_wrong_result ------------------------------------------------------------------------

TEXT_FIELD ca_pwd_wrong_result = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 5, .bRightID = 5, .bUpID = 5, .bDownID = 5,
		.frame = {325, 227, 230, 30},
		.style = {
			.bShowIdx = WSTL_TXT_7, .bHLIdx = WSTL_TXT_7, .bSelIdx = WSTL_TXT_7, .bGrayIdx = WSTL_TXT_7
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&ca_pwd_bitmap1, .pRoot = (POBJECT_HEAD)&g_win_ca_pwd_con
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = NULL
};

//ca_pwd_bitmap1 ------------------------------------------------------------------------

BITMAP ca_pwd_bitmap1 = {
	.head = {
		.bType = OT_BITMAP,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 1, .bRightID = 1, .bUpID = 1, .bDownID = 1,
		.frame = {324, 259, 40, 40},
		.style = {
			.bShowIdx = 0, .bHLIdx = 0, .bSelIdx = 0, .bGrayIdx = 0
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&ca_pwd_bitmap2, .pRoot = (POBJECT_HEAD)&g_win_ca_pwd_con
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wIconID = IM_PASSWORD_BUTTON_01,
};

//ca_pwd_bitmap2 ------------------------------------------------------------------------

BITMAP ca_pwd_bitmap2 = {
	.head = {
		.bType = OT_BITMAP,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 2, .bLeftID = 2, .bRightID = 2, .bUpID = 2, .bDownID = 2,
		.frame = {379, 258, 40, 40},
		.style = {
			.bShowIdx = 0, .bHLIdx = 0, .bSelIdx = 0, .bGrayIdx = 0
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&ca_pwd_bitmap3, .pRoot = (POBJECT_HEAD)&g_win_ca_pwd_con
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wIconID = IM_PASSWORD_BUTTON_01,
};

//ca_pwd_bitmap3 ------------------------------------------------------------------------

BITMAP ca_pwd_bitmap3 = {
	.head = {
		.bType = OT_BITMAP,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 3, .bLeftID = 3, .bRightID = 3, .bUpID = 3, .bDownID = 3,
		.frame = {429, 259, 40, 40},
		.style = {
			.bShowIdx = 0, .bHLIdx = 0, .bSelIdx = 0, .bGrayIdx = 0
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&ca_pwd_bitmap4, .pRoot = (POBJECT_HEAD)&g_win_ca_pwd_con
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wIconID = IM_PASSWORD_BUTTON_01,
};

//ca_pwd_bitmap4 ------------------------------------------------------------------------

BITMAP ca_pwd_bitmap4 = {
	.head = {
		.bType = OT_BITMAP,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 4, .bLeftID = 4, .bRightID = 4, .bUpID = 4, .bDownID = 4,
		.frame = {482, 260, 40, 40},
		.style = {
			.bShowIdx = 0, .bHLIdx = 0, .bSelIdx = 0, .bGrayIdx = 0
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&ca_pwd_bitmap5, .pRoot = (POBJECT_HEAD)&g_win_ca_pwd_con
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wIconID = IM_PASSWORD_BUTTON_01,
};

//ca_pwd_bitmap5 ------------------------------------------------------------------------

BITMAP ca_pwd_bitmap5 = {
	.head = {
		.bType = OT_BITMAP,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 5, .bLeftID = 5, .bRightID = 5, .bUpID = 5, .bDownID = 5,
		.frame = {528, 261, 40, 40},
		.style = {
			.bShowIdx = 0, .bHLIdx = 0, .bSelIdx = 0, .bGrayIdx = 0
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&ca_pwd_bitmap6, .pRoot = (POBJECT_HEAD)&g_win_ca_pwd_con
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wIconID = IM_PASSWORD_BUTTON_01,
};

//ca_pwd_bitmap6 ------------------------------------------------------------------------

BITMAP ca_pwd_bitmap6 = {
	.head = {
		.bType = OT_BITMAP,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 6, .bLeftID = 6, .bRightID = 6, .bUpID = 6, .bDownID = 6,
		.frame = {568, 260, 40, 40},
		.style = {
			.bShowIdx = 0, .bHLIdx = 0, .bSelIdx = 0, .bGrayIdx = 0
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&g_win_ca_pwd_con
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wIconID = IM_PASSWORD_BUTTON_01,
};
#endif//__WIN_CA_PASSWORD_H__FC067ACB_CDCF_4300_A243_B550B0ED9658
