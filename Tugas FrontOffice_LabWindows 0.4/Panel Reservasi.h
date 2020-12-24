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
#define  PANEL_4_TABLE                    3       /* control type: table, callback function: PANEL_TABLE */
#define  PANEL_4_STRING_2                 4       /* control type: string, callback function: (none) */
#define  PANEL_4_STRING                   5       /* control type: string, callback function: (none) */
#define  PANEL_4_KodBO                    6       /* control type: textMsg, callback function: (none) */
#define  PANEL_4_NamaTamu                 7       /* control type: textMsg, callback function: (none) */
#define  PANEL_4_TEXTMSG_2                8       /* control type: textMsg, callback function: (none) */
#define  PANEL_4_TEXTMSG_3                9       /* control type: textMsg, callback function: (none) */
#define  PANEL_4_TEXTMSG_4                10      /* control type: textMsg, callback function: (none) */
#define  PANEL_4_BtnHitung                11      /* control type: command, callback function: BtnHitung */
#define  PANEL_4_BtnKembali               12      /* control type: command, callback function: BtnKembali */
#define  PANEL_4_BtnAdd                   13      /* control type: command, callback function: BtnAdd */
#define  PANEL_4_TEXTMSG_5                14      /* control type: textMsg, callback function: (none) */
#define  PANEL_4_PICTURE                  15      /* control type: picture, callback function: picture_reservasi */
#define  PANEL_4_STRING_4                 16      /* control type: string, callback function: (none) */
#define  PANEL_4_STRING_7                 17      /* control type: string, callback function: (none) */
#define  PANEL_4_STRING_5                 18      /* control type: string, callback function: (none) */
#define  PANEL_4_STRING_6                 19      /* control type: string, callback function: (none) */
#define  PANEL_4_STRING_3                 20      /* control type: string, callback function: (none) */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK BtnAdd(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK BtnHitung(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK BtnKembali(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK combo(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK PANEL_TABLE(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK PanelRs(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK picture_reservasi(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif