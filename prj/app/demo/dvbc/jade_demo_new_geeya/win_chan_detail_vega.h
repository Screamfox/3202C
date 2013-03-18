/***************************************************************************************************
	This header file is generated by the Vega from a xform file.
	Please don't modify it!!
---------------------------------------------------------------------------------------------------*/
		
#ifndef __WIN_CHAN_DETAIL_VEGA_H__465B440E_BB14_4231_B588_1A8BD8006EB9
#define __WIN_CHAN_DETAIL_VEGA_H__465B440E_BB14_4231_B588_1A8BD8006EB9


/*******************************************************************************
*	Objects definition
*******************************************************************************/
extern TEXT_FIELD chan_detail_prg_idx3;
extern TEXT_FIELD chan_detail_pre_prg7;
extern CONTAINER chan_detail_prg_item8;
extern CONTAINER chan_detail_prg_item7;
extern CONTAINER chan_detail_prg_item6;
extern TEXT_FIELD chan_detail_prg_name6;
extern TEXT_FIELD chan_detail_prg_name2;
extern CONTAINER chan_detail_prg_item4;
extern CONTAINER chan_detail_prg_con;
extern TEXT_FIELD chan_detail_prg_name5;
extern TEXT_FIELD crt_prg;
extern TEXT_FIELD chan_detail_prg_name10;
extern TEXT_FIELD chan_detail_prg_idx6;
extern CONTAINER chan_detail_prg_item10;
extern CONTAINER chan_detail_prg_item5;
extern TEXT_FIELD chan_detail_prg_name9;
extern TEXT_FIELD chan_detail_prg_idx9;
extern CONTAINER chan_detail_prg_item9;
extern TEXT_FIELD chan_detail_prg_idx4;
extern TEXT_FIELD chan_detail_prg_name3;
extern TEXT_FIELD chan_detail_prg_name8;
extern TEXT_FIELD chan_detail_pre_prg1;
extern TEXT_FIELD chan_detail_prg_idx8;
extern CONTAINER chan_detail_prg_item1;
extern BITMAP right;
extern BITMAP left;
extern TEXT_FIELD chan_detail_pre_prg8;
extern TEXT_FIELD chan_detail_prg_idx2;
extern BITMAP Bitmap5;
extern TEXT_FIELD chan_detail_date;
extern TEXT_FIELD chan_detail_pre_prg6;
extern TEXT_FIELD chan_detail_prg_idx10;
extern TEXT_FIELD chan_detail_prg_idx5;
extern TEXT_FIELD chan_detail_prg_idx1;
extern CONTAINER chan_detail_prg_item3;
extern SCROLL_BAR chan_detail_prg_scb;
extern OBJLIST chan_detail_prg_ol;
extern CONTAINER g_win_chan_detail;
extern TEXT_FIELD grp_scan;
extern TEXT_FIELD chan_detail_prg_name1;
extern CONTAINER chan_detail_prg_item2;
extern TEXT_FIELD chan_detail_pre_prg2;
extern TEXT_FIELD chan_detail_pre_prg5;
extern TEXT_FIELD chan_detail_pre_prg9;
extern TEXT_FIELD chan_detail_pre_prg4;
extern TEXT_FIELD chan_detail_prg_idx7;
extern TEXT_FIELD chan_detail_pre_prg3;
extern TEXT_FIELD chan_detail_prg_name4;
extern CONTAINER chan_detail_con;
extern TEXT_FIELD chan_detail_prg_name7;
extern TEXT_FIELD chan_detail_pre_prg10;

//g_win_chan_detail ------------------------------------------------------------------------
static VACTION chan_detail_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT chan_detail_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER g_win_chan_detail = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {0, 0, 720, 576},
		.style = {
			.bShowIdx = WSTL_TRANS_IX, .bHLIdx = WSTL_TRANS_IX, .bSelIdx = WSTL_TRANS_IX, .bGrayIdx = WSTL_TRANS_IX
		},
		.pfnKeyMap = chan_detail_keymap, .pfnCallback = chan_detail_callback,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)NULL
	},
	.pNextInCntn = (POBJECT_HEAD)&chan_detail_prg_con,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 0,
};

//chan_detail_prg_con ------------------------------------------------------------------------

CONTAINER chan_detail_prg_con = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {53, 92, 620, 356},
		.style = {
			.bShowIdx = WSTL_RCI_LAST_WIN_BG, .bHLIdx = WSTL_RCI_LAST_WIN_BG, .bSelIdx = WSTL_RCI_LAST_WIN_BG, .bGrayIdx = WSTL_RCI_LAST_WIN_BG
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&g_win_chan_detail
	},
	.pNextInCntn = (POBJECT_HEAD)&chan_detail_con,
	.FocusObjectID = 2,
	.bHiliteAsWhole = 0,
};

//chan_detail_con ------------------------------------------------------------------------

CONTAINER chan_detail_con = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 1, .bRightID = 1, .bUpID = 1, .bDownID = 1,
		.frame = {62, 71, 594, 34},
		.style = {
			.bShowIdx = WSTL_RCI_COM_TITLE, .bHLIdx = WSTL_GRP_TITLE_ARROW, .bSelIdx = WSTL_GRP_TITLE_ARROW, .bGrayIdx = WSTL_GRP_TITLE_ARROW
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_ol, .pRoot = (POBJECT_HEAD)&chan_detail_prg_con
	},
	.pNextInCntn = (POBJECT_HEAD)&grp_scan,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//grp_scan ------------------------------------------------------------------------

TEXT_FIELD grp_scan = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {121, 75, 108, 30},
		.style = {
			.bShowIdx = WSTL_RCI_IGNORE, .bHLIdx = WSTL_RCI_IGNORE, .bSelIdx = WSTL_RCI_IGNORE, .bGrayIdx = WSTL_RCI_IGNORE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&right, .pRoot = (POBJECT_HEAD)&chan_detail_con
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_GRP_SCAN,
	.pString = NULL
};

//right ------------------------------------------------------------------------

BITMAP right = {
	.head = {
		.bType = OT_BITMAP,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {613, 80, 18, 20},
		.style = {
			.bShowIdx = 0, .bHLIdx = 0, .bSelIdx = 0, .bGrayIdx = 0
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&Bitmap5, .pRoot = (POBJECT_HEAD)&chan_detail_con
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wIconID = IM_ARROW_03_RIGHT,
};

//Bitmap5 ------------------------------------------------------------------------

BITMAP Bitmap5 = {
	.head = {
		.bType = OT_BITMAP,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {76, 70, 48, 38},
		.style = {
			.bShowIdx = 0, .bHLIdx = 0, .bSelIdx = 0, .bGrayIdx = 0
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&crt_prg, .pRoot = (POBJECT_HEAD)&chan_detail_con
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wIconID = IM_TITILE_ICON,
};

//crt_prg ------------------------------------------------------------------------

TEXT_FIELD crt_prg = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {292, 70, 120, 36},
		.style = {
			.bShowIdx = WSTL_RCI_IGNORE, .bHLIdx = WSTL_RCI_IGNORE, .bSelIdx = WSTL_RCI_IGNORE, .bGrayIdx = WSTL_RCI_IGNORE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&left, .pRoot = (POBJECT_HEAD)&chan_detail_con
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_CRT_PROGRAM,
	.pString = NULL
};

//left ------------------------------------------------------------------------

BITMAP left = {
	.head = {
		.bType = OT_BITMAP,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {237, 74, 30, 28},
		.style = {
			.bShowIdx = 0, .bHLIdx = 0, .bSelIdx = 0, .bGrayIdx = 0
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_date, .pRoot = (POBJECT_HEAD)&chan_detail_con
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wIconID = IM_ARROW_01_LEFT,
};

//chan_detail_date ------------------------------------------------------------------------

TEXT_FIELD chan_detail_date = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {405, 71, 207, 30},
		.style = {
			.bShowIdx = WSTL_RCI_COM_TITLE_BG, .bHLIdx = WSTL_RCI_IGNORE, .bSelIdx = WSTL_RCI_IGNORE, .bGrayIdx = WSTL_RCI_IGNORE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&chan_detail_con
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_INVALID_ID,
	.pString = display_strs[33]
};

//chan_detail_prg_ol ------------------------------------------------------------------------
static VACTION program_list_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT program_list_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

static POBJECT_HEAD chan_detail_prg_ol_ListField[] = {
	(POBJECT_HEAD)&chan_detail_prg_item1,
	(POBJECT_HEAD)&chan_detail_prg_item2,
	(POBJECT_HEAD)&chan_detail_prg_item3,
	(POBJECT_HEAD)&chan_detail_prg_item4,
	(POBJECT_HEAD)&chan_detail_prg_item5,
	(POBJECT_HEAD)&chan_detail_prg_item6,
	(POBJECT_HEAD)&chan_detail_prg_item7,
	(POBJECT_HEAD)&chan_detail_prg_item8,
	(POBJECT_HEAD)&chan_detail_prg_item9,
	(POBJECT_HEAD)&chan_detail_prg_item10,
};
OBJLIST chan_detail_prg_ol = {
	.head = {
		.bType = OT_OBJLIST,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 2, .bLeftID = 2, .bRightID = 2, .bUpID = 2, .bDownID = 2,
		.frame = {54, 104, 610, 321},
		.style = {
			.bShowIdx = WSTL_NOSHOW_IDX, .bHLIdx = WSTL_NOSHOW_IDX, .bSelIdx = WSTL_NOSHOW_IDX, .bGrayIdx = WSTL_NOSHOW_IDX
		},
		.pfnKeyMap = program_list_keymap, .pfnCallback = program_list_callback,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&chan_detail_prg_con
	},
	.pListField = chan_detail_prg_ol_ListField,
	.scrollBar = &chan_detail_prg_scb,
	.bListStyle = LIST_VER|LIST_NO_SLECT|LIST_ITEMS_NOCOMPLETE|LIST_SCROLL|LIST_GRID|LIST_FOCUS_FIRST|LIST_PAGE_KEEP_CURITEM|LIST_FULL_PAGE,
	.wDep = 10, .wCount = 10,
	.wTop = 0, .wCurPoint = 0, .wNewPoint = 0,
	.wSelect = 0, .dwSelect = NULL,
	.pSelMarkObj = NULL
};

//chan_detail_prg_scb ------------------------------------------------------------------------

SCROLL_BAR chan_detail_prg_scb = {
	.head = {
		.bType = OT_SCROLLBAR,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {651, 111, 12, 306},
		.style = {
			.bShowIdx = WSTL_SCROLLBAR_2, .bHLIdx = WSTL_SCROLLBAR_1, .bSelIdx = WSTL_SCROLLBAR_1, .bGrayIdx = WSTL_SCROLLBAR_1
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_item1, .pRoot = (POBJECT_HEAD)&chan_detail_prg_ol
	},
	.bStyle = BAR_VERT_AUTO|SBAR_STYLE_RECT_STYLE,
	.bPage = 10,
	.wThumbID = WSTL_SCROLLBAR_2, .wTickBg = WSTL_NOSHOW_IDX,
	.rcBar = {0, 10, 12, 160},
	.nMax = 100, .nPos = 1
};

//chan_detail_prg_item1 ------------------------------------------------------------------------
static VACTION program_list_item_con_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT program_list_item_con_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER chan_detail_prg_item1 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 10, .bDownID = 2,
		.frame = {64, 111, 583, 27},
		.style = {
			.bShowIdx = WSTL_RCI_C_GRAY, .bHLIdx = WSTL_BUTTON_1, .bSelIdx = WSTL_BUTTON_1, .bGrayIdx = WSTL_BUTTON_2
		},
		.pfnKeyMap = program_list_item_con_keymap, .pfnCallback = program_list_item_con_callback,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_item2, .pRoot = (POBJECT_HEAD)&chan_detail_prg_ol
	},
	.pNextInCntn = (POBJECT_HEAD)&chan_detail_prg_idx1,
	.FocusObjectID = 2,
	.bHiliteAsWhole = 1,
};

//chan_detail_prg_idx1 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_prg_idx1 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 2, .bRightID = 1, .bUpID = 0, .bDownID = 0,
		.frame = {64, 111, 75, 27},
		.style = {
			.bShowIdx = WSTL_LIST, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_name1, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item1
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[10]
};

//chan_detail_prg_name1 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_prg_name1 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 2, .bUpID = 0, .bDownID = 0,
		.frame = {143, 111, 180, 27},
		.style = {
			.bShowIdx = WSTL_LIST01, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_pre_prg1, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item1
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[11]
};

//chan_detail_pre_prg1 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_pre_prg1 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 2, .bLeftID = 1, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {327, 111, 320, 27},
		.style = {
			.bShowIdx = WSTL_LIST01, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item1
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER|C_ALIGN_SCROLL,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[12]
};

//chan_detail_prg_item2 ------------------------------------------------------------------------
static VACTION program_list_item_con_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT program_list_item_con_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER chan_detail_prg_item2 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 2, .bLeftID = 0, .bRightID = 0, .bUpID = 1, .bDownID = 3,
		.frame = {64, 142, 583, 27},
		.style = {
			.bShowIdx = WSTL_RCI_C_GRAY, .bHLIdx = WSTL_BUTTON_1, .bSelIdx = WSTL_BUTTON_1, .bGrayIdx = WSTL_BUTTON_2
		},
		.pfnKeyMap = program_list_item_con_keymap, .pfnCallback = program_list_item_con_callback,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_item3, .pRoot = (POBJECT_HEAD)&chan_detail_prg_ol
	},
	.pNextInCntn = (POBJECT_HEAD)&chan_detail_prg_idx2,
	.FocusObjectID = 2,
	.bHiliteAsWhole = 1,
};

//chan_detail_prg_idx2 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_prg_idx2 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 2, .bRightID = 1, .bUpID = 0, .bDownID = 0,
		.frame = {64, 142, 75, 27},
		.style = {
			.bShowIdx = WSTL_LIST, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_name2, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item2
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[13]
};

//chan_detail_prg_name2 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_prg_name2 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 2, .bUpID = 0, .bDownID = 0,
		.frame = {143, 142, 180, 27},
		.style = {
			.bShowIdx = WSTL_LIST01, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_pre_prg2, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item2
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[14]
};

//chan_detail_pre_prg2 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_pre_prg2 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 2, .bLeftID = 1, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {327, 142, 320, 27},
		.style = {
			.bShowIdx = WSTL_LIST01, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item2
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[15]
};

//chan_detail_prg_item3 ------------------------------------------------------------------------
static VACTION program_list_item_con_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT program_list_item_con_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER chan_detail_prg_item3 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 3, .bLeftID = 0, .bRightID = 0, .bUpID = 2, .bDownID = 4,
		.frame = {64, 173, 583, 27},
		.style = {
			.bShowIdx = WSTL_RCI_C_GRAY, .bHLIdx = WSTL_BUTTON_1, .bSelIdx = WSTL_BUTTON_1, .bGrayIdx = WSTL_BUTTON_2
		},
		.pfnKeyMap = program_list_item_con_keymap, .pfnCallback = program_list_item_con_callback,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_item4, .pRoot = (POBJECT_HEAD)&chan_detail_prg_ol
	},
	.pNextInCntn = (POBJECT_HEAD)&chan_detail_prg_idx3,
	.FocusObjectID = 2,
	.bHiliteAsWhole = 1,
};

//chan_detail_prg_idx3 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_prg_idx3 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 2, .bRightID = 1, .bUpID = 0, .bDownID = 0,
		.frame = {64, 173, 75, 27},
		.style = {
			.bShowIdx = WSTL_LIST, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_name3, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item3
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[16]
};

//chan_detail_prg_name3 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_prg_name3 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 2, .bUpID = 0, .bDownID = 0,
		.frame = {143, 173, 180, 27},
		.style = {
			.bShowIdx = WSTL_LIST01, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_pre_prg3, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item3
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[17]
};

//chan_detail_pre_prg3 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_pre_prg3 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 2, .bLeftID = 1, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {327, 173, 320, 27},
		.style = {
			.bShowIdx = WSTL_LIST01, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item3
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[18]
};

//chan_detail_prg_item4 ------------------------------------------------------------------------
static VACTION program_list_item_con_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT program_list_item_con_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER chan_detail_prg_item4 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 4, .bLeftID = 0, .bRightID = 0, .bUpID = 3, .bDownID = 5,
		.frame = {64, 204, 583, 27},
		.style = {
			.bShowIdx = WSTL_RCI_C_GRAY, .bHLIdx = WSTL_BUTTON_1, .bSelIdx = WSTL_BUTTON_1, .bGrayIdx = WSTL_BUTTON_2
		},
		.pfnKeyMap = program_list_item_con_keymap, .pfnCallback = program_list_item_con_callback,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_item5, .pRoot = (POBJECT_HEAD)&chan_detail_prg_ol
	},
	.pNextInCntn = (POBJECT_HEAD)&chan_detail_prg_idx4,
	.FocusObjectID = 2,
	.bHiliteAsWhole = 1,
};

