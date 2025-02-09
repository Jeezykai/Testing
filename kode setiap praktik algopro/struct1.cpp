#include <iostream>
using namespace std;

struct mahasiswa{
    string nama;
    string prodi;
    float ipk;
};

int main(){
    mahasiswa mhs;
    
    mhs.nama = "Jorgie";
    mhs.prodi = "TPL";
    mhs.ipk = 4.0;
    
    cout<<"--------------------"<<endl;
    cout<<"Nama anda adalah: "<<mhs.nama<<endl;
    cout<<"Prodi anda adalah: "<<mhs.prodi<<endl;
    cout<<"IPK anda adalah: "<<mhs.ipk<<endl;
    
    return 0;
}