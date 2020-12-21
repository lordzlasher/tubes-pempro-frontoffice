



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
#include "Panel Data Kamar.h"
#include "Panel Reservasi.h"
#include "combobox.h"
#include <formatio.h>
#include "Panel Pembayaran.h"




//==============================================================================
// Constants

//==============================================================================
// Types

//==============================================================================
// Static global variables

static int panelHandle = 0, panelHandle_2=0, panelHandle_3 = 0, panelHandle_4 = 0, panelHandle_5 = 0;
void InputComboValues (int panel, int control);
int a=6;
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
	if ((panelHandle_2 = LoadPanel (0, "Front Office 0.1.uir", PANEL_2)) < 0)
		return -1;
	if ((panelHandle_3 = LoadPanel (0, "Panel Data Kamar.uir", PANEL_3)) < 0)
		return -1;
	if ((panelHandle_4 = LoadPanel (0, "Panel Reservasi.uir", PANEL_4)) < 0)
		return -1;
	if ((panelHandle_5 = LoadPanel (0, "Panel Pembayaran.uir", PANEL_5)) < 0)
		return -1;

	
	DisplayPanel (panelHandle);
	
	Combo_NewComboBox (panelHandle_4, PANEL_4_COMBO);
	InputComboValues (panelHandle_4, PANEL_4_COMBO);
	RunUserInterface ();
	Combo_DiscardComboBox (panelHandle_4, PANEL_4_COMBO);
	DiscardPanel (panelHandle);
	
	return 0;
}

//==============================================================================
// UI callback function prototypes
void InputComboValues (int panel, int control)
{
	Combo_InsertComboItem (panel, control, -1, "PCI-1200");
	Combo_InsertComboItem (panel, control, -1, "PCI-6023E");
	Combo_InsertComboItem (panel, control, -1, "PCI-12345");
	
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

int CVICALLBACK PANEL2 (int panel, int event, void *callbackData,
						int eventData1, int eventData2)
{
	if (event == EVENT_CLOSE)
		QuitUserInterface (0);
	return 0;
}

int CVICALLBACK PanelDK (int panel, int event, void *callbackData,
						int eventData1, int eventData2)
{
	if (event == EVENT_CLOSE)
		QuitUserInterface (0);
	return 0;
}

int CVICALLBACK PanelRs (int panel, int event, void *callbackData,
						int eventData1, int eventData2)
{
	if (event == EVENT_CLOSE)
		QuitUserInterface (0);
	return 0;
}

int CVICALLBACK PanelPb (int panel, int event, void *callbackData,
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


//==============================================================================
//fungsi keluar pada tombol cancel dan tombol keluar
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


//==============================================================================
//Fungsi Untuk Menampilkann Gambar

int CVICALLBACK picture (int panel, int control, int event,
						 void *callbackData, int eventData1, int eventData2)
{
	return 0;
}

int CVICALLBACK picture1 (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	return 0;
}



int CVICALLBACK picture2 (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	return 0;
}

int CVICALLBACK picture3 (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	return 0;
}


//==============================================================================
//Fungsi Tombol Pada Main Menu
int CVICALLBACK BtnDatakamar (int panel, int control, int event,
							  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			DisplayPanel (panelHandle_3);
			RunUserInterface ();
			
			break;
	}
	return 0;
}


int CVICALLBACK BtnReservasi (int panel, int control, int event,
							  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			DisplayPanel (panelHandle_4);
			RunUserInterface ();
			break;
	}
	return 0;
}

int CVICALLBACK BtnPembayaran (int panel, int control, int event,
							   void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			DisplayPanel (panelHandle_5);
			RunUserInterface ();
			break;
	}
	return 0;
}

int CVICALLBACK combo (int panel, int control, int event,
					   void *callbackData, int eventData1, int eventData2)
{
	char *value;
	int  length;
	
	switch (event)
	{
		case EVENT_COMMIT:
			GetCtrlAttribute (panel, control, ATTR_STRING_TEXT_LENGTH, &length);
			value = (char *)malloc(length+1);
			StringUpperCase (value);
			if (strcmp (value, "PCI-1200") == 0)
			{
				InsertTextBoxLine (panelHandle_4, PANEL_4_TEXTBOX, 0, "hallo");
			}
			else if (strcmp (value, "PCI-6023E") == 0)
			{
				InsertTextBoxLine (panelHandle_4, PANEL_4_TEXTBOX_2, 0, "kntl");
			}
			else if (strcmp (value, "PCI-12345") == 0)
			{
				InsertTextBoxLine (panelHandle_4, PANEL_4_TEXTBOX_3, 0, "world");
			}
			free(value);
			break;
	}
	return 0;
}


//==============================================================================
//Fungsi Tombol Pada Menu Daftar Kamar

int CVICALLBACK NoKamar (int panel, int control, int event,
						 void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:

			break;
	}
	return 0;
}

int CVICALLBACK JenisKamar (int panel, int control, int event,
							void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:

			break;
	}
	return 0;
}

int CVICALLBACK Fasilitas (int panel, int control, int event,
						   void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:

			break;
	}
	return 0;
}

int CVICALLBACK TarifKamar (int panel, int control, int event,
							void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:

			break;
	}
	return 0;
}

int CVICALLBACK BTNTambah (int panel, int control, int event,
void *callbackData, int eventData1, int eventData2)
{
char NoKamar[5], JenisKamar[10], Fasilitas[100], TarifKamar[20];
switch (event)
{
case EVENT_COMMIT:
	GetCtrlVal (panelHandle_3, PANEL_3_STRING, NoKamar);
	SetTableCellVal (panelHandle_3, PANEL_3_TABLE, MakePoint(1,a), NoKamar);
	
	GetCtrlVal (panelHandle_3, PANEL_3_STRING_2, JenisKamar);
	SetTableCellVal (panelHandle_3, PANEL_3_TABLE, MakePoint(2,a), JenisKamar);
	
	GetCtrlVal (panelHandle_3, PANEL_3_STRING_3, Fasilitas);
	SetTableCellVal (panelHandle_3, PANEL_3_TABLE, MakePoint(3,a), Fasilitas);
	
	GetCtrlVal (panelHandle_3, PANEL_3_STRING_4, TarifKamar);
	SetTableCellVal (panelHandle_3, PANEL_3_TABLE, MakePoint(4,a), TarifKamar);
	++a;
	MessagePopup ("Daftar Kamar", "Data berhasil dimasukan!");
	
break;
}
return 0;
}

int CVICALLBACK PANEL_TABLE (int panel, int control, int event,
							 void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:

			break;
	}
	return 0;
}

int CVICALLBACK BTNBack (int panel, int control, int event,
						 void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			DisplayPanel (panelHandle_2);
			QuitUserInterface (0);
			break;
	}
	return 0;
}
