#include <iostream>
using namespace std;
void lsegitiga(){
    float a,b,c;
    cout<<"Masukkan Alas: ";cin>>a;
    cout<<"Masukkan TInggi: ";cin>>b;
    c=(0.5*a)*b;
    cout<<"Luas Segitiga Adalah: "<<c<<endl;
}
void ksegitiga(){
    float a,b,c,d;
    cout<<"Masukkan Sisi 1: ";cin>>a;
    cout<<"Masukkan Sisi 2: ";cin>>b;
     cout<<"Masukkan Sisi 3: ";cin>>c;
    d=a+b+c;
    cout<<"Luas Segitiga Adalah: "<<d<<endl;
}
void segitiga(){
    char ops;
    cout<<"=======Segitiga======="<<endl
    <<"1.Luas"<<endl
    <<"2.Keliling"<<endl
    <<"Pilih operasi yg ingin dilakukan (1-2): ";cin>>ops;
    switch(ops){
        case '1': lsegitiga();break;
        case '2': ksegitiga();break;
        default: cout<<"Pilihan Anda Tidak Valid";break;
    }
}
void lpersegipanjang(){
    float a,b,c;
    cout<<"Masukkan Panjang: ";cin>>a;
    cout<<"Masukkan Lebar: ";cin>>b;
    c=a*b;
    cout<<"Luas Persegi Panjang Adalah: "<<c<<endl;
}
void kpersegipanjang(){
    float a,b,c;
    cout<<"Masukkan Panjang: ";cin>>a;
    cout<<"Masukkan Lebar: ";cin>>b;
    c=2*(a+b);
    cout<<"Keliling Persegi Panjang Adalah: "<<c<<endl;
}
void persegipanjang(){
    char ops;
    cout<<"=======PersegiPanjang======="<<endl
    <<"1.Luas"<<endl
    <<"2.Keliling"<<endl
    <<"Pilih operasi yg ingin dilakukan (1-2): ";cin>>ops;
    switch(ops){
        case '1': lpersegipanjang();break;
        case '2': kpersegipanjang();break;
        default: cout<<"Pilihan Anda Tidak Valid";break;
    }
}
void ljjrgenjang(){
    float a,b,c;
    cout<<"Masukkan Alas: ";cin>>a;
    cout<<"Masukkan Tinggi: ";cin>>b;
    c=a*b;
    cout<<"Luas Jajar Genjang Adalah: "<<c<<endl;
}
void kjjrgenjang(){
    float a,b,c;
    cout<<"Masukkan Alas: ";cin>>a;
    cout<<"Masukkan Sisi Miring: ";cin>>b;
    c=2*(a+b);
    cout<<"Keliling Jajar Genjang Adalah: "<<c<<endl;
}
void jajargenjang(){
    char ops;
    cout<<"=======JajarGenjang======="<<endl
    <<"1.Luas"<<endl
    <<"2.Keliling"<<endl
    <<"Pilih operasi yg ingin dilakukan (1-2): ";cin>>ops;
    switch(ops){
        case '1': ljjrgenjang();break;
        case '2': kjjrgenjang();break;
        default: cout<<"Pilihan Anda Tidak Valid";break;
    }
}
void llingkaran(){
    float phi=3.14;
    float a,b;
    cout<<"Masukkan Diameter: ";cin>>a;
    b=phi*a*a;
    cout<<"Luas Lingkaran Adalah: "<<b<<endl;
}
void klingkaran(){
    float phi=3.14;
    float a,b;
    cout<<"Masukkan Diameter: ";cin>>a;
    b=2*phi*a;
    cout<<"Luas Keliling Adalah: "<<b<<endl;
}
void lingkaran(){
    char ops;
    cout<<"=======Lingkaran======="<<endl
    <<"1.Luas"<<endl
    <<"2.Keliling"<<endl
    <<"Pilih operasi yg ingin dilakukan (1-2): ";cin>>ops;
    switch(ops){
        case '1': llingkaran();break;
        case '2': klingkaran();break;
        default: cout<<"Pilihan Anda Tidak Valid";break;
    }
}
int main(){
    char opsi,rpt;
    do{cout<<"======Aplikasi Bangun Datar======"<<endl
    <<"1.Segitiga"<<endl
    <<"2.Persegi Panjang"<<endl
    <<"3.Jajar Genjang"<<endl
    <<"4.Lingkaran"<<endl
    <<"Pilih Bidang Yang Ingin Di Lakukan Operasi(1-4): ";cin>>opsi;
    switch(opsi){
    case '1': segitiga();break;
    case '2': persegipanjang();break;
    case '3': jajargenjang();break;
    case '4': lingkaran();break;
    default: cout<<"pilihan anda tidak valid";break;
    }
    cout<<"Apakah Anda Ingin Mengulang (Y/T) ??";cin>>rpt;
    }
    while(rpt=='y' || rpt== 'Y');
    cout<<"=============Terima Kasih============="<<endl;
}