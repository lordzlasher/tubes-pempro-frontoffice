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
#define  PANEL_5_TABLE_1                  2       /* control type: table, callback function: (none) */
#define  PANEL_5_COMMANDBUTTON            3       /* control type: command, callback function: buton */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK buton(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK PanelPb(int panel, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif