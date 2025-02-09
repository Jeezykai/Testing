#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int beratPB, beratPK, totalHarga, totalBerat, member, uang, kembalian;

    cout<<"Masukkan Berat Pakaian Bersih: ";cin >> beratPB;
    cout<<"Masukkan Berat Pakaian Khusus: ";cin >> beratPK;
    cout<<"Apakah anda member? (1/0): ";cin >> member;
    totalBerat = beratPB + beratPK;
    totalHarga = 7000 * beratPB + 15000 * beratPK;
    if (totalBerat > 10) {
        totalHarga = totalHarga - totalHarga * 0.15;
    }
    if (member == 1) {
        totalHarga = totalHarga - totalHarga * 0.05;
    }
    cout <<"Total Harga Anda: " << totalHarga << endl;
    do {
        cout<<"Masukkan uang anda: ";cin >> uang;
    } while (uang < totalHarga);
    kembalian = uang - totalHarga;
    cout <<"Kembalian Anda: "<< kembalian << endl;
    return 0;
}

string toString (double value) {
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
