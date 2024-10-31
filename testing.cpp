#include <iostream>
using namespace std;
int main() {
    string nama, test;
    int inap, kamar, total;
    char sarapan;

    cout<<"Hotel Bahagia \n ------------- \n 1. VVIP (1.000.000) \n 2. VIP (750.000) \n 3. Standard (500.000) \n 4. Melati (250.000) \n ----------" <<endl;
    cout<<"Masukkan nama anda: "; getline(cin, nama);
    cout<<"Masukkan jenis kamar (1-4): ";cin>>kamar;
    cout<<"Lama inap: ";cin>>inap;
    cout<<"Dengan sarapan (y/t) 50rb/hr: ";cin>>sarapan;

    string kamar;
    switch (kamar)
    {
    case 1:
        kamar = "Kamar anda VVIP";
        total = 1.000.000;
        break;
    case 2:
        total = 750.000;
        kamar = "Kamar anda VIP";
        break;
    case 3:
        total = 500.000;
        kamar = "Kamar anda Standard";
        break;
    case 4:
        total = 250.000;
        kamar = "Kamar anda Melati";
        break;
    default:
        kamar = "";
    }
    if (kamar == "")
    {
        cout<<"Masukkan pilihan yang valid!";
        return 0;
    }
    if (sarapan == 'y')
    {
        total += (50.000 * inap);
    }
    cout<<"---------------"<<endl;
    cout<<"Terimakasih "<<nama<<endl;
    cout<<kamar<endl;
    cout<<"Lama menginap"<<inap "malam"<< ((sarapan == 'y') ? "dengan sarapan" : "")<<endl;
    cout<<"Total bayar: "<<total;
}