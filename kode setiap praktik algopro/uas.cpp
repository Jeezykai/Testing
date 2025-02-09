#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int beratPB, beratPK, totalHarga, totalBerat, member, uang, kembalian;

    cin >> beratPB;
    cin >> beratPK;
    cin >> member;
    totalBerat = beratPB + beratPK;
    totalHarga = 7000 * beratPB + 15000 * beratPK;
    if (totalBerat > 10) {
        totalHarga = totalHarga - totalHarga * 0.15;
    }
    if (member == 1) {
        totalHarga = totalHarga - totalHarga * 0.05;
    }
    cout << totalHarga << endl;
    do {
        cin >> uang;
    } while (uang < totalHarga);
    kembalian = uang - totalHarga;
    cout << kembalian << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
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
