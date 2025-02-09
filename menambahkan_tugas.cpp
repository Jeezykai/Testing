#include <iostream>
#include <string>

using namespace std;

void menambahkan_tugas (tugas tugas_mahasiswa[], int &jumlah_tugas) {
	char tambah_tugas, lanjut;
	tugas tugas_baru;
	while (true) { 
		cout<<"Tahun pengumpulan tugas : ";cin>>tugas_baru.tahun_deadline;
		while (tugas_baru.tahun_deadline < 0) {
			cout<<"Masukkan tahun dengan benar! ";cin>>tugas_baru.tahun_deadline;
		}
		cout<<"Bulan pengumpulan tugas : ";cin>>tugas_baru.bulan_deadline;
		while (tugas_baru.bulan_deadline < 1 || tugas_baru.bulan_deadline > 12) {
			cout<<"Masukkan bulan dengan benar! ";cin>>tugas_baru.bulan_deadline;
		}
		cout<<"Tanggal pengumpulan tugas : ";cin>>tugas_baru.tanggal_deadline;
		int jumlah_hari_terpilih = jumlah_hari(tugas_baru.bulan_deadline, tugas_baru.tahun_deadline); 
		while (tugas_baru.tanggal_deadline < 1 || tugas_baru.tanggal_deadline > jumlah_hari_terpilih) {
			cout<<"Masukkan tanggal dari 1 - "<<jumlah_hari_terpilih<<" : " ;cin>>tugas_baru.tanggal_deadline;
		}
		cin.ignore();
		cout<<"Deskripsi tugas: ";getline(cin, tugas_baru.nama_tugas);	
		tugas_mahasiswa[jumlah_tugas] = tugas_baru;
		jumlah_tugas ++;
		cout<<"Tugas berhasil ditambahkan !"<<endl;
		cout<<"Apakah Anda ingin menambahkan tugas lagi? (y/n) ";cin>>lanjut;
		if (lanjut == 'n' || lanjut == 'N') {
			return;
		}
	}
} 

