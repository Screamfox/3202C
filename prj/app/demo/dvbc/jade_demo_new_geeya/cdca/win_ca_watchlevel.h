/***************************************************************************************************
	This header file is generated by the Vega from a xform file.
	Please don't modify it!!
---------------------------------------------------------------------------------------------------*/
		
#ifndef __WIN_CA_WATCHLEVEL_H__C286FD7D_6180_44FC_A540_E10CED4E8140
#define __WIN_CA_WATCHLEVEL_H__C286FD7D_6180_44FC_A540_E10CED4E8140


/*******************************************************************************
*	Objects definition
*******************************************************************************/
extern CONTAINER g_win_maturity_rating;
extern TEXT_FIELD maturity_rating_help_name1;
extern TEXT_FIELD maturity_rating_txt2;
extern CONTAINER maturity_rating_help_con2;
extern EDIT_FIELD maturity_rating_edt2;
extern TEXT_FIELD maturity_rating_help_name2;
extern CONTAINER maturity_rating_item_con1;
extern TEXT_FIELD maturity_rating_help_name4;
extern CONTAINER win_maturity_rating_con;
extern TEXT_FIELD maturity_rating_titile;
extern CONTAINER maturity_rating_item_con2;
extern TEXT_FIELD maturity_rating_txt1;
extern TEXT_FIELD maturity_rating_help_name3;
extern EDIT_FIELD maturity_rating_edt1;
extern CONTAINER maturity_rating_help_con1;

//g_win_maturity_rating ------------------------------------------------------------------------
static VACTION maturity_rating_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT maturity_rating_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER g_win_maturity_rating = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {293, 154, 372, 218},
		.style = {
			.bShowIdx = WSTL_EMIAL_OL_CON, .bHLIdx = WSTL_EMIAL_OL_CON, .bSelIdx = WSTL_EMIAL_OL_CON, .bGrayIdx = WSTL_EMIAL_OL_CON
		},
		.pfnKeyMap = maturity_rating_keymap, .pfnCallback = maturity_rating_callback,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)NULL
	},
	.pNextInCntn = (POBJECT_HEAD)&win_maturity_rating_con,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 0,
};

//win_maturity_rating_con ------------------------------------------------------------------------
static VACTION maturity_rating_con_keymap(POBJECT_HEAD pObj, UINT32 key);

CONTAINER win_maturity_rating_con = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {293, 154, 372, 218},
		.style = {
			.bShowIdx = WSTL_EMIAL_OL_CON, .bHLIdx = WSTL_EMIAL_OL_CON, .bSelIdx = WSTL_EMIAL_OL_CON, .bGrayIdx = WSTL_NOSHOW_IDX
		},
		.pfnKeyMap = maturity_rating_con_keymap, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&g_win_maturity_rating
	},
	.pNextInCntn = (POBJECT_HEAD)&maturity_rating_item_con1,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 0,
};

//maturity_rating_item_con1 ------------------------------------------------------------------------
static VACTION maturity_rating_item_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT maturity_rating_item_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER maturity_rating_item_con1 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 1, .bRightID = 1, .bUpID = 2, .bDownID = 2,
		.frame = {310, 211, 338, 29},
		.style = {
			.bShowIdx = WSTL_NOSHOW_IDX, .bHLIdx = WSTL_NOSHOW_IDX, .bSelIdx = WSTL_LCL_ITEM_NORMAL, .bGrayIdx = WSTL_LCL_ITEM_NORMAL
		},
		.pfnKeyMap = maturity_rating_item_keymap, .pfnCallback = maturity_rating_item_callback,
		.pNext = (POBJECT_HEAD)&maturity_rating_item_con2, .pRoot = (POBJECT_HEAD)&win_maturity_rating_con
	},
	.pNextInCntn = (POBJECT_HEAD)&maturity_rating_txt1,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 1,
};

//maturity_rating_txt1 ------------------------------------------------------------------------

