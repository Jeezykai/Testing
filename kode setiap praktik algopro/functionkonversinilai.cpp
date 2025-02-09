#include <iostream>
using namespace std;
//Aplikasi konversi nilai, menentukan bonus belanja
float niluts(int nilaiuts){
    float uts;
    cout<<"Masukkan Nilai Siswa Ke-"<<nilaiuts + 1<<endl;
    cout<<"Masukkan Nilai UTS: ";cin>>uts;
    return uts;
}

float niluas(int nilaiuas){
    float uas;
    cout<<"Masukkan Nilai UAS: ";cin>>uas;
    return uas;
}

float ttlnilai(float uts, float uas){
    float hasil;
    hasil = (uts + uas)/2;
    return hasil;
}

char knvnilai(int ttlnilai){
    char nilaihuruf;
    
    if (ttlnilai <= 100 && ttlnilai >= 90){
        nilaihuruf = 'A';
    }
    else if (ttlnilai <= 90 && ttlnilai >= 80){
        nilaihuruf = 'B';
    }
    else if (ttlnilai <= 80 && ttlnilai >= 60){
        nilaihuruf = 'C';
    }
    else if (ttlnilai <=60 && ttlnilai >= 50){
        nilaihuruf = 'D';
    }
    else if (ttlnilai <= 50 && ttlnilai >= 0){
        nilaihuruf = 'E';
    }
    else{
        cout<<"Inputan tidak valid!"<<endl;
        nilaihuruf = 'X';
    }
    return nilaihuruf;
}

int main(){
    int jmlhsiswa;
    char nilaihuruf[jmlhsiswa], pil;
    float uts[jmlhsiswa], uas[jmlhsiswa], rata[jmlhsiswa];

    do{
        cout<<"----------Aplikasi Konversi Nilai----------"<<endl;
        cout<<"Masukkan Jumlah Siswa: ";cin>>jmlhsiswa;
        for (int i = 0; i < jmlhsiswa; i++){
            uts[i] = niluts(i);
            uas[i] = niluas(i);
            rata[i] = ttlnilai(uts[i], uas[i]);
            nilaihuruf[i] = knvnilai(rata[i]);
        }
        for (int j = 0; j < jmlhsiswa; j++){
            cout<<"----------"<<"Hasil Nilai Siswa Ke-"<<j+1<<"----------"<<endl;
            cout<<"Total Nilai: "<<rata[j]<<endl;
            cout<<"Indeks Nilai: "<<nilaihuruf[j]<<endl;
        }
        cout<<"Apakah anda ingin mengulang lagi? (y/t): ";cin>>pil;
        }
        while (pil == 'y' || pil == 'Y');
        cout<<"Terima Kasih";
}