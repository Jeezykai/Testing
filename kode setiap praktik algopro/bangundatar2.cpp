#include <iostream>
using namespace std;

void luasegi(){
    float a,b,c;
    cout<<"Masukkan Alas: ";cin>>a;
    cout<<"Masukkan Tinggi: ";cin>>b;
    c = (0.5*a)*b;
    cout<<"Luas Segitiga adalah: "<<c<<endl;
}
void kelsegi(){
    float a,b,c,d;
    cout<<"Masukkan Sisi Ke-1: ";cin>>a;
    cout<<"Masukkan Sisi Ke-2: ";cin>>b;
    cout<<"Masukkan Sisi Ke-3: ";cin>>c;
    d = a+b+c;
    cout<<"Keliling Segitiga adalah: "<<d<<endl;
}
void segitiga(){
    char op;
    cout<<"----------Segitiga----------"<<endl
    <<"1.Luas"<<endl
    <<"2.Keliling"<<endl
    <<"Pilih yang anda ingin cari (1-2): ";cin>>op;
    switch(op){
        case '1' : luasegi();break;
        case '2' : kelsegi();break;
    default : cout<<"Pilihan Anda Tidak Valid!";break;
    }
}
void luaspp(){
    float a,b,c;
    cout<<"Masukkan Panjang: ";cin>>a;
    cout<<"Masukkan Lebar: ";cin>>b;
    c = a*b;
    cout<<"Luas Persegi Panjang adalah: "<<c<<endl;
}
void kelpp(){
    float a,b,c;
    cout<<"Masukkan Panjang: ";cin>>a;
    cout<<"Masukkan Lebar: ";cin>>b;
    c = 2*(a+b);
    cout<<"Keliling Persegi Panjang Adalah: "<<c<<endl;
}
void persegipanjang(){
    char op;
    cout<<"----------"<<endl
    <<"1.Luas"<<endl
    <<"2.Keliling"<<endl
    <<"Pilih yang anda ingin cari (1-2): ";cin>>op;
    switch(op){
        case '1' : luaspp();break;
        case '2' : kelpp();break;
    default : cout<<"Pilihan Anda Tidak Valid!";break;
    }
}
void luaslngkrn(){
    float phi = 3.14;
    float a,b;
    cout<<"Masukkan Diameter: ";cin>>a;
    b = phi*a*a;
    cout<<"Luas Lingkaran Adalah: "<<b<<endl;
}
void kelngkrn(){
    float phi = 3.14;
    float a,b;
    cout<<"Masukkan Diameter: ";cin>>a;
    b = 2*phi*a;
    cout<<"Luas Keliling Adalah: "<<b<<endl;
}
void lingkaran(){
    char op;
    cout<<"----------Lingkaran----------"<<endl;
    cout<<"1.Luas"<<endl;
    cout<<"2.Keliling"<<endl;
    cout<<"Pilih yang anda ingin cari (1-2): ";cin>>op;
    switch(op){
        case '1' : luaslngkrn();break;
        case '2' : kelngkrn();break;
    default : cout<<"Pilihan Anda Tidak Valid!";break;
    }
}
int main(){
    char pil,jwb;
    do{
    cout<<"----------Aplikasi Bangun Datar----------"<<endl
    <<"1.Segitiga"<<endl
    <<"2.Persegi Panjang"<<endl
    <<"3.Lingkaran"<<endl
    <<"Pilih Bangun Datar Yang Ingin Dicari (1-3): ";cin>>pil;
    switch(pil){
    case '1': segitiga();break;
    case '2': persegipanjang();break;
    case '3': lingkaran();break;
    default : cout<<"Pilihan anda tidak valid!";break;
    }
    cout<<"Apakah Anda Ingin Memilih Lagi? (Y/T)?: ";cin>>jwb;
    }
    while(jwb == 'y' || jwb == 'Y');
    cout<<"----------Terimakasih Telah Mencoba!----------"<<endl;
}