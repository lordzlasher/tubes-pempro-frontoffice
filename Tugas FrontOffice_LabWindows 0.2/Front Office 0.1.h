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

#define  PANEL                            1       /* callback function: panelCB */
#define  PANEL_TEXTMSG                    2       /* control type: textMsg, callback function: (none) */
#define  PANEL_STRING_2                   3       /* control type: string, callback function: (none) */
#define  PANEL_STRING                     4       /* control type: string, callback function: (none) */
#define  PANEL_BtnCancel                  5       /* control type: command, callback function: cancel */
#define  PANEL_BtnLogin                   6       /* control type: command, callback function: BtnLogin */
#define  PANEL_TEXTMSG_2                  7       /* control type: textMsg, callback function: (none) */

#define  PANEL_2                          2       /* callback function: PANEL2 */
#define  PANEL_2_STRING                   2       /* control type: string, callback function: (none) */


     /* Control Arrays: */

#define  CTRLARRAY                        1

     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK BtnLogin(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK cancel(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK PANEL2(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK panelCB(int panel, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif