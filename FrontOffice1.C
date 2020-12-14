#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//deklarasi fungsi selain main
int home();
int depan();
int login();
int loginAll();
int tentang();
int keluar();
int daftar();
int pemesanan();

//=============================================================================
// MAIN

int main(){

 depan(); //Fungsi yang pertama kali dijalankan pada saat Program dijalankan

 system("pause");
 return 0;
}

//=============================================================================
//DEPAN
int depan(){
 int menu;

 printf("================================================\n");
 printf(" Selamat Datang \n");
 printf("================================================\n\n");
 printf("1. Masuk\n");
 printf("2. Tentang\n");
 printf("3. Keluar\n");
 printf("Masukkan nomor menu yang anda inginkan : ");
 scanf("%d", &menu);
 system("cls"); // fungsi untuk menghapus layar (clearscreen). 

 switch (menu){
 case 1:
 loginAll(); // jika user memasukkan 1, makan menjalankan fungsi loginAll()
 break;
 case 2:
 tentang(); // jika user memasukkan 2, makan menjalankan fungsi tentangTamu()
 break;
 case 3:
 keluar(); // jika user memasukkan 3, makan menjalankan fungsi keluar()
 break; 
 default:
 printf("Nomor menu yang anda masukkan tidak ada\n");
 }
 return 0;
}

//=============================================================================
//LOGIN
int loginAll(){
 int menu;

 printf("================================================\n");
 printf(" Selamat Datang \n");
 printf("================================================\n\n");
 printf("Login sebagai : \n");
 printf("1. Admin\n");
 printf("2. Halaman Depan\n");
 printf("Masukkan menu pilihan anda : ");
 scanf("%d", &menu);
 system("cls");

 switch (menu){
 case 1:
 login();
 break;
 case 2:
 depan();
 break;
 default:
 printf("Nomor menu yang anda masukkan tidak ada\n");
 break;
 }
 return 0;
}

//=============================================================================
//TENTANG
int tentang(){
 int menu;

 printf("================================================\n");
 printf(" Tentang \n");
 printf("================================================\n\n");
 printf(" Aplikasi Front Office Hotel \n\n");
 printf(" Dibuat Oleh : \n");
 printf(" Kelompok 15 \n");
 printf(" Dengan NIM: (2005551063),(2005551040),(1404505040) \n");
 printf("================================================\n\n");
 printf("1. Menu Utama\n");
 printf("2. Keluar\n");
 printf("Masukkan nomor menu pilihan anda : ");
 scanf("%d", &menu);
 system("cls");

 switch (menu){
 case 1:
 depan();
 break;
 case 2:
 keluar();
 break;
 default:
 printf("Nomor menu yang anda masukkan tidak ada");
 break;
 }
 return 0;
}

//=============================================================================
//KELUAR
int keluar(){
 printf("================================================\n");
 printf(" Terima Kasih \n");
 printf(" Sampai Jumpa \n");
 printf("================================================\n");

 return 0;
}

int login(){
 char user[10],pass[10];

 printf("================================================\n");
 printf(" Selamat Datang \n");
 printf("================================================\n\n");

 printf("Masukkan Username : ");
 scanf("%s", &user);
 printf("Masukkan Password : ");
 scanf("%s", &pass);
 system("cls");

 if (strcmp(user, "admin")==0 && (pass, "admin")){ //membandingkan string user dgn username dan variabel pass dgn password
 home(); // jika berhasil login, menjalankan fungsi ini
 }
 else{
 printf("Username dan Password salah! \n");
 printf("============================");
 login();
 }
 return 0;
}

int home(){
 int menu;

 printf("================================================\n");
 printf(" Selamat Datang \n");
 printf("================================================\n\n");
 printf("Menu : \n");
 printf("1. Beranda\n");
 printf("2. Daftar Kamar\n");
 printf("3. Pemesanan\n");
 printf("4. Tentang\n");
 printf("5. Keluar\n");
 printf("Masukkan menu pilihan anda : ");
 scanf("%d", &menu);
 system("cls");

switch (menu){
 case 1:
 depan(); 
 break;
 case 2:
 daftar(); 
 break;
 case 3:
 pemesanan();
 break; 
 case 4:
 tentang();
 break;
 case 5:
 keluar();
 break;
 }
 return 0;
}

int daftar(){
int menu;
int harga1=100000;
int harga2=500000;
char jeniskamar[10]="Standard";
char jeniskamar2[10]="Luxury";
 printf("================================================\n");
 printf(" Daftar Kamar \n");
 printf("================================================\n\n");
 printf("Nomer Kamar | Jenis Kamar | Harga\n");
 printf("Kamar 101   | %s    | Rp.%d \n",jeniskamar, harga1);
 printf("Kamar 102   | %s    | Rp.%d \n",jeniskamar, harga1);
 printf("Kamar 103   | %s    | Rp.%d \n",jeniskamar, harga1);
 printf("Kamar 104   | %s      | Rp.%d \n",jeniskamar2, harga2);
 printf("Kamar 105   | %s      | Rp.%d \n\n",jeniskamar2, harga2);
 printf("================================================\n\n");
 printf("1. Menu Utama\n");
 printf("2. Keluar\n");
 printf("Masukkan nomor menu pilihan anda : ");
 scanf("%d", &menu);
 system("cls");

 switch (menu){
 case 1:
 home();
 break;
 case 2:
 keluar();
 break;
 default:
 printf("Nomor menu yang anda masukkan tidak ada");
 break;
 }
 return 0;
}

int pemesanan(){
int menu, nokamar, periode;
char jeniskamar[20];
 printf("================================================\n");
 printf(" Pemesanan Kamar \n");
 printf("================================================\n\n");
 printf("Masukan Nomer Kamar yang Dipesan	:");
 scanf("%d", &nokamar);
 printf("Jenis Kamar yang Dipesan	:");
 scanf("%s", &jeniskamar);
 printf("Berapa lama menginap	:");
 scanf("%d", &periode);
 
 return 0;
}
  