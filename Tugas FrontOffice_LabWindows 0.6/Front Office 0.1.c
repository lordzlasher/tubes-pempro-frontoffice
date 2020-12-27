



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

#include "nivision.h"
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
int n=1;
int m=1;
int a=7;

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
	
	Combo_NewComboBox (panelHandle_3, PANEL_3_COMBO);
	InputComboValues (panelHandle_3, PANEL_3_COMBO);
	
	RunUserInterface ();
	
	Combo_DiscardComboBox (panelHandle_4, PANEL_4_COMBO);
	Combo_DiscardComboBox (panelHandle_3, PANEL_3_COMBO);
	DiscardPanel (panelHandle);
	
	return 0;
}

//==============================================================================
// UI callback function prototypes
void InputComboValues (int panel, int control)
{
	Combo_InsertComboItem (panel, control, -1, "STANDAR");
	Combo_InsertComboItem (panel, control, -1, "VIP");
	Combo_InsertComboItem (panel, control, -1, "VVIP");
	
	
	
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

//===========================PANEL LOGIN==============================
//======================================================================
//======================Fungsi Dalam Panel Login=========================
//=========Dibuat I Putu Gede Suryadharma Adhi Natha (2005551063)=======
//=====================================================================

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

//============================Menambah Gambar=========================
//======================================================================
//================Fungsi Menampilkan Gambar Dalam Panel =================
//===========Dibuat Oleh Putu Yoga Pramana Putra (2005551040)============
//=========Dibuat I Putu Gede Suryadharma Adhi Natha (2005551063)=======
//====================================================================

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

int CVICALLBACK picture_reservasi (int panel, int control, int event,
								   void *callbackData, int eventData1, int eventData2)
{
	return 0;
}


//=========================PANEL Main Menu===========================
//======================================================================
//===================Fungsi Dalam Panel Main Menu========================
//======Dibuat Oleh I Putu Gede Suryadharma Adhi Natha(2005551063)========
//=======================================================================
//====================================================================
int CVICALLBACK BtnDatakamar (int panel, int control, int event,
							  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			HidePanel (panelHandle_2);
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
			HidePanel (panelHandle_2);
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

//=========================PANEL DATA KAMAR===========================
//======================================================================
//===================Fungsi Dalam Panel DATA KAMAR========================
//============Dibuat Oleh Putu Yoga Pramana Putra (2005551040)=============
//=======================================================================
//====================================================================

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

char NoKamar[50], JenisKamar[50], Fasilitas[100], TarifKamar[100];
switch (event)
{
case EVENT_COMMIT:
	GetCtrlVal (panelHandle_3, PANEL_3_STRING, NoKamar);
	SetTableCellVal (panelHandle_3, PANEL_3_TABLE, MakePoint(1,a), NoKamar);
	
	GetCtrlVal (panelHandle_3, PANEL_3_COMBO, JenisKamar);
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

//=========================PANEL DATA KAMAR==============================
//=======================================================================
//=========Fungsi Membuat Drop Down List Pada Panel Data Kamar ==========
//======Dibuat Oleh  Putu Yoga Pramana Putra(2005551040)=================
//=======================================================================
//=======================================================================
int CVICALLBACK ComboJenisKamar (int panel, int control, int event,
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
			if (strcmp (value, "STANDAR") == 0)
			{
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_3, "TV, AC, Lemari");
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_4, "Rp. 200000");
				
			}
			else if (strcmp (value, "VIP") == 0)
			{
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_3, "Double Bed, TV, AC, Lemari");
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_4, "Rp. 350000");
			}
			else if (strcmp (value, "VVIP") == 0)
			{
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_3, "Double Bed,Playstation 5, TV, AC, Lemari");
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_4, "Rp. 500000");
			}
			free(value);
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
			HidePanel (panelHandle_3);
			DisplayPanel (panelHandle_2);
			QuitUserInterface (0);
			break;
	}
	return 0;
}

//=========================PANEL RESERVASI===========================
//======================================================================
//=========Fungsi Menambah Data Ke Table Pada Panel RESERVASI=============
//======Dibuat Oleh I Putu Gede Suryadharma Adhi Natha(2005551063)=========
//Dibantu Oleh I Putu Ngurah Krisna Dana(2005551084) Kelas Pemrograman F===
//=======================================================================
//====================================================================

