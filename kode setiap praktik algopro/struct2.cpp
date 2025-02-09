#include <iostream>
using namespace std;

struct Mahasiswa{
    char Nim[9];
    char Nama[25];
    char Alamat[4];
    int Umur;
};

int main(){
    Mahasiswa Mhs[5];
    int i;
    for(i=0;i<5;i++){
        cout<<"Nim  : ";cin>>Mhs[i].Nim;
        cout<<"Nama : ";cin>>Mhs[i].Nama;
        cout<<"Alamat   : ";cin>>Mhs[i].Alamat;
        cout<<"Umur : ";cin>>Mhs[i].Umur;
        cout<<endl;
    }
    for(i=0;i<5;i++){
        cout<<"\n\nNim  : "<<Mhs[i].Nim;
        cout<<"\nNama   : "<<Mhs[i].Nama;
        cout<<"\nAlamat : "<<Mhs[i].Alamat;
        cout<<"\nUmur   : "<<Mhs[i].Umur;
    }
}