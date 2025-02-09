#include <iostream>
using namespace std;

int persegipanjang (int panjang, int lebar){
    int hasil;
    hasil = panjang * lebar;
    return hasil;
}

int main(){
    int p, l;
    cout<<"Masukkan panjang: ";cin>>p;
    cout<<"Masukkan lebar: ";cin>>l;
    cout<<"Luas persegi panjang: "<<persegipanjang(p, l);
}