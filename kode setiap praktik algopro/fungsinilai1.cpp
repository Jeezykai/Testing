#include <iostream>
using namespace std;

int a (int nilai){
    return nilai;
}

int main(){
    int angka;
    cout<<"Masukkan angka: ";cin>>angka;
    cout<<"Angka yang dimasukkan: "<<a(angka);
}