#include <iostream>
#include "loginsign.h"
#include "belanja.h"
#include "inventory.h"
#include "struct.h"
using namespace std;

//deklarasi function
void menu();
void assettanah();
void authmenu();
void assetmobil();
void signup();
bool login();
void beli();
void topup();
void inventory();

void menu()
{
    system("cls");
    cout<<"SELAMAT DATANG DI FINANCE SOLUTION"<<endl;
    cout<<garis<<endl;
    cout<<"Nama: "<<nama<<endl;
    cout<<"Token: "<<users[activeacc].token<<endl;
    cout<<garis<<endl;
    cout<<"1. Top Up token"<<endl;
    cout<<"2. Beli Asset"<<endl;
    cout<<"3. Inventory Asset"<<endl;
    cout<<"4. Keluar"<<endl;
    cout<<garis<<endl;
    cout<<"Silahkan tentukan pilihan anda (1-4): ";
    cin>>pil;
    switch (pil)
	{
    case 1:
        topup();
        break;
    case 2:
        beli();
        break;
    case 3:
        inventory();
        break;
    case 4:
        cout << "Keluar dari program. Terima kasih!"<<endl;
        system("cls");
        authmenu(); 
        break;
    default:
        cout << "Pilihan tidak valid"<<endl;
    }
}

void authmenu()
{
    int pil;
    cout<<"SELAMAT DATANG DI FINANCE SOLUTION"<<endl;
    cout<<garis<<endl;
    cout<<"1. Login"<<endl;
    cout<<"2. Sign Up"<<endl;
    cout<<garis<<endl;
    cout<<"Silahkan pilih opsi: ";
    cin>>pil;
    switch (pil)
	{
    case 1:
        if (usercount > 0)
		{
			system("cls");
            if (login())
			{
                menu();
            }
        }
        else
		{
        	system("cls");
            cout<<"Belum ada pengguna. Silakan Sign Up terlebih dahulu"<<endl;
            authmenu();
        }
        break;
    case 2:
    	system("cls");
        signup();
        cout<<"Sekarang, silakan login dengan akun Anda"<<endl;
        authmenu(); 
        break;
    default:
        cout<<"Pilihan tidak valid. Program akan keluar"<<endl;
        exit(0);
    }
}

int main() {
    authmenu();  // Panggil menu login/sign up sebelum masuk ke program utama
    return 0;
}
