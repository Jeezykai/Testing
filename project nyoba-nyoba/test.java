class Mahasiswa {
    String nama;
    int nim;

    // Constructor (method khusus untuk inisialisasi objek)
    Mahasiswa(String nama, int nim) {
        this.nama = nama;
        this.nim = nim;
    }

    // Method untuk menampilkan informasi mahasiswa
    void tampilkanInfo() {
        System.out.println("Nama: " + nama);
        System.out.println("NIM: " + nim);
    }
    
    // Method untuk mengubah nama
    void ubahNama(String namaBaru) {
        this.nama = namaBaru;
    }
}

public class Main {
    public static void main(String[] args) {
        Mahasiswa mhs1 = new Mahasiswa("Alice", 123456); // Membuat objek Mahasiswa
        mhs1.tampilkanInfo(); // Memanggil method tampilkanInfo()
        
        mhs1.ubahNama("Bob"); // Mengubah nama dengan method
        mhs1.tampilkanInfo(); // Menampilkan info setelah perubahan
    }
}