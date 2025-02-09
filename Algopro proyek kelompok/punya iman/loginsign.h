#pragma once
#include <iostream>
#include "struct.h"
using namespace std;

//deklarasi function
void signup();
void authmenu();

bool login()
{
	string username, password;
	char pil;
	
	do
	{
		cin.ignore();
	    cout<<"Masukkan username: ";
	    getline(cin,username);
	    cout<<"Masukkan password: ";
	    cin>>password;
	
	    for(int i=0;i<usercount;i++)
		{
	        if (users[i].username == username && users[i].password == password)
			{
	            nama = username;  // Set nama pengguna yang berhasil login
	            activeacc = i; //save user tersebut ke array
	            return true;
	        }
	    }
	    cout<<"Login gagal. Username atau password salah"<<endl;
	    cout<<"Buat akun? (y/n): ";
	    cin>>pil;
	    system("cls");
	}
	while(pil == 'n' || pil == 'N');
    signup();
}

void signup() {
    string username, password;
    
    cin.ignore();
    cout<<garis<<endl;
    cout<<"Masukkan username baru: ";
    getline(cin,username);
    cout<<"Masukkan password baru: ";
    cin>>password;

	//Mengecek Username jika sudah ada
    for (int i=0;i<usercount;i++) {
        if (users[i].username == username) {
        	system("cls");
            cout << "Username sudah digunakan. Silakan coba username lain"<<endl;
            signup();
        }
    }

    //Add user baru
    users[usercount].username = username;
    users[usercount].password = password;
    usercount++;
    cout<<garis<<endl;
    cout<<"Pendaftaran berhasil! Anda sekarang dapat login"<<endl;
    system("pause");
    system("cls");
    authmenu();
}
