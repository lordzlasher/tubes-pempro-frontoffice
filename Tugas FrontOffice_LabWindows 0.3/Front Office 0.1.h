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
#define  PANEL_PICTURE                    8       /* control type: picture, callback function: picture */

#define  PANEL_2                          2       /* callback function: PANEL2 */
#define  PANEL_2_COMMANDBUTTON_4          2       /* control type: command, callback function: BtnKeluar */
#define  PANEL_2_COMMANDBUTTON_3          3       /* control type: command, callback function: BtnPembayaran */
#define  PANEL_2_COMMANDBUTTON_2          4       /* control type: command, callback function: BtnReservasi */
#define  PANEL_2_COMMANDBUTTON            5       /* control type: command, callback function: BtnDatakamar */
#define  PANEL_2_PICTURE_2                6       /* control type: picture, callback function: picture2 */
#define  PANEL_2_PICTURE                  7       /* control type: picture, callback function: picture1 */
#define  PANEL_2_PICTURE_3                8       /* control type: picture, callback function: picture3 */


     /* Control Arrays: */

#define  CTRLARRAY                        1

     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK BtnDatakamar(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK BtnKeluar(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK BtnLogin(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK BtnPembayaran(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK BtnReservasi(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK cancel(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK PANEL2(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK panelCB(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK picture(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK picture1(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK picture2(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK picture3(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif