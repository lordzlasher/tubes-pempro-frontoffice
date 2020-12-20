/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/*                                                                        */
/* WARNING: Do not add to, delete from, or otherwise modify the contents  */
/*          of this include file.                                         */
/**************************************************************************/

#include <userint.h>

#ifdef __cplusplus
    extern "C" {
#endif

     /* Panels and Controls: */

#define  PANEL_4                          1       /* callback function: PanelRs */
#define  PANEL_4_COMBO                    2       /* control type: string, callback function: combo */
#define  PANEL_4_TEXTBOX_3                3       /* control type: textBox, callback function: (none) */
#define  PANEL_4_TEXTBOX_5                4       /* control type: textBox, callback function: (none) */
#define  PANEL_4_TEXTBOX_2                5       /* control type: textBox, callback function: (none) */
#define  PANEL_4_TEXTBOX_4                6       /* control type: textBox, callback function: (none) */
#define  PANEL_4_TEXTBOX                  7       /* control type: textBox, callback function: (none) */
#define  PANEL_4_STRING_2                 8       /* control type: string, callback function: (none) */
#define  PANEL_4_STRING                   9       /* control type: string, callback function: (none) */
#define  PANEL_4_PICTURE                  10      /* control type: picture, callback function: (none) */
#define  PANEL_4_KodBO                    11      /* control type: textMsg, callback function: (none) */
#define  PANEL_4_NamaTamu                 12      /* control type: textMsg, callback function: (none) */
#define  PANEL_4_TEXTMSG_2                13      /* control type: textMsg, callback function: (none) */
#define  PANEL_4_TEXTMSG_3                14      /* control type: textMsg, callback function: (none) */
#define  PANEL_4_TEXTMSG_4                15      /* control type: textMsg, callback function: (none) */
#define  PANEL_4_BtnHitung                16      /* control type: command, callback function: (none) */
#define  PANEL_4_BtnKembali               17      /* control type: command, callback function: (none) */
#define  PANEL_4_BtnClear                 18      /* control type: command, callback function: (none) */
#define  PANEL_4_BtnAdd                   19      /* control type: command, callback function: (none) */
#define  PANEL_4_LISTBOX                  20      /* control type: listBox, callback function: (none) */
#define  PANEL_4_TEXTMSG_5                21      /* control type: textMsg, callback function: (none) */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK combo(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK PanelRs(int panel, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif