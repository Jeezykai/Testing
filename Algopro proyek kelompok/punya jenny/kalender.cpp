#include <iostream>
#include <iomanip>
using namespace std;

struct tugas {
	int tanggal_deadline;
	int bulan_deadline;
	int tahun_deadline;
	string nama_tugas;
};

bool tahun_kabisat (int tahun) {
	return (tahun %4 == 0 && tahun %100 != 0) || (tahun %400 == 0);
}

int jumlah_hari (int bulan, int tahun) {
	switch (bulan) {
		case 2 : 
			if (tahun_kabisat(tahun) == true) {
				return 29;
			} else {
				return 28;
			}
		case 4 : case 6 : case 9 : case 11 : return 30;
		default : return 31;
	}
}

int hari_pertama (int bulan, int tahun) {
	int day = 1;
	int K = tahun %100;
	int J = tahun/100;
	if (bulan == 1 || bulan == 2) {
		bulan += 12;
		tahun -= 1;
		K = tahun % 100;  
        J = tahun / 100;
	}
	int h = (day + (13*(bulan+1))/5 + K + (K/4) + (J/4) - (2*J)) % 7;
	return (h+6)%7;
}

void kalender (int index_bulan, int tahun, tugas tugas_mahasiswa[], int jumlah_tugas){
	string hari[7] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"};
	string bulan[12] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", 
					    "Juli", "Agustus", "September", "Oktober", "November", "Desember"};
	cout<<bulan[index_bulan-1]<<"  "<<tahun<<endl;
	for (int i=0;i<7;i++) {
		cout<<setw(10)<<hari[i];
	} 
	cout<<endl;
	
	int jumlah_hari_terpilih = jumlah_hari(index_bulan, tahun);
	int hari_pertama_terpilih = hari_pertama(index_bulan, tahun);
	
	for (int i=0;i<hari_pertama_terpilih;i++) {
		cout<<setw(10)<<" ";
	}
	
	for (int i=1;i<=jumlah_hari_terpilih;i++) {
		cout<<setw(10)<<i;
        if ((i + hari_pertama_terpilih) % 7 == 0) {
            cout<<endl;
        }
	}
	cout<<endl;
}
