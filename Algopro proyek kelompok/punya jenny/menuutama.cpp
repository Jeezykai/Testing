#include <iostream>
#include "kalender.cpp"
#include "menambahkan_tugas.cpp"
#include "edit_tugas.cpp"
#include "hapus_tugas.cpp"
using namespace std;

struct data_mahasiswa {
	string nama; 
	int umur;
};

int main () {
	int pilih, index_bulan, tahun, jumlah_tugas = 0;
	char pilih_lanjut;
	tugas tugas_mahasiswa[1000];
	data_mahasiswa mahasiswa;

	while (true) {
		system("cls");
		cout<<"============= Plan Task ============="<<endl;
		cout<<"1. Menambahkan tugas"<<endl;
		cout<<"2. Tampilkan jadwal"<<endl;
		cout<<"3. Edit tugas"<<endl;
		cout<<"4. Hapus Tugas"<<endl;
		cout<<"5. Keluar"<<endl;
		cout<<"Masukkan pilihan Anda : ";cin>>pilih;
		while (pilih < 1 || pilih > 5) {
			cout<<"Pilihan Anda tidak valid, silakan pilih kembali : ";cin>>pilih;
		}
		cout<<"====================================="<<endl;	
	
		if (pilih == 1) {
			menambahkan_tugas(tugas_mahasiswa, jumlah_tugas);
		} else if (pilih == 2) {
			do {
				cout<<"Masukkan bulan : ";cin>>index_bulan;
				while (index_bulan < 1 || index_bulan > 12) {
					cout<<"Masukkan bulan dengan benar! ";cin>>index_bulan;
				}
				cout<<"Masukkan tahun : ";cin>>tahun;
				while (tahun < 0) {
					cout<<"Masukkan tahun dengan benar! ";cin>>tahun;
				}
				kalender (index_bulan, tahun, tugas_mahasiswa, jumlah_tugas);
				for (int i = 0; i < jumlah_tugas; i++) {
					if (tugas_mahasiswa[i].bulan_deadline == index_bulan && tugas_mahasiswa[i].tahun_deadline == tahun) {
						cout<<tugas_mahasiswa[i].tanggal_deadline<<" : "<<tugas_mahasiswa[i].nama_tugas << endl;	
					} 
				}
				cout<<"======================================================================="<<endl;
				cout<<"Ingin kembali ke menu utama ? (y/n) ";cin>>pilih_lanjut;
				if (pilih_lanjut == 'Y' || pilih_lanjut == 'Y') {
					break;
				}	
			} while (pilih_lanjut == 'n' || pilih_lanjut == 'N');
		} else if (pilih == 3) {
			edit_tugas(tugas_mahasiswa, jumlah_tugas);
		} else if (pilih == 4) {
			hapus_tugas(tugas_mahasiswa, jumlah_tugas);
		} else if (pilih == 5) {
			cout<<"Terima kasih";
			break;
		}
	}
	return 0;
}