int CVICALLBACK BtnAdd (int panel, int control, int event,
						void *callbackData, int eventData1, int eventData2)
{
	char KodeBok[50],namapmsn[100],class[50],NoKmr[50],Fasilitas[100],Tarif[100],LamaInap[30];
	

	switch (event)
	{
		
		case EVENT_COMMIT:

		for(int i=m;i<=n;){
	
			GetCtrlVal (panelHandle_4, PANEL_4_STRING, KodeBok);
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(1,i), KodeBok);
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_2, namapmsn);
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(2,i), namapmsn);
			
			GetCtrlVal (panelHandle_4, PANEL_4_COMBO, class);
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(3,i), class);
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_4, NoKmr);
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(4,i), NoKmr);
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_5, Fasilitas);
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(5,i), Fasilitas);
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_6, Tarif);
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(6,i), Tarif);
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_3, LamaInap);
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(7,i), LamaInap);
			MessagePopup ("Reservasi", "Data berhasil dimasukan!");
			m++;
			n++;
			break;
		}
		
	}
	return 0;
	
}

int CVICALLBACK BtnHitung (int panel, int control, int event,
						   void *callbackData, int eventData1, int eventData2)
{
	char a[20],b[10];
	int nilai1,nilai2,nilai3;

	
	switch (event)
	{
		case EVENT_COMMIT:
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_6, a);
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_3, b);
			nilai1 = atoi(a);//konversi nilai dari char ke int
			nilai2 = atoi(b);//konversi nilai dari char ke int
			nilai3 = (nilai1*nilai2);
			
			
			SetCtrlVal (panelHandle_4, PANEL_4_NUMERIC, nilai3);
			break;
	}
	return 0;
}

int CVICALLBACK BtnKembali (int panel, int control, int event,
							void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			HidePanel (panelHandle_4);
			DisplayPanel (panelHandle_2);
			QuitUserInterface(0);
			break;
	}
	return 0;
}

//=========================PANEL RESERVASI===========================
//======================================================================
//=========Fungsi Membuat Drop Down List Pada Panel RESERVASI=============
//======Dibuat Oleh I Putu Gede Suryadharma Adhi Natha(2005551063)=========
//=======================================================================
//====================================================================
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
			if (strcmp (value, "STANDAR") == 0)
			{
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_4, "101");
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_5, "TV, AC, Lemari");
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_6, "200000");
				
				
			}
			else if (strcmp (value, "VIP") == 0)
			{
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_4, "104");
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_5, "Double Bed, TV, AC, Lemari");
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_6, "350000");
			}
			else if (strcmp (value, "VVIP") == 0)
			{
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_4, "106");
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_5, "Double Bed, Playstation 5, TV, AC, Lemari");
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_6, "500000");
			}
			free(value);
			break;
	}
	return 0;
}




//=========================PANEL PEMBAYARAN===========================
//======================================================================
//=========Fungsi Membuat Print Kuitansi Pada Panel PEMBAYARAN=============
//======Dibuat Oleh I Putu Gede Suryadharma Adhi Natha(2005551063)=========
//=======================================================================
//====================================================================
int CVICALLBACK print (int panel, int control, int event,
					   void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			
			SetWaitCursor (1);
			PrintPanel (panelHandle_5, "", 1, VAL_FULL_PANEL, 1);
			SetWaitCursor (0);
			break;
	}
	return 0;
}

//=========================PANEL PEMBAYARAN===========================
//======================================================================
//=========Fungsi Membuat Menambahkan Data Pada Panel PEMBAYARAN=============
//======Dibuat Oleh "                                           "=========
//=======================================================================
//====================================================================
/*Ni ga nanti coding di tombol cari nya ni ,ambil data dari panel reservasi 
pake getctrlval sama setctrlval tu yang di no booking tu diemin jangan diisi
*/
int CVICALLBACK cari (int panel, int control, int event,
					  void *callbackData, int eventData1, int eventData2)
{
	
	switch (event)
	{
		case EVENT_COMMIT:
			
			
			break;
	}
	return 0;
}

//=========================PANEL PEMBAYARAN===========================
//======================================================================
//=========Fungsi Membuat Print Kuitansi Pada Panel PEMBAYARAN=============
//======Dibuat Oleh I Putu Gede Suryadharma Adhi Natha(2005551063)=========
//=======================================================================
//====================================================================

int CVICALLBACK kembali (int panel, int control, int event,
						 void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			HidePanel (panelHandle_5);
			DisplayPanel (panelHandle_2);
			QuitUserInterface(0);

			break;
	}
	return 0;
}
