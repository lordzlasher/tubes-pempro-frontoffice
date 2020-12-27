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

#define  PANEL_5                          1       /* callback function: PanelPb */
#define  PANEL_5_DECORATION               2       /* control type: deco, callback function: (none) */
#define  PANEL_5_DECORATION_2             3       /* control type: deco, callback function: (none) */
#define  PANEL_5_DECORATION_3             4       /* control type: deco, callback function: (none) */
#define  PANEL_5_STRING_4                 5       /* control type: string, callback function: (none) */
#define  PANEL_5_STRING_3                 6       /* control type: string, callback function: (none) */
#define  PANEL_5_STRING_8                 7       /* control type: string, callback function: (none) */
#define  PANEL_5_STRING_2                 8       /* control type: string, callback function: (none) */
#define  PANEL_5_STRING_9                 9       /* control type: string, callback function: (none) */
#define  PANEL_5_STRING_7                 10      /* control type: string, callback function: (none) */
#define  PANEL_5_STRING_6                 11      /* control type: string, callback function: (none) */
#define  PANEL_5_STRING                   12      /* control type: string, callback function: (none) */
#define  PANEL_5_TEXTMSG_2                13      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_TEXTMSG_4                14      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_TEXTMSG_6                15      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_TEXTMSG_3                16      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_TEXTMSG_8                17      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_TEXTMSG_7                18      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_PICTURE                  19      /* control type: picture, callback function: (none) */
#define  PANEL_5_TEXTMSG                  20      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_DECORATION_4             21      /* control type: deco, callback function: (none) */
#define  PANEL_5_COMMANDBUTTON_2          22      /* control type: command, callback function: cari */
#define  PANEL_5_COMMANDBUTTON_3          23      /* control type: command, callback function: kembali */
#define  PANEL_5_COMMANDBUTTON            24      /* control type: command, callback function: print */
#define  PANEL_5_TEXTMSG_13               25      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_TEXTMSG_10               26      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_TEXTMSG_9                27      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_TEXTMSG_12               28      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_TEXTMSG_11               29      /* control type: textMsg, callback function: (none) */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK cari(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK kembali(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK PanelPb(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK print(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif