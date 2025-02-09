#pragma once
#include <iostream>
#include "struct.h"
using namespace std;

//deklarasi function
void menu();
void assettanah();
void assetmobil();

//top up
void topup() {
    char confirm;
    do
	{
        system("cls");
        cout<<"TOP UP TOKEN"<<endl;
        cout<<garis<<endl;
        cout<<"Silahkan input nominal token yang diinginkan: ";
        cin>>nominal;
        cout<<"Apakah anda ingin top up "<<nominal<<" (y/n)? ";
        cin>>confirm;
        if(confirm == 'y' || confirm == 'Y')
		{
            system("cls");
            cout<<"Top up berhasil! Token anda sekarang: "<<nominal<<endl;
       		users[activeacc].token+=nominal;
        }
        else {
            system("cls");
            cout<<"Top up dibatalkan."<<endl;
        }
        cout<<garis<<endl;
        cout<<"Apakah ingin melanjutkan top up (y/n)? ";
        cin>>confirm;
    }
	while (confirm == 'y' || confirm == 'Y');
    menu();
}

//pemilihan asset
void beli(){
	int pilasset;
	system("cls");
	cout<<"Silahkan Pilih Aset Yang Ingin Anda Beli!"<<endl;
	cout<<garis<<endl;
	cout<<"1. Tanah"<<endl;
	cout<<"2. Mobil"<<endl;
	cout<<garis<<endl;
	cout<<"Silahkan Tentukan Pilihan Anda (1-3): ";
	cin>>pilasset;
	switch(pilasset)
	{
	case 1:
		assettanah();
		break;
	case 2:
		assetmobil();
		break;
	case 3:
		cout<<"Belum Tersedia"<<endl;
		break;
	}	
}

//pembelian asset tanah
void assettanah() {
	char confirm, confirm2, confirm3;
	int biaya, tanah;
		system("cls");
		cout<<"Pembelian Aset Tanah!"<<endl;
		cout<<garis<<endl;
		cout<<"Silahkan Masukkan Berapa Banyak Hektar Tanah Yang Ingin Dibeli (1 Hektar = 10000 Token): ";
		cin>>tanah;
		if(tanah <= 0)
		{
			cout<<"Jumlah Hektar Tanah Harus Lebih Dari 0"<<endl;
			cout<<garis << endl;
			cout<<"Kembali Ke Opsi Pembelian Aset (y/n)? "; cin >> confirm2;
			if(confirm2 == 'y' || confirm2 == 'y')
			{
				beli();
			} 
			else
			{
				menu();	
			}
		}
		biaya = tanah * 10000;
		
		if(biaya > users[activeacc].token)
		{
			cout<<"Maaf, Token Anda Tidak Cukup. Apakah Anda Ingin Mengisi Token Lagi (y/n)? ";
			cin>>confirm3;
			if(confirm3 == 'y' || confirm3 == 'y')
			{
				topup();
			}
			else
			{
				menu();
			}
		}
		cout<<"Apakah Anda Ingin Membeli Tanah Sebanyak "<<tanah<<" Hektar (y/n)? ";
		cin>>confirm;
		if(confirm == 'y' || confirm == 'Y')
		{
    		users[activeacc].token-=biaya; 
    		users[activeacc].tanah+=tanah;
    		cout<<garis<<endl;
    		cout<<"Pembelian Aset Tanah Berhasil!"<<endl;
        }
		else
		{
        	cout<<"Pembelian Aset Tanah Dibatalkan"<<endl;
		}
	system("pause"); //Sebuah kode untuk press any key to continue
	menu();
}

//proses pembelian mobil
void belimobil(int jmlhmobil, int hm, int jnsmobil)
{
	char confirm1, confirm2, confirm3;
	int biaya=jmlhmobil*hm;
	
	if(jmlhmobil<= 0)
	{
		cout<<"Jumlah Banyaknya Mobil Harus Lebih Dari 0"<<endl;
		cout<<garis<<endl;
		cout<<"Kembali Ke Opsi Pembelian Aset (y/n)? ";
		cin>>confirm1;
		if(confirm1 == 'y' || confirm1 == 'Y')
		{
			beli();
		}
		else
		{
			menu();	
		}
	}
	
	if (biaya > users[activeacc].token)
	{
		cout<<"Maaf, Token Anda Tidak Cukup. Apakah Anda Ingin Mengisi Token Lagi (y/n)? ";
		cin>>confirm2;
		if(confirm2 == 'y' || confirm2 == 'Y')
		{
			topup();
		}
		else
		{
			menu();
		}
	}
	cout<<"Apakah Anda Ingin Membeli Mobil Sebanyak " <<jmlhmobil<<" Unit (y/n)? ";
	cin>>confirm3;
	if(confirm3 == 'y' || confirm3 == 'Y')
	{
 	  	users[activeacc].token -= biaya;
 	  	users[activeacc].jmlhcar[jnsmobil]+=jmlhmobil;
 	  	
    	cout<<"Pembelian Aset Mobil Berhasil!"<<endl;
    	
	}
	else
	{
      	cout<<"Pembelian Aset Mobil Dibatalkan"<<endl;
	}
	system("pause");
	menu();
}

//daftar mobil
void assetmobil()
{
	int biaya, pilmobil, jmlhmobil, hm;
	
	system("cls");
	cout<<"Pembelian Aset Mobil!"<<endl;
	cout<<garis<<endl;
	cout<<"Silahkan Pilih Mobil Yang Ingin Anda Beli!"<<endl;
	cout<<"1. Nissan (7000)"<<endl;
	cout<<"2. Toyota (5000)"<<endl;
	cout<<"3. Daihatsu (4000)"<<endl;
	cout<<garis<<endl;
	cout<<"Silahkan Tentukan Pilihan Anda (1-3): ";
	cin>>pilmobil;
	switch(pilmobil)
	{
	case 1:
		hm=hrgmobil[0];
		cout<<"Silahkan Masukkan Berapa Banyak Mobil Nissan Yang Ingin Dibeli (1 Mobil Nissan = 7000 Token): ";
		cin>>jmlhmobil;
		belimobil(jmlhmobil, hm, 0);
		break;
	case 2:
		hm=hrgmobil[1];
		cout<<"Silahkan Masukkan Berapa Banyak Mobil Toyota Yang Ingin Dibeli (1 Mobil Toyota = 5000 Token): ";
		cin>>jmlhmobil;
		belimobil(jmlhmobil, hm, 1);
		break;
		
	case 3:
		hm=hrgmobil[2];
		cout<<"Silahkan Masukkan Berapa Banyak Mobil Daihatsu Yang Ingin Dibeli (1 Mobil Daihatsu = 4000 Token): ";
		cin>>jmlhmobil;
		belimobil(jmlhmobil, hm, 2);
		break;
		
	default:
		cout<<"Pilihan Tidak Valid"<<endl;
	}
}
