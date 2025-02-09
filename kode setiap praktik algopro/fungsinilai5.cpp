#include <iostream>
using namespace std;

void cetak (string kata){
    cout<<"Hasil: "<<kata<<endl;
}

void cetak (int angka){
    cout<<"Hasil: "<<angka<<endl;
}

void cetak (double b){
    cout<<"Hasil: "<<b<<endl;
}

int main(){
    string nama;
    cout<<"Masukkan nama: ";cin>>nama;
    cetak(nama);
    cetak(100);
    cetak(10.5);
}