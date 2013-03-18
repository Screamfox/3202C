/***************************************************************************************************
	This header file is generated by the Vega from a xform file.
	Please don't modify it!!
---------------------------------------------------------------------------------------------------*/
		
#ifndef __WIN_SYS_INFORMATION_OBJ_H__945EB490_1D59_46CB_B472_6711A3567AC0
#define __WIN_SYS_INFORMATION_OBJ_H__945EB490_1D59_46CB_B472_6711A3567AC0


/*******************************************************************************
*	Objects definition
*******************************************************************************/
extern CONTAINER con_sysinfo_item4;
extern CONTAINER sysinfo_help;
extern CONTAINER g_win_sys_information;
extern MULTI_TEXT txt_info_item8;
extern TEXT_FIELD txt_info_item1;
extern TEXT_FIELD txt_info_item5;
extern CONTAINER con_sysinfo_item3;
extern CONTAINER con_sysinfo_item2;
extern CONTAINER con_info_sub_menu;
extern TEXT_FIELD sysinfo_back;
extern CONTAINER con_sysinfo_item1;
extern TEXT_FIELD txt_info_item6;
extern TEXT_FIELD sysinfo_exit;
extern TEXT_FIELD txt_info_item4;
extern TEXT_FIELD txt_info_item7;
extern TEXT_FIELD txt_info_item3;
extern TEXT_FIELD txt_sm_info_title;
extern TEXT_FIELD txt_info_item2;

//g_win_sys_information ------------------------------------------------------------------------
static VACTION win_sysinfo_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT win_sysinfo_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER g_win_sys_information = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {0, 0, 720, 576},
		.style = {
			.bShowIdx = WSTL_RCI_BACKGROUND, .bHLIdx = WSTL_RCI_BACKGROUND, .bSelIdx = WSTL_RCI_BACKGROUND, .bGrayIdx = WSTL_RCI_BACKGROUND
		},
		.pfnKeyMap = win_sysinfo_keymap, .pfnCallback = win_sysinfo_callback,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)NULL
	},
	.pNextInCntn = (POBJECT_HEAD)&con_info_sub_menu,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 1,
};

//con_info_sub_menu ------------------------------------------------------------------------

CONTAINER con_info_sub_menu = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {286, 110, 384, 300},
		.style = {
			.bShowIdx = WSTL_RCI_COM_MENU_BG, .bHLIdx = WSTL_RCI_COM_MENU_BG, .bSelIdx = WSTL_RCI_COM_MENU_BG, .bGrayIdx = WSTL_RCI_COM_MENU_BG
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&g_win_sys_information
	},
	.pNextInCntn = (POBJECT_HEAD)&txt_sm_info_title,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//txt_sm_info_title ------------------------------------------------------------------------

TEXT_FIELD txt_sm_info_title = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {325, 116, 119, 24},
		.style = {
			.bShowIdx = WSTL_RCI_IGNORE, .bHLIdx = WSTL_RCI_IGNORE, .bSelIdx = WSTL_RCI_IGNORE, .bGrayIdx = WSTL_RCI_IGNORE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&con_sysinfo_item1, .pRoot = (POBJECT_HEAD)&con_info_sub_menu
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_SYS_INFORMATION,
	.pString = NULL
};

//con_sysinfo_item1 ------------------------------------------------------------------------

CONTAINER con_sysinfo_item1 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 4, .bDownID = 3,
		.frame = {302, 177, 352, 29},
		.style = {
			.bShowIdx = WSTL_RCI_BLUE_FRAME, .bHLIdx = WSTL_RCI_BLUE_FRAME, .bSelIdx = WSTL_RCI_BLUE_FRAME, .bGrayIdx = WSTL_RCI_BLUE_FRAME
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&con_sysinfo_item2, .pRoot = (POBJECT_HEAD)&con_info_sub_menu
	},
	.pNextInCntn = (POBJECT_HEAD)&txt_info_item1,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//txt_info_item1 ------------------------------------------------------------------------

TEXT_FIELD txt_info_item1 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {312, 179, 125, 29},
		.style = {
			.bShowIdx = WSTL_RCI_IGNORE, .bHLIdx = WSTL_RCI_IGNORE, .bSelIdx = WSTL_RCI_IGNORE, .bGrayIdx = WSTL_RCI_IGNORE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&txt_info_item5, .pRoot = (POBJECT_HEAD)&con_sysinfo_item1
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_PUBDATE,
	.pString = NULL
};

//txt_info_item5 ------------------------------------------------------------------------

TEXT_FIELD txt_info_item5 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {437, 177, 209, 29},
		.style = {
			.bShowIdx = WSTL_RCI_IGNORE, .bHLIdx = WSTL_RCI_IGNORE, .bSelIdx = WSTL_RCI_IGNORE, .bGrayIdx = WSTL_RCI_IGNORE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&con_sysinfo_item1
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[43]
};

//con_sysinfo_item2 ------------------------------------------------------------------------

CONTAINER con_sysinfo_item2 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 2, .bLeftID = 0, .bRightID = 0, .bUpID = 1, .bDownID = 3,
		.frame = {302, 218, 352, 29},
		.style = {
			.bShowIdx = WSTL_RCI_BLUE_FRAME, .bHLIdx = WSTL_RCI_BLUE_FRAME, .bSelIdx = WSTL_RCI_BLUE_FRAME, .bGrayIdx = WSTL_RCI_BLUE_FRAME
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&con_sysinfo_item3, .pRoot = (POBJECT_HEAD)&con_info_sub_menu
	},
	.pNextInCntn = (POBJECT_HEAD)&txt_info_item2,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//txt_info_item2 ------------------------------------------------------------------------

TEXT_FIELD txt_info_item2 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {312, 218, 125, 29},
		.style = {
			.bShowIdx = WSTL_RCI_IGNORE, .bHLIdx = WSTL_RCI_IGNORE, .bSelIdx = WSTL_RCI_IGNORE, .bGrayIdx = WSTL_RCI_IGNORE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&txt_info_item6, .pRoot = (POBJECT_HEAD)&con_sysinfo_item2
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_HARDWARE_INFO,
	.pString = NULL
};

//txt_info_item6 ------------------------------------------------------------------------

TEXT_FIELD txt_info_item6 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {437, 218, 209, 29},
		.style = {
			.bShowIdx = WSTL_RCI_IGNORE, .bHLIdx = WSTL_RCI_IGNORE, .bSelIdx = WSTL_RCI_IGNORE, .bGrayIdx = WSTL_RCI_IGNORE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&con_sysinfo_item2
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[40]
};

//con_sysinfo_item3 ------------------------------------------------------------------------

CONTAINER con_sysinfo_item3 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 3, .bLeftID = 0, .bRightID = 0, .bUpID = 2, .bDownID = 4,
		.frame = {302, 257, 352, 29},
		.style = {
			.bShowIdx = WSTL_RCI_BLUE_FRAME, .bHLIdx = WSTL_RCI_BLUE_FRAME, .bSelIdx = WSTL_RCI_BLUE_FRAME, .bGrayIdx = WSTL_RCI_BLUE_FRAME
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&con_sysinfo_item4, .pRoot = (POBJECT_HEAD)&con_info_sub_menu
	},
	.pNextInCntn = (POBJECT_HEAD)&txt_info_item3,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//txt_info_item3 ------------------------------------------------------------------------

TEXT_FIELD txt_info_item3 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {312, 258, 125, 29},
		.style = {
			.bShowIdx = WSTL_RCI_IGNORE, .bHLIdx = WSTL_RCI_IGNORE, .bSelIdx = WSTL_RCI_IGNORE, .bGrayIdx = WSTL_RCI_IGNORE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&txt_info_item7, .pRoot = (POBJECT_HEAD)&con_sysinfo_item3
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_SOFTWARE_INFO,
	.pString = NULL
};

//txt_info_item7 ------------------------------------------------------------------------

TEXT_FIELD txt_info_item7 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {437, 259, 209, 29},
		.style = {
			.bShowIdx = WSTL_RCI_IGNORE, .bHLIdx = WSTL_RCI_IGNORE, .bSelIdx = WSTL_RCI_IGNORE, .bGrayIdx = WSTL_RCI_IGNORE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&con_sysinfo_item3
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[41]
};

//con_sysinfo_item4 ------------------------------------------------------------------------

CONTAINER con_sysinfo_item4 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 4, .bLeftID = 0, .bRightID = 0, .bUpID = 3, .bDownID = 5,
		.frame = {302, 296, 360, 63},
		.style = {
			.bShowIdx = WSTL_RCI_BLUE_FRAME, .bHLIdx = WSTL_RCI_BLUE_FRAME, .bSelIdx = WSTL_RCI_BLUE_FRAME, .bGrayIdx = WSTL_RCI_BLUE_FRAME
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&sysinfo_help, .pRoot = (POBJECT_HEAD)&con_info_sub_menu
	},
	.pNextInCntn = (POBJECT_HEAD)&txt_info_item4,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 1,
};

//txt_info_item4 ------------------------------------------------------------------------

TEXT_FIELD txt_info_item4 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {312, 296, 146, 29},
		.style = {
			.bShowIdx = WSTL_RCI_IGNORE, .bHLIdx = WSTL_RCI_IGNORE, .bSelIdx = WSTL_RCI_IGNORE, .bGrayIdx = WSTL_RCI_IGNORE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&txt_info_item8, .pRoot = (POBJECT_HEAD)&con_sysinfo_item4
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_CASINFO_STBID_NEW,
	.pString = NULL
};

//txt_info_item8 ------------------------------------------------------------------------

TEXT_CONTENT txt_info_item8_text_content[] = {
	{STRING_UNICODE, 0},
};
MULTI_TEXT txt_info_item8 = {
	.head = {
		.bType = OT_MULTITEXT,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {446, 299, 211, 60},
		.style = {
			.bShowIdx = WSTL_RCI_IGNORE, .bHLIdx = WSTL_RCI_IGNORE, .bSelIdx = WSTL_RCI_IGNORE, .bGrayIdx = WSTL_RCI_IGNORE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&con_sysinfo_item4
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_TOP,
	.bCount = 1,
	.nLine = 0,
	.rcText = {4, 4, 200, 60},
	.scrollBar = NULL,
	.pTextTable = txt_info_item8_text_content
};

//sysinfo_help ------------------------------------------------------------------------

CONTAINER sysinfo_help = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {371, 363, 222, 44},
		.style = {
			.bShowIdx = WSTL_RCI_BACKGROUND, .bHLIdx = WSTL_RCI_BACKGROUND, .bSelIdx = WSTL_RCI_BACKGROUND, .bGrayIdx = WSTL_RCI_BACKGROUND
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&con_info_sub_menu
	},
	.pNextInCntn = (POBJECT_HEAD)&sysinfo_back,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//sysinfo_back ------------------------------------------------------------------------

TEXT_FIELD sysinfo_back = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {496, 371, 66, 33},
		.style = {
			.bShowIdx = WSTL_RCI_IGNORE, .bHLIdx = WSTL_RCI_IGNORE, .bSelIdx = WSTL_RCI_IGNORE, .bGrayIdx = WSTL_RCI_IGNORE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&sysinfo_exit, .pRoot = (POBJECT_HEAD)&sysinfo_help
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_HELP_BACK,
	.pString = NULL
};

//sysinfo_exit ------------------------------------------------------------------------

TEXT_FIELD sysinfo_exit = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {384, 371, 112, 33},
		.style = {
			.bShowIdx = WSTL_RCI_BLUE_ITEM, .bHLIdx = WSTL_RCI_BLUE_ITEM, .bSelIdx = WSTL_RCI_BLUE_ITEM, .bGrayIdx = WSTL_RCI_BLUE_ITEM
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&sysinfo_help
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_HELP_EXIT,
	.pString = NULL
};
#endif//__WIN_SYS_INFORMATION_OBJ_H__945EB490_1D59_46CB_B472_6711A3567AC0