TEXT_FIELD maturity_rating_txt1 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {310, 211, 159, 29},
		.style = {
			.bShowIdx = WSTL_RCI_COM_SEL_NAME_BG, .bHLIdx = WSTL_RCI_COM_SEL_NAME_BG, .bSelIdx = WSTL_RCI_COM_SEL_NAME_BG, .bGrayIdx = WSTL_RCI_COM_SEL_NAME_BG
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&maturity_rating_edt1, .pRoot = (POBJECT_HEAD)&maturity_rating_item_con1
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_SCINFO_WATCHLEVEL,
	.pString = NULL
};

//maturity_rating_edt1 ------------------------------------------------------------------------
static VACTION maturity_rating_item_keymap(POBJECT_HEAD pObj, UINT32 key);

static char maturity_rating_edt1_pattern[] = "r0~15";
EDIT_FIELD maturity_rating_edt1 = {
	.head = {
		.bType = OT_EDITFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {469, 211, 179, 29},
		.style = {
			.bShowIdx = WSTL_COM_SEL_BG, .bHLIdx = WSTL_RCI_COM_SEL_SEL, .bSelIdx = WSTL_RCI_COM_SEL_SEL, .bGrayIdx = WSTL_RCI_COM_SEL_SEL
		},
		.pfnKeyMap = maturity_rating_item_keymap, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&maturity_rating_item_con1
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.bMaxLen = 10,
	.pcsPattern = maturity_rating_edt1_pattern,
	.bStyle = NORMAL_EDIT_MODE,
	.bCursorMode = CURSOR_NORMAL, .bCursor = 0,
	.pString = display_strs[0],
	.pPrefix = (UINT16*)NULL, .pSuffix = (UINT16*)NULL,
	.valbak = 0
};

//maturity_rating_item_con2 ------------------------------------------------------------------------
static VACTION maturity_rating_item_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT maturity_rating_item_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER maturity_rating_item_con2 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 2, .bLeftID = 2, .bRightID = 2, .bUpID = 1, .bDownID = 1,
		.frame = {310, 245, 338, 29},
		.style = {
			.bShowIdx = WSTL_NOSHOW_IDX, .bHLIdx = WSTL_NOSHOW_IDX, .bSelIdx = WSTL_LCL_ITEM_NORMAL, .bGrayIdx = WSTL_LCL_ITEM_NORMAL
		},
		.pfnKeyMap = maturity_rating_item_keymap, .pfnCallback = maturity_rating_item_callback,
		.pNext = (POBJECT_HEAD)&maturity_rating_titile, .pRoot = (POBJECT_HEAD)&win_maturity_rating_con
	},
	.pNextInCntn = (POBJECT_HEAD)&maturity_rating_txt2,
	.FocusObjectID = 2,
	.bHiliteAsWhole = 1,
};

//maturity_rating_txt2 ------------------------------------------------------------------------

TEXT_FIELD maturity_rating_txt2 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {310, 245, 159, 29},
		.style = {
			.bShowIdx = WSTL_RCI_COM_SEL_NAME_BG, .bHLIdx = WSTL_RCI_COM_SEL_NAME_BG, .bSelIdx = WSTL_RCI_COM_SEL_NAME_BG, .bGrayIdx = WSTL_RCI_COM_SEL_NAME_BG
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&maturity_rating_edt2, .pRoot = (POBJECT_HEAD)&maturity_rating_item_con2
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_SYSTME_PARENTAL_LOCK_INPUT_PASSWORD,
	.pString = NULL
};

//maturity_rating_edt2 ------------------------------------------------------------------------

static char maturity_rating_edt2_pattern[] = "f32";
EDIT_FIELD maturity_rating_edt2 = {
	.head = {
		.bType = OT_EDITFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 2, .bLeftID = 2, .bRightID = 2, .bUpID = 2, .bDownID = 2,
		.frame = {469, 245, 179, 29},
		.style = {
			.bShowIdx = WSTL_COM_SEL_BG, .bHLIdx = WSTL_RCI_COM_SEL_SEL, .bSelIdx = WSTL_COM_SEL_BG, .bGrayIdx = WSTL_COM_SEL_BG
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&maturity_rating_item_con2
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.bMaxLen = 8,
	.pcsPattern = maturity_rating_edt2_pattern,
	.bStyle = NORMAL_EDIT_MODE,
	.bCursorMode = CURSOR_NORMAL, .bCursor = 0,
	.pString = display_strs[30],
	.pPrefix = (UINT16*)NULL, .pSuffix = (UINT16*)NULL,
	.valbak = 0
};

//maturity_rating_titile ------------------------------------------------------------------------

TEXT_FIELD maturity_rating_titile = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {338, 159, 113, 23},
		.style = {
			.bShowIdx = WSTL_TXT_5, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_5, .bGrayIdx = WSTL_TXT_5
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&maturity_rating_help_con1, .pRoot = (POBJECT_HEAD)&win_maturity_rating_con
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_SCINFO_WATCHLEVEL,
	.pString = NULL
};

//maturity_rating_help_con1 ------------------------------------------------------------------------

CONTAINER maturity_rating_help_con1 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {309, 327, 99, 33},
		.style = {
			.bShowIdx = WSTL_YELLO_ITEM, .bHLIdx = WSTL_YELLO_ITEM, .bSelIdx = WSTL_YELLO_ITEM, .bGrayIdx = WSTL_YELLO_ITEM
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&maturity_rating_help_name2, .pRoot = (POBJECT_HEAD)&win_maturity_rating_con
	},
	.pNextInCntn = (POBJECT_HEAD)&maturity_rating_help_name1,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//maturity_rating_help_name1 ------------------------------------------------------------------------

TEXT_FIELD maturity_rating_help_name1 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {332, 330, 56, 24},
		.style = {
			.bShowIdx = WSTL_TXT_5, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_5, .bGrayIdx = WSTL_TXT_5
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&maturity_rating_help_con1
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_BUTTON_CONFIRM,
	.pString = NULL
};

//maturity_rating_help_name2 ------------------------------------------------------------------------

TEXT_FIELD maturity_rating_help_name2 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {413, 327, 72, 33},
		.style = {
			.bShowIdx = WSTL_TXT_5, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_5, .bGrayIdx = WSTL_TXT_5
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&maturity_rating_help_con2, .pRoot = (POBJECT_HEAD)&win_maturity_rating_con
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_HELP_CHANGE,
	.pString = NULL
};

//maturity_rating_help_con2 ------------------------------------------------------------------------

CONTAINER maturity_rating_help_con2 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {493, 326, 66, 33},
		.style = {
			.bShowIdx = WSTL_BULE_ITEM, .bHLIdx = WSTL_BULE_ITEM, .bSelIdx = WSTL_BULE_ITEM, .bGrayIdx = WSTL_BULE_ITEM
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&maturity_rating_help_name4, .pRoot = (POBJECT_HEAD)&win_maturity_rating_con
	},
	.pNextInCntn = (POBJECT_HEAD)&maturity_rating_help_name3,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//maturity_rating_help_name3 ------------------------------------------------------------------------

TEXT_FIELD maturity_rating_help_name3 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {502, 331, 51, 21},
		.style = {
			.bShowIdx = WSTL_TXT_5, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_5, .bGrayIdx = WSTL_TXT_5
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&maturity_rating_help_con2
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_HELP_EXIT,
	.pString = NULL
};

//maturity_rating_help_name4 ------------------------------------------------------------------------

TEXT_FIELD maturity_rating_help_name4 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {559, 327, 74, 33},
		.style = {
			.bShowIdx = WSTL_TXT_5, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_5, .bGrayIdx = WSTL_TXT_5
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&win_maturity_rating_con
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_HELP_BACK,
	.pString = NULL
};
#endif//__WIN_CA_WATCHLEVEL_H__C286FD7D_6180_44FC_A540_E10CED4E8140
