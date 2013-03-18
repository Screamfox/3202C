#if 0
/***************************************************************************************************
	This header file is generated by the Vega from a xform file.
	Please don't modify it!!
---------------------------------------------------------------------------------------------------*/
		
#ifndef __WIN_OPERATOR_MESSAGE_H__AC934D24_E9AB_4920_853E_FAAE4AD98B55
#define __WIN_OPERATOR_MESSAGE_H__AC934D24_E9AB_4920_853E_FAAE4AD98B55


/*******************************************************************************
*	Objects definition
*******************************************************************************/
extern TEXT_FIELD txt_op_title2;
extern TEXT_FIELD op_table_title_id;
extern TEXT_FIELD op_num8;
extern TEXT_FIELD op_name4;
extern CONTAINER op_item5;
extern TEXT_FIELD op_name7;
extern TEXT_FIELD op_idx8;
extern TEXT_FIELD op_num0;
extern TEXT_FIELD op_name1;
extern TEXT_FIELD op_idx6;
extern TEXT_FIELD op_idx5;
extern OBJLIST op_ol;
extern CONTAINER g_win_operator_message;
extern TEXT_FIELD txt_op_title4;
extern TEXT_FIELD txt_op_title3;
extern TEXT_FIELD op_num3;
extern TEXT_FIELD op_idx2;
extern TEXT_FIELD op_name5;
extern TEXT_FIELD txt_op_title1;
extern TEXT_FIELD txt_op_title;
extern TEXT_FIELD op_name9;
extern TEXT_FIELD op_num9;
extern CONTAINER op_item4;
extern TEXT_FIELD op_idx9;
extern TEXT_FIELD op_num2;
extern TEXT_FIELD op_num4;
extern TEXT_FIELD op_num1;
extern CONTAINER op_item9;
extern TEXT_FIELD op_name6;
extern CONTAINER op_item6;
extern CONTAINER op_item7;
extern CONTAINER op_item3;
extern CONTAINER op_item8;
extern TEXT_FIELD op_table_title_name;
extern TEXT_FIELD op_name8;
extern CONTAINER op_item1;
extern TEXT_FIELD op_num7;
extern TEXT_FIELD op_name2;
extern TEXT_FIELD op_idx7;
extern TEXT_FIELD op_num6;
extern TEXT_FIELD op_name0;
extern TEXT_FIELD op_num5;
extern CONTAINER op_item2;
extern TEXT_FIELD op_idx3;
extern CONTAINER op_item0;
extern TEXT_FIELD op_table_title_num;
extern CONTAINER op_table_tilte_com;
extern TEXT_FIELD op_idx0;
extern TEXT_FIELD op_idx4;
extern TEXT_FIELD op_idx1;
extern TEXT_FIELD op_name3;
extern CONTAINER op_info_con;

//g_win_operator_message ------------------------------------------------------------------------
static VACTION op_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT op_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER g_win_operator_message = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {286, 92, 394, 456},
		.style = {
			.bShowIdx = WSTL_EMIAL_OL_CON, .bHLIdx = WSTL_EMIAL_OL_CON, .bSelIdx = WSTL_EMIAL_OL_CON, .bGrayIdx = WSTL_EMIAL_OL_CON
		},
		.pfnKeyMap = op_keymap, .pfnCallback = op_callback,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)NULL
	},
	.pNextInCntn = (POBJECT_HEAD)&op_info_con,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//op_info_con ------------------------------------------------------------------------

CONTAINER op_info_con = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 2, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {290, 130, 387, 377},
		.style = {
			.bShowIdx = WSTL_OP_OL, .bHLIdx = WSTL_OP_OL, .bSelIdx = WSTL_OP_OL, .bGrayIdx = WSTL_OP_OL
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_ol, .pRoot = (POBJECT_HEAD)&g_win_operator_message
	},
	.pNextInCntn = (POBJECT_HEAD)&op_table_tilte_com,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 0,
};

//op_table_tilte_com ------------------------------------------------------------------------

CONTAINER op_table_tilte_com = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {291, 134, 385, 33},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_4, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&op_info_con
	},
	.pNextInCntn = (POBJECT_HEAD)&op_table_title_id,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 0,
};

//op_table_title_id ------------------------------------------------------------------------

TEXT_FIELD op_table_title_id = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {294, 133, 89, 31},
		.style = {
			.bShowIdx = WSTL_YU_OP, .bHLIdx = WSTL_YU_OP, .bSelIdx = WSTL_YU_OP, .bGrayIdx = WSTL_YU_OP
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_table_title_num, .pRoot = (POBJECT_HEAD)&op_table_tilte_com
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_CTI_SEARIAL_NUM,
	.pString = NULL
};

//op_table_title_num ------------------------------------------------------------------------

TEXT_FIELD op_table_title_num = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {388, 133, 111, 31},
		.style = {
			.bShowIdx = WSTL_YU_OP, .bHLIdx = WSTL_YU_OP, .bSelIdx = WSTL_YU_OP, .bGrayIdx = WSTL_YU_OP
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_table_title_name, .pRoot = (POBJECT_HEAD)&op_table_tilte_com
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_CTI_OPERATOR_ID,
	.pString = NULL
};

//op_table_title_name ------------------------------------------------------------------------

TEXT_FIELD op_table_title_name = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {502, 133, 171, 31},
		.style = {
			.bShowIdx = WSTL_YU_OP, .bHLIdx = WSTL_YU_OP, .bSelIdx = WSTL_YU_OP, .bGrayIdx = WSTL_YU_OP
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&op_table_tilte_com
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_CTI_OPERATOR_NAME,
	.pString = NULL
};

//op_ol ------------------------------------------------------------------------
static VACTION op_list_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT op_list_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

static POBJECT_HEAD op_ol_ListField[] = {
	(POBJECT_HEAD)&op_item0,
	(POBJECT_HEAD)&op_item1,
	(POBJECT_HEAD)&op_item2,
	(POBJECT_HEAD)&op_item3,
	(POBJECT_HEAD)&op_item4,
	(POBJECT_HEAD)&op_item5,
	(POBJECT_HEAD)&op_item6,
	(POBJECT_HEAD)&op_item7,
	(POBJECT_HEAD)&op_item8,
	(POBJECT_HEAD)&op_item9,
};
OBJLIST op_ol = {
	.head = {
		.bType = OT_OBJLIST,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 1, .bRightID = 1, .bUpID = 0, .bDownID = 0,
		.frame = {294, 171, 379, 335},
		.style = {
			.bShowIdx = WSTL_OP_OL, .bHLIdx = WSTL_OP_OL, .bSelIdx = WSTL_OP_OL, .bGrayIdx = WSTL_OP_OL
		},
		.pfnKeyMap = op_list_keymap, .pfnCallback = op_list_callback,
		.pNext = (POBJECT_HEAD)&txt_op_title, .pRoot = (POBJECT_HEAD)&g_win_operator_message
	},
	.pListField = op_ol_ListField,
	.scrollBar = NULL,
	.bListStyle = LIST_VER|LIST_NO_SLECT|LIST_NOKEEP_FOUCS|LIST_NOKEEP_SELECT|LIST_ITEMS_NOCOMPLETE|LIST_SCROLL|LIST_GRID|LIST_SELECT_FIRST|LIST_PAGE_KEEP_CURITEM|LIST_FULL_PAGE|LIST_BARSCROLL_NOCOMPLETE,
	.wDep = 10, .wCount = 0,
	.wTop = 0, .wCurPoint = 0, .wNewPoint = 0,
	.wSelect = 0, .dwSelect = NULL,
	.pSelMarkObj = NULL
};

//op_item0 ------------------------------------------------------------------------

CONTAINER op_item0 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 10, .bDownID = 2,
		.frame = {294, 174, 380, 33},
		.style = {
			.bShowIdx = WSTL_OP_OL, .bHLIdx = WSTL_OP_OL, .bSelIdx = WSTL_OP_OL, .bGrayIdx = WSTL_OP_OL
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_item1, .pRoot = (POBJECT_HEAD)&op_ol
	},
	.pNextInCntn = (POBJECT_HEAD)&op_idx0,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//op_idx0 ------------------------------------------------------------------------

TEXT_FIELD op_idx0 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {297, 176, 89, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_BUTTON_3, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_num0, .pRoot = (POBJECT_HEAD)&op_item0
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[0]
};

//op_num0 ------------------------------------------------------------------------

TEXT_FIELD op_num0 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {387, 177, 111, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_name0, .pRoot = (POBJECT_HEAD)&op_item0
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[1]
};

//op_name0 ------------------------------------------------------------------------

TEXT_FIELD op_name0 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {503, 176, 171, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&op_item0
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[2]
};

//op_item1 ------------------------------------------------------------------------

CONTAINER op_item1 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 2, .bLeftID = 0, .bRightID = 0, .bUpID = 1, .bDownID = 3,
		.frame = {294, 207, 380, 33},
		.style = {
			.bShowIdx = WSTL_OP_OL, .bHLIdx = WSTL_BUTTON_3, .bSelIdx = WSTL_OP_OL, .bGrayIdx = WSTL_OP_OL
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_item2, .pRoot = (POBJECT_HEAD)&op_ol
	},
	.pNextInCntn = (POBJECT_HEAD)&op_idx1,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//op_idx1 ------------------------------------------------------------------------

TEXT_FIELD op_idx1 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {296, 208, 89, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_num1, .pRoot = (POBJECT_HEAD)&op_item1
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[3]
};

//op_num1 ------------------------------------------------------------------------

TEXT_FIELD op_num1 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {387, 208, 111, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_name1, .pRoot = (POBJECT_HEAD)&op_item1
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[4]
};

//op_name1 ------------------------------------------------------------------------

TEXT_FIELD op_name1 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {502, 208, 171, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&op_item1
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[5]
};

//op_item2 ------------------------------------------------------------------------

CONTAINER op_item2 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 3, .bLeftID = 0, .bRightID = 0, .bUpID = 2, .bDownID = 4,
		.frame = {294, 240, 380, 33},
		.style = {
			.bShowIdx = WSTL_OP_OL, .bHLIdx = WSTL_BUTTON_3, .bSelIdx = WSTL_OP_OL, .bGrayIdx = WSTL_OP_OL
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_item3, .pRoot = (POBJECT_HEAD)&op_ol
	},
	.pNextInCntn = (POBJECT_HEAD)&op_idx2,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//op_idx2 ------------------------------------------------------------------------

TEXT_FIELD op_idx2 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {296, 241, 89, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_num2, .pRoot = (POBJECT_HEAD)&op_item2
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[6]
};

//op_num2 ------------------------------------------------------------------------

TEXT_FIELD op_num2 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {387, 241, 111, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_name2, .pRoot = (POBJECT_HEAD)&op_item2
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[7]
};

//op_name2 ------------------------------------------------------------------------

TEXT_FIELD op_name2 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {502, 241, 171, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&op_item2
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[8]
};

//op_item3 ------------------------------------------------------------------------

CONTAINER op_item3 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 4, .bLeftID = 0, .bRightID = 0, .bUpID = 3, .bDownID = 5,
		.frame = {294, 273, 380, 33},
		.style = {
			.bShowIdx = WSTL_OP_OL, .bHLIdx = WSTL_BUTTON_3, .bSelIdx = WSTL_OP_OL, .bGrayIdx = WSTL_OP_OL
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_item4, .pRoot = (POBJECT_HEAD)&op_ol
	},
	.pNextInCntn = (POBJECT_HEAD)&op_idx3,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//op_idx3 ------------------------------------------------------------------------

TEXT_FIELD op_idx3 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {296, 274, 89, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_num3, .pRoot = (POBJECT_HEAD)&op_item3
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[9]
};

//op_num3 ------------------------------------------------------------------------

TEXT_FIELD op_num3 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {387, 274, 111, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_name3, .pRoot = (POBJECT_HEAD)&op_item3
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[10]
};

//op_name3 ------------------------------------------------------------------------

TEXT_FIELD op_name3 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {502, 274, 171, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&op_item3
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[11]
};

//op_item4 ------------------------------------------------------------------------

CONTAINER op_item4 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 5, .bLeftID = 0, .bRightID = 0, .bUpID = 4, .bDownID = 6,
		.frame = {294, 306, 380, 33},
		.style = {
			.bShowIdx = WSTL_OP_OL, .bHLIdx = WSTL_BUTTON_3, .bSelIdx = WSTL_OP_OL, .bGrayIdx = WSTL_OP_OL
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_item5, .pRoot = (POBJECT_HEAD)&op_ol
	},
	.pNextInCntn = (POBJECT_HEAD)&op_idx4,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//op_idx4 ------------------------------------------------------------------------

TEXT_FIELD op_idx4 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {296, 307, 89, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_num4, .pRoot = (POBJECT_HEAD)&op_item4
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[12]
};

//op_num4 ------------------------------------------------------------------------

TEXT_FIELD op_num4 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {387, 307, 111, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_name4, .pRoot = (POBJECT_HEAD)&op_item4
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[13]
};

//op_name4 ------------------------------------------------------------------------

TEXT_FIELD op_name4 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {502, 307, 171, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&op_item4
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[14]
};

//op_item5 ------------------------------------------------------------------------

CONTAINER op_item5 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 6, .bLeftID = 0, .bRightID = 0, .bUpID = 5, .bDownID = 7,
		.frame = {294, 339, 380, 33},
		.style = {
			.bShowIdx = WSTL_OP_OL, .bHLIdx = WSTL_BUTTON_3, .bSelIdx = WSTL_OP_OL, .bGrayIdx = WSTL_OP_OL
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_item6, .pRoot = (POBJECT_HEAD)&op_ol
	},
	.pNextInCntn = (POBJECT_HEAD)&op_idx5,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//op_idx5 ------------------------------------------------------------------------

TEXT_FIELD op_idx5 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {296, 340, 89, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_num5, .pRoot = (POBJECT_HEAD)&op_item5
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[15]
};

//op_num5 ------------------------------------------------------------------------

TEXT_FIELD op_num5 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {387, 340, 111, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_name5, .pRoot = (POBJECT_HEAD)&op_item5
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[16]
};

//op_name5 ------------------------------------------------------------------------

TEXT_FIELD op_name5 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {502, 340, 171, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&op_item5
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[17]
};

//op_item6 ------------------------------------------------------------------------

CONTAINER op_item6 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 7, .bLeftID = 0, .bRightID = 0, .bUpID = 6, .bDownID = 8,
		.frame = {294, 372, 380, 33},
		.style = {
			.bShowIdx = WSTL_OP_OL, .bHLIdx = WSTL_BUTTON_3, .bSelIdx = WSTL_OP_OL, .bGrayIdx = WSTL_OP_OL
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_item7, .pRoot = (POBJECT_HEAD)&op_ol
	},
	.pNextInCntn = (POBJECT_HEAD)&op_idx6,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//op_idx6 ------------------------------------------------------------------------

TEXT_FIELD op_idx6 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {296, 373, 89, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_num6, .pRoot = (POBJECT_HEAD)&op_item6
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[18]
};

//op_num6 ------------------------------------------------------------------------

TEXT_FIELD op_num6 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {387, 373, 111, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_name6, .pRoot = (POBJECT_HEAD)&op_item6
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[19]
};

//op_name6 ------------------------------------------------------------------------

TEXT_FIELD op_name6 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {502, 372, 171, 31},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&op_item6
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[20]
};

//op_item7 ------------------------------------------------------------------------

CONTAINER op_item7 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 8, .bLeftID = 0, .bRightID = 0, .bUpID = 7, .bDownID = 9,
		.frame = {294, 405, 380, 33},
		.style = {
			.bShowIdx = WSTL_OP_OL, .bHLIdx = WSTL_BUTTON_3, .bSelIdx = WSTL_OP_OL, .bGrayIdx = WSTL_OP_OL
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_item8, .pRoot = (POBJECT_HEAD)&op_ol
	},
	.pNextInCntn = (POBJECT_HEAD)&op_idx7,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//op_idx7 ------------------------------------------------------------------------

TEXT_FIELD op_idx7 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {296, 406, 89, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_num7, .pRoot = (POBJECT_HEAD)&op_item7
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[21]
};

//op_num7 ------------------------------------------------------------------------

TEXT_FIELD op_num7 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {387, 406, 111, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_name7, .pRoot = (POBJECT_HEAD)&op_item7
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[22]
};

//op_name7 ------------------------------------------------------------------------

TEXT_FIELD op_name7 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {502, 406, 171, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&op_item7
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[23]
};

//op_item8 ------------------------------------------------------------------------

CONTAINER op_item8 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 9, .bLeftID = 0, .bRightID = 0, .bUpID = 8, .bDownID = 10,
		.frame = {294, 438, 380, 33},
		.style = {
			.bShowIdx = WSTL_OP_OL, .bHLIdx = WSTL_BUTTON_3, .bSelIdx = WSTL_OP_OL, .bGrayIdx = WSTL_OP_OL
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_item9, .pRoot = (POBJECT_HEAD)&op_ol
	},
	.pNextInCntn = (POBJECT_HEAD)&op_idx8,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//op_idx8 ------------------------------------------------------------------------

TEXT_FIELD op_idx8 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {296, 439, 89, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_num8, .pRoot = (POBJECT_HEAD)&op_item8
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[24]
};

//op_num8 ------------------------------------------------------------------------

TEXT_FIELD op_num8 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {387, 439, 111, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_name8, .pRoot = (POBJECT_HEAD)&op_item8
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[25]
};

//op_name8 ------------------------------------------------------------------------

TEXT_FIELD op_name8 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {502, 439, 171, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&op_item8
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[26]
};

//op_item9 ------------------------------------------------------------------------

CONTAINER op_item9 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 10, .bLeftID = 0, .bRightID = 0, .bUpID = 9, .bDownID = 1,
		.frame = {294, 470, 380, 33},
		.style = {
			.bShowIdx = WSTL_OP_OL, .bHLIdx = WSTL_BUTTON_3, .bSelIdx = WSTL_OP_OL, .bGrayIdx = WSTL_OP_OL
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&op_ol
	},
	.pNextInCntn = (POBJECT_HEAD)&op_idx9,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//op_idx9 ------------------------------------------------------------------------

TEXT_FIELD op_idx9 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {296, 471, 89, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_num9, .pRoot = (POBJECT_HEAD)&op_item9
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[27]
};

//op_num9 ------------------------------------------------------------------------

TEXT_FIELD op_num9 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {387, 472, 111, 31},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&op_name9, .pRoot = (POBJECT_HEAD)&op_item9
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[28]
};

//op_name9 ------------------------------------------------------------------------

TEXT_FIELD op_name9 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {502, 470, 171, 29},
		.style = {
			.bShowIdx = WSTL_YU_OP_BLUE, .bHLIdx = WSTL_YU_OP_BLUE, .bSelIdx = WSTL_YU_OP_BLUE, .bGrayIdx = WSTL_YU_OP_BLUE
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&op_item9
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[29]
};

//txt_op_title ------------------------------------------------------------------------

TEXT_FIELD txt_op_title = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {326, 99, 122, 24},
		.style = {
			.bShowIdx = WSTL_TXT_5, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_5, .bGrayIdx = WSTL_TXT_5
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&txt_op_title1, .pRoot = (POBJECT_HEAD)&g_win_operator_message
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_OPERATOR_INFORMATION,
	.pString = NULL
};

//txt_op_title1 ------------------------------------------------------------------------

TEXT_FIELD txt_op_title1 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {303, 510, 112, 31},
		.style = {
			.bShowIdx = WSTL_YELLO_ITEM, .bHLIdx = WSTL_YELLO_ITEM, .bSelIdx = WSTL_YELLO_ITEM, .bGrayIdx = WSTL_YELLO_ITEM
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&txt_op_title2, .pRoot = (POBJECT_HEAD)&g_win_operator_message
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_CTI_BUTTON_CONFIRM,
	.pString = NULL
};

//txt_op_title2 ------------------------------------------------------------------------

TEXT_FIELD txt_op_title2 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {424, 510, 67, 31},
		.style = {
			.bShowIdx = 0, .bHLIdx = 0, .bSelIdx = 0, .bGrayIdx = 0
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&txt_op_title3, .pRoot = (POBJECT_HEAD)&g_win_operator_message
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_HELP_SELECT,
	.pString = NULL
};

//txt_op_title3 ------------------------------------------------------------------------

TEXT_FIELD txt_op_title3 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {500, 510, 112, 31},
		.style = {
			.bShowIdx = WSTL_HIGHT_EMIAL, .bHLIdx = WSTL_HIGHT_EMIAL, .bSelIdx = WSTL_HIGHT_EMIAL, .bGrayIdx = WSTL_HIGHT_EMIAL
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&txt_op_title4, .pRoot = (POBJECT_HEAD)&g_win_operator_message
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_HELP_EXIT,
	.pString = NULL
};

//txt_op_title4 ------------------------------------------------------------------------

TEXT_FIELD txt_op_title4 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {621, 510, 50, 31},
		.style = {
			.bShowIdx = 0, .bHLIdx = 0, .bSelIdx = 0, .bGrayIdx = 0
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&g_win_operator_message
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_HELP_BACK,
	.pString = NULL
};
#endif//__WIN_OPERATOR_MESSAGE_H__AC934D24_E9AB_4920_853E_FAAE4AD98B55
#endif