//chan_detail_prg_idx4 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_prg_idx4 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 2, .bRightID = 1, .bUpID = 0, .bDownID = 0,
		.frame = {64, 204, 75, 27},
		.style = {
			.bShowIdx = WSTL_LIST, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_name4, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item4
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[19]
};

//chan_detail_prg_name4 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_prg_name4 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 2, .bUpID = 0, .bDownID = 0,
		.frame = {143, 204, 180, 27},
		.style = {
			.bShowIdx = WSTL_LIST01, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_pre_prg4, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item4
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[20]
};

//chan_detail_pre_prg4 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_pre_prg4 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 2, .bLeftID = 1, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {327, 204, 320, 27},
		.style = {
			.bShowIdx = WSTL_LIST01, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item4
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[21]
};

//chan_detail_prg_item5 ------------------------------------------------------------------------
static VACTION program_list_item_con_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT program_list_item_con_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER chan_detail_prg_item5 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 5, .bLeftID = 0, .bRightID = 0, .bUpID = 4, .bDownID = 6,
		.frame = {64, 235, 583, 27},
		.style = {
			.bShowIdx = WSTL_RCI_C_GRAY, .bHLIdx = WSTL_BUTTON_1, .bSelIdx = WSTL_BUTTON_1, .bGrayIdx = WSTL_BUTTON_2
		},
		.pfnKeyMap = program_list_item_con_keymap, .pfnCallback = program_list_item_con_callback,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_item6, .pRoot = (POBJECT_HEAD)&chan_detail_prg_ol
	},
	.pNextInCntn = (POBJECT_HEAD)&chan_detail_prg_idx5,
	.FocusObjectID = 2,
	.bHiliteAsWhole = 1,
};

//chan_detail_prg_idx5 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_prg_idx5 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 2, .bRightID = 1, .bUpID = 0, .bDownID = 0,
		.frame = {64, 235, 75, 27},
		.style = {
			.bShowIdx = WSTL_LIST, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_name5, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item5
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[22]
};

//chan_detail_prg_name5 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_prg_name5 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 2, .bUpID = 0, .bDownID = 0,
		.frame = {143, 235, 180, 27},
		.style = {
			.bShowIdx = WSTL_LIST01, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_pre_prg5, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item5
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[23]
};

//chan_detail_pre_prg5 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_pre_prg5 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 2, .bLeftID = 1, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {327, 235, 320, 27},
		.style = {
			.bShowIdx = WSTL_LIST01, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item5
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[24]
};

//chan_detail_prg_item6 ------------------------------------------------------------------------
static VACTION program_list_item_con_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT program_list_item_con_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER chan_detail_prg_item6 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 6, .bLeftID = 0, .bRightID = 0, .bUpID = 5, .bDownID = 7,
		.frame = {64, 266, 583, 27},
		.style = {
			.bShowIdx = WSTL_RCI_C_GRAY, .bHLIdx = WSTL_BUTTON_1, .bSelIdx = WSTL_BUTTON_1, .bGrayIdx = WSTL_BUTTON_2
		},
		.pfnKeyMap = program_list_item_con_keymap, .pfnCallback = program_list_item_con_callback,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_item7, .pRoot = (POBJECT_HEAD)&chan_detail_prg_ol
	},
	.pNextInCntn = (POBJECT_HEAD)&chan_detail_prg_idx6,
	.FocusObjectID = 2,
	.bHiliteAsWhole = 1,
};

//chan_detail_prg_idx6 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_prg_idx6 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 2, .bRightID = 1, .bUpID = 0, .bDownID = 0,
		.frame = {64, 266, 75, 27},
		.style = {
			.bShowIdx = WSTL_LIST, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_name6, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item6
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[25]
};

//chan_detail_prg_name6 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_prg_name6 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 2, .bUpID = 0, .bDownID = 0,
		.frame = {143, 266, 180, 27},
		.style = {
			.bShowIdx = WSTL_LIST01, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_pre_prg6, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item6
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[26]
};

//chan_detail_pre_prg6 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_pre_prg6 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 2, .bLeftID = 1, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {327, 266, 320, 27},
		.style = {
			.bShowIdx = WSTL_LIST01, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item6
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[27]
};

//chan_detail_prg_item7 ------------------------------------------------------------------------
static VACTION program_list_item_con_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT program_list_item_con_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER chan_detail_prg_item7 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 7, .bLeftID = 0, .bRightID = 0, .bUpID = 6, .bDownID = 8,
		.frame = {64, 297, 583, 27},
		.style = {
			.bShowIdx = WSTL_RCI_C_GRAY, .bHLIdx = WSTL_BUTTON_1, .bSelIdx = WSTL_BUTTON_1, .bGrayIdx = WSTL_BUTTON_2
		},
		.pfnKeyMap = program_list_item_con_keymap, .pfnCallback = program_list_item_con_callback,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_item8, .pRoot = (POBJECT_HEAD)&chan_detail_prg_ol
	},
	.pNextInCntn = (POBJECT_HEAD)&chan_detail_prg_idx7,
	.FocusObjectID = 2,
	.bHiliteAsWhole = 1,
};

//chan_detail_prg_idx7 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_prg_idx7 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 2, .bRightID = 1, .bUpID = 0, .bDownID = 0,
		.frame = {64, 297, 75, 27},
		.style = {
			.bShowIdx = WSTL_LIST, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_name7, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item7
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[28]
};

//chan_detail_prg_name7 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_prg_name7 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 2, .bUpID = 0, .bDownID = 0,
		.frame = {143, 297, 180, 27},
		.style = {
			.bShowIdx = WSTL_LIST01, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_pre_prg7, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item7
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[29]
};

//chan_detail_pre_prg7 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_pre_prg7 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 2, .bLeftID = 1, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {327, 297, 320, 27},
		.style = {
			.bShowIdx = WSTL_LIST01, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item7
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[30]
};

//chan_detail_prg_item8 ------------------------------------------------------------------------
static VACTION program_list_item_con_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT program_list_item_con_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER chan_detail_prg_item8 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 8, .bLeftID = 0, .bRightID = 0, .bUpID = 7, .bDownID = 9,
		.frame = {64, 328, 583, 27},
		.style = {
			.bShowIdx = WSTL_RCI_C_GRAY, .bHLIdx = WSTL_BUTTON_1, .bSelIdx = WSTL_BUTTON_1, .bGrayIdx = WSTL_BUTTON_2
		},
		.pfnKeyMap = program_list_item_con_keymap, .pfnCallback = program_list_item_con_callback,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_item9, .pRoot = (POBJECT_HEAD)&chan_detail_prg_ol
	},
	.pNextInCntn = (POBJECT_HEAD)&chan_detail_prg_idx8,
	.FocusObjectID = 2,
	.bHiliteAsWhole = 1,
};

//chan_detail_prg_idx8 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_prg_idx8 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 2, .bRightID = 1, .bUpID = 0, .bDownID = 0,
		.frame = {64, 328, 75, 27},
		.style = {
			.bShowIdx = WSTL_LIST, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_name8, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item8
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[31]
};

//chan_detail_prg_name8 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_prg_name8 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 2, .bUpID = 0, .bDownID = 0,
		.frame = {143, 328, 180, 27},
		.style = {
			.bShowIdx = WSTL_LIST01, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_pre_prg8, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item8
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[32]
};

//chan_detail_pre_prg8 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_pre_prg8 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 2, .bLeftID = 1, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {327, 328, 320, 27},
		.style = {
			.bShowIdx = WSTL_LIST01, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item8
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[33]
};

//chan_detail_prg_item9 ------------------------------------------------------------------------
static VACTION program_list_item_con_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT program_list_item_con_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER chan_detail_prg_item9 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 9, .bLeftID = 0, .bRightID = 0, .bUpID = 8, .bDownID = 10,
		.frame = {64, 359, 583, 27},
		.style = {
			.bShowIdx = WSTL_RCI_C_GRAY, .bHLIdx = WSTL_BUTTON_1, .bSelIdx = WSTL_BUTTON_1, .bGrayIdx = WSTL_BUTTON_2
		},
		.pfnKeyMap = program_list_item_con_keymap, .pfnCallback = program_list_item_con_callback,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_item10, .pRoot = (POBJECT_HEAD)&chan_detail_prg_ol
	},
	.pNextInCntn = (POBJECT_HEAD)&chan_detail_prg_idx9,
	.FocusObjectID = 2,
	.bHiliteAsWhole = 1,
};

//chan_detail_prg_idx9 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_prg_idx9 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 2, .bRightID = 1, .bUpID = 0, .bDownID = 0,
		.frame = {64, 359, 75, 27},
		.style = {
			.bShowIdx = WSTL_LIST, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_name9, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item9
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[34]
};

//chan_detail_prg_name9 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_prg_name9 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 2, .bUpID = 0, .bDownID = 0,
		.frame = {143, 359, 180, 27},
		.style = {
			.bShowIdx = WSTL_LIST01, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_pre_prg9, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item9
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[35]
};

//chan_detail_pre_prg9 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_pre_prg9 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 2, .bLeftID = 1, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {327, 359, 320, 27},
		.style = {
			.bShowIdx = WSTL_LIST01, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item9
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[36]
};

//chan_detail_prg_item10 ------------------------------------------------------------------------
static VACTION program_list_item_con_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT program_list_item_con_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER chan_detail_prg_item10 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 10, .bLeftID = 0, .bRightID = 0, .bUpID = 9, .bDownID = 1,
		.frame = {64, 390, 583, 27},
		.style = {
			.bShowIdx = WSTL_RCI_C_GRAY, .bHLIdx = WSTL_BUTTON_1, .bSelIdx = WSTL_BUTTON_1, .bGrayIdx = WSTL_BUTTON_2
		},
		.pfnKeyMap = program_list_item_con_keymap, .pfnCallback = program_list_item_con_callback,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&chan_detail_prg_ol
	},
	.pNextInCntn = (POBJECT_HEAD)&chan_detail_prg_idx10,
	.FocusObjectID = 2,
	.bHiliteAsWhole = 1,
};

//chan_detail_prg_idx10 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_prg_idx10 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 2, .bRightID = 1, .bUpID = 0, .bDownID = 0,
		.frame = {64, 390, 75, 27},
		.style = {
			.bShowIdx = WSTL_LIST, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_prg_name10, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item10
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[37]
};

//chan_detail_prg_name10 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_prg_name10 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 2, .bUpID = 0, .bDownID = 0,
		.frame = {143, 390, 180, 27},
		.style = {
			.bShowIdx = WSTL_LIST01, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&chan_detail_pre_prg10, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item10
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[38]
};

//chan_detail_pre_prg10 ------------------------------------------------------------------------

TEXT_FIELD chan_detail_pre_prg10 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 2, .bLeftID = 1, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {327, 390, 320, 27},
		.style = {
			.bShowIdx = WSTL_LIST01, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_3, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&chan_detail_prg_item10
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 10, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[39]
};
#endif//__WIN_CHAN_DETAIL_VEGA_H__465B440E_BB14_4231_B588_1A8BD8006EB9
