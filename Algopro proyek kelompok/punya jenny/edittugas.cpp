#include <iostream>
using namespace std;

void edit_tugas (tugas tugas_mahasiswa[], int &jumlah_tugas) {
	char lanjut_edit, lanjut;
	int tugas_edit, pilih_edit;
	if (jumlah_tugas == 0) {
		cout<<"Anda tidak memiliki tugas!"<<endl;
		system("pause");
		return;
	}
	while (true) {
		cout<<"Daftar tugas yang tersedia : "<<endl;
		for (int i=0;i<jumlah_tugas;i++) {
			cout<<i+1<<". "<<tugas_mahasiswa[i].nama_tugas<<endl;
		}

		cout<<"Pilih 0 untuk kembali ke menu utama"<<endl;
		cin.ignore();
		cout<<"Pilih tugas yang ingin Anda edit : ";cin>>tugas_edit;
		while (tugas_edit < 0 || tugas_edit > jumlah_tugas) {
			cout<<"Tugas tidak ditemukan, silakan coba lagi ";cin>>tugas_edit;
		}
		
		if (tugas_edit == 0){
  		   return;
		}
		
		cout<<"Tugas yang Anda pilih : "<<tugas_mahasiswa[tugas_edit-1].nama_tugas<<" pada tanggal "
			<<tugas_mahasiswa[tugas_edit-1].tanggal_deadline<<" bulan "<<tugas_mahasiswa[tugas_edit-1].bulan_deadline
			<<" tahun "<<tugas_mahasiswa[tugas_edit-1].tahun_deadline<<endl;
		cout<<"------------------------------------------------------"<<endl;	
		cout<<"1. Tanggal deadline"<<endl;
		cout<<"2. Bulan deadline"<<endl;
		cout<<"3. Tahun deadline"<<endl;
		cout<<"4. Nama tugas"<<endl;
		cout<<"Yang mau diedit : ";cin>>pilih_edit;
		while (pilih_edit < 1 || pilih_edit > 4) {
			cout<<"Pilihan Anda tidak valid, silakan coba lagi ";cin>>pilih_edit;
		}
		switch (pilih_edit) {
			case 1 : 
				cin.ignore();
				cout<<"Masukkan tanggal deadline : ";cin>>tugas_mahasiswa[tugas_edit-1].tanggal_deadline;
				cout<<"Tanggal pengumpulan tugas berhasil diperbarui"<<endl;
				break;
			case 2 : 
				cin.ignore();
				cout<<"Masukkan bulan deadline : ";cin>>tugas_mahasiswa[tugas_edit-1].bulan_deadline;
				cout<<"Bulan pengumpulan tugas berhasil diperbarui"<<endl;
				break;
			case 3 : 
				cin.ignore();
				cout<<"Masukkan tahun deadline : ";cin>>tugas_mahasiswa[tugas_edit-1].tahun_deadline;
				cout<<"Tahun pengumpulan tugas berhasil diperbarui"<<endl;
				break;
			case 4 : 
				cin.ignore();
				cout<<"Masukkan nama tugas : ";getline(cin, tugas_mahasiswa[tugas_edit-1].nama_tugas);
				cout<<"Nama tugas berhasil diperbarui"<<endl;
				break;
		}	
		cin.ignore();
		cout<<"Apakah Anda ingin mengedit tugas lagi? (y/n) ";cin>>lanjut;
		if (lanjut == 'n' || lanjut == 'N') {
			return;
		}
	}
}
