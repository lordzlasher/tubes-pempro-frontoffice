//==============================================================================
//
// Title:		Front Office 
// Purpose:		A short description of the application.
//
// Created on:	12/9/2020 at 5:24:17 PM by surya darma.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

#include <ansi_c.h>
#include <cvirte.h>
#include <userint.h>
#include "Front Office 0.1.h"
#include "toolbox.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


static int panelHandle_2;

//==============================================================================
// Constants

//==============================================================================
// Types

//==============================================================================
// Static global variables

static int panelHandle = 0, panelHandle_2=0;

//==============================================================================
// Static functions

//==============================================================================
// Global variables

//==============================================================================
// Global functions

/// HIFN The main entry-point function.

int main (int argc, char *argv[])
{
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;	/* out of memory */
	if ((panelHandle = LoadPanel (0, "Front Office 0.1.uir", PANEL)) < 0)
		return -1;
	if((panelHandle_2 = LoadPanel (0, "Front Office 0.1.uir", PANEL_2)) < 0)
				return -1;
	
	DisplayPanel (panelHandle);
	
	RunUserInterface ();
	DiscardPanel (panelHandle);
	
	return 0;
}

//==============================================================================
// UI callback function prototypes

/// HIFN Exit when the user dismisses the panel.
int CVICALLBACK panelCB (int panel, int event, void *callbackData,
						 int eventData1, int eventData2)
{
	if (event == EVENT_CLOSE)
		QuitUserInterface (0);
	return 0;
}



//==============================================================================
// Fungsi LOGIN
int CVICALLBACK BtnLogin (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)

{
	
	char *u, *p;
	int length_u, length_p;
	
	switch (event)
	{
		
		case EVENT_COMMIT:
			GetCtrlAttribute (panelHandle, PANEL_STRING, ATTR_STRING_TEXT_LENGTH,  &length_u);
			u=malloc(sizeof(char)*(length_u+1));
			GetCtrlAttribute (panelHandle, PANEL_STRING_2, ATTR_STRING_TEXT_LENGTH, &length_p);
			p=malloc(sizeof(char)*(length_p+1));
			GetCtrlVal (panelHandle, PANEL_STRING, u);
			GetCtrlVal (panelHandle, PANEL_STRING_2, p);
			if(strcmp(u,"admin")==0 && strcmp(p, "12345")==0)
			{
				MessagePopup ("Login Berhasil", "Selamat Datang");
			DisplayPanel (panelHandle_2);
			}
			else
			{
				MessagePopup ("Login Gagal", "Cek Kembali Username Dan Password! ");
			}
			break;
		
			
			
			
		
	}
	return 0;
}


int CVICALLBACK PANEL2 (int panel, int event, void *callbackData,
						int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_GOT_FOCUS:

			break;
		case EVENT_LOST_FOCUS:

			break;
		case EVENT_CLOSE:
			QuitUserInterface (0);
			break;
	}
	return 0;
}

int CVICALLBACK cancel (int panel, int control, int event,
						void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			QuitUserInterface (0);
			break;
	}
	return 0;
}

int CVICALLBACK picture (int panel, int control, int event,
						 void *callbackData, int eventData1, int eventData2)
{
	DisplayImageFile (panelHandle, PANEL_PICTURE, "c:\\Users\\User\\Pictures\\Raptr Screenshots\\hotel-di-bali-ilustrasi-_150707154203-669.jpg");
	return 0;
}

int CVICALLBACK picture1 (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	DisplayImageFile (panelHandle_2, PANEL_2_PICTURE, "c:\\Users\\User\\Pictures\\Raptr Screenshots\\penginapan dan hotel di nias.jpg");
	return 0;
}

int CVICALLBACK BtnKeluar (int panel, int control, int event,
						   void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			QuitUserInterface (0);
			break;
	}
	return 0;
}

int CVICALLBACK picture2 (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	DisplayImageFile (panelHandle_2, PANEL_2_PICTURE_2, "c:\\Users\\User\\Pictures\\Raptr Screenshots\\bintang-bali-resort.jpg");
	return 0;
}

int CVICALLBACK picture3 (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	DisplayImageFile (panelHandle_2, PANEL_2_PICTURE_3, "c:\\Users\\User\\Pictures\\Raptr Screenshots\\download.jpg");
	return 0;
}
