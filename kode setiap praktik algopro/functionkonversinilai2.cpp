#include <iostream>
using namespace std;
/*void inputnilai(float &uas,float &uts){ // & digunakan untuk menjadi referensi variable dalam fungsi main artinya kalau nilai uas dan uts di update maka otomatis variable dari fungsi utama yang dimasukan kedalam parameter nilainya akan berubah juga
    cout<<"Masukkan Nilai UAS: ";cin>>uas;
    cout<<"MAsukkan Nilai UTS: ";cin>>uts;
}*/
float nilaiuas(int nomorindexuas){
    float uas;
    cout<<"Masukkan Nilai Uas: ";cin>>uas;
    return uas;
}
float nilaiuts(int nomorindexuts){
    float uts;
    cout<<"Masukkan Nilai siswa Ke-"<<nomorindexuts + 1 <<endl
    <<"Masukkan Nilai Uts: ";cin>>uts;
    return uts;
}
float totalnilai(float uts, float uas){
    float a;
    a= (uas + uts)/2;
    return a;
}
char konversi_nilai(float totalnilai){
    char nilaihuruf;
    if(totalnilai >= 85 && totalnilai <= 100){
        nilaihuruf='A';
    }
    else if (totalnilai >= 75 && totalnilai < 85){
        nilaihuruf='B';
    }
    else if (totalnilai >= 65 && totalnilai < 75){
        nilaihuruf='C';
    }
    else if (totalnilai >= 55 && totalnilai < 65){
        nilaihuruf='D';
    }
    else if (totalnilai >=0 && totalnilai < 55){
        nilaihuruf='F';
    }
    else {cout<<"nilai anda tidak valid"<<endl;}
    return nilaihuruf;
}
int main(){
    int jumlahsiswa;
    char nilaihrf[jumlahsiswa], rpt;
    float uas[jumlahsiswa],uts[jumlahsiswa],ratanilai[jumlahsiswa];
    do{cout<<"==========Aplikasi Konversi Nilai=========="<<endl;
    cout<<"Masukkan Jumlah Siswa: ";cin>>jumlahsiswa;
    for(int z = 0;z < jumlahsiswa;z++){
    uts[z] = nilaiuts(z);
    uas[z] = nilaiuas(z);
    ratanilai[z] = totalnilai(uas[z],uts[z]);
    nilaihrf[z] = konversi_nilai(ratanilai[z]);}
    for(int x =0; x < jumlahsiswa; x++){
    cout<<"Nilai Siswa Ke-"<<x+1<<"==========="<<endl;
    cout<<"Total Adalah = "<<ratanilai[x]<<endl;
    cout<<"Nilai Huruf = "<<nilaihrf[x]<<endl;}
    cout<<"Apakah Anda Ingin Mengulang (y/t)? ";cin>>rpt;
    }
    while(rpt == 'Y' || rpt == 'y');
    cout<<"====Terima Kasih====";
}