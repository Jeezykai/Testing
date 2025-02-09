#pragma once
#include <iostream>
using namespace std;
#define garis "#===================================#"

//deklarasi global variable
string nama;
int pil, nominal;

struct user
{
    string username;
    string password;
    int token = 0;
    int tanah;
    int jmlhcar[3];
};

//Array user saver
user users[20];  //Kita menggunakan kapasitas 5 akun maksimal untuk penggunaan aplikasi
int usercount = 0; //save user 	
int activeacc; //save isi user

int hrgmobil[3]={7000, 5000, 4000};
