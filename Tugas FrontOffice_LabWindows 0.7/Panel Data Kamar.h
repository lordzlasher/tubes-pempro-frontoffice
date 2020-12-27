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

#define  PANEL_3                          1       /* callback function: PanelDK */
#define  PANEL_3_COMMANDBUTTON            2       /* control type: command, callback function: BTNBack */
#define  PANEL_3_STRING                   3       /* control type: string, callback function: NoKamar */
#define  PANEL_3_STRING_3                 4       /* control type: string, callback function: Fasilitas */
#define  PANEL_3_STRING_4                 5       /* control type: string, callback function: TarifKamar */
#define  PANEL_3_COMMANDBUTTON_2          6       /* control type: command, callback function: BTNTambah */
#define  PANEL_3_TABLE                    7       /* control type: table, callback function: PANEL_TABLE */
#define  PANEL_3_PICTURE                  8       /* control type: picture, callback function: (none) */
#define  PANEL_3_COMBO                    9       /* control type: string, callback function: ComboJenisKamar */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK BTNBack(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK BTNTambah(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK ComboJenisKamar(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Fasilitas(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK NoKamar(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK PANEL_TABLE(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK PanelDK(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK TarifKamar(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif