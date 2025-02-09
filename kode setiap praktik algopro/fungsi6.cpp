#include <iostream>
using namespace std;

void HitungLuasSegitiga(double alas, double tinggi){
    double luas = (alas * tinggi) / 2;
    cout<<"Luas segitiga adalah: "<<luas<<endl;
}

int main(){
    double alas, tinggi;
    cout<<"Masukkan alas: ";cin>>alas;
    cout<<"Masukkan tinggi: ";cin>>tinggi;
    HitungLuasSegitiga(alas, tinggi);
}