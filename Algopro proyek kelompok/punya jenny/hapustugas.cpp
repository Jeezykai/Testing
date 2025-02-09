#include <iostream>
using namespace std;

void hapus_tugas (tugas tugas_mahasiswa[], int &jumlah_tugas) {
	char lanjut;
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
		int tugas_hapus;
		cout<<"Pilih tugas yang ingin Anda hapus : ";cin>>tugas_hapus;
		if (tugas_hapus < 0 || tugas_hapus > jumlah_tugas) {
			cout<<"Tugas tidak ditemukan, silakan coba lagi";cin>>tugas_hapus;
		}
		
		if (tugas_hapus == 0) {
			return;
		}
		
		for (int i = tugas_hapus-1; i < jumlah_tugas - 1; i++) {
	        tugas_mahasiswa[i] = tugas_mahasiswa[i + 1];
	    }
		jumlah_tugas--;
		cout << "Tugas berhasil dihapus!" << endl;
		cout<<"Apakah Anda ingin menghapus tugas lagi? (y/n) ";cin>>lanjut;
		if (lanjut == 'n' || lanjut == 'N') {
			return;
		}
	}
	
}
	
