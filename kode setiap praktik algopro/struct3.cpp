#include <iostream>
using namespace std;

struct Kendaraan{
    string jenisKendaraan;
    int TahunProduksi;
    float harga;
};

int main(){
    Kendaraan data1, data2;
    
    data1.jenisKendaraan = "Sedan";
    data2.jenisKendaraan = "Minibus";
    
    data1.TahunProduksi = 2007;
    data1.harga = 97.500000;
    
    data2.TahunProduksi = 2012;
    data2.harga = 120.500000;
    
    cout<<"Data 1: "<<endl;
    cout<<"Jenis Kendaraan: "<<data1.jenisKendaraan<<endl;
    cout<<"Tahun Produksi: "<<data1.TahunProduksi<<endl;
    cout<<"Harga: "<<data1.harga<<endl;
    cout<<endl;
    cout<<"Data 2: "<<endl;
    cout<<"Jenis Kendaraan: "<<data2.jenisKendaraan<<endl;
    cout<<"Tahun Produksi: "<<data2.TahunProduksi<<endl;
    cout<<"Harga: "<<data2.harga<<endl;
    
    return 0;
}