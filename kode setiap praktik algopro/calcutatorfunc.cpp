#include <iostream>
using namespace std;
void pertambahan (float a, float b,float c){
    cout<<"Masukkan Angka Pertama: ";cin>>a;
    cout<<"Masukkan Angka Kedua: ";cin>>b;
    c=a+b;
    cout<<"Hasil Pertambahan adalah: "<<c<<endl;
}
void pengurangan (float a, float b,float c){
    cout<<"Masukkan Angka Pertama: ";cin>>a;
    cout<<"Masukkan Angka Kedua: ";cin>>b;
    c=a-b;
    cout<<"Hasil Pengurangan adalah: "<<c<<endl;
}
void perkalian(float a, float b,float c){
    cout<<"Masukkan Angka Pertama: ";cin>>a;
    cout<<"Masukkan Angka Kedua: ";cin>>b;
    c=a*b;
    cout<<"Hasil perkalian adalah: "<<c<<endl;
}
void pembagian(float a,float b, float c){
    cout<<"Masukkan Angka Pertama: ";cin>>a;
    cout<<"Masukkan Angka Kedua: ";cin>>b;
    c=a/b;
    cout<<"Hasil pembagian adalah: "<<c<<endl;
}
int main(){
    float a,b,c;
    int opr;
    char rpt;
    do {cout<<"========Kalkulator========"<<endl
    <<"1.Pertambahan"<<endl
    <<"2.Pengurangan"<<endl
    <<"3.Perkalian"<<endl
    <<"4.Pembagian"<<endl
    <<"Pilih Operasi Yang ingin dilakukan (1-4): ";
    cin>>opr;
    switch(opr){
        case 1: pertambahan(a,b,c);break;
        case 2: pengurangan(a,b,c);break;
        case 3: perkalian(a,b,c);break;
        case 4: pembagian(a,b,c);break;
        default : cout<<"===Pilihan Anda Tidak Valid===";break;
    }
    cout<<"Apakah Anda Ingin Melakukan Operasi Lagi (Y/T)?? ";cin>>rpt;
    }
    while(rpt == 'Y' || rpt == 'y');
    cout<<"TerimaKasih Sudah Menggunakan Kalkulator Ini :D"
}