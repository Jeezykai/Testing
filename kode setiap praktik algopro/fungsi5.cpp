#include <iostream>
using namespace std;

void HitungLuasSegitiga(double alas, double tinggi){
    double luas = (alas * tinggi) / 2;
    cout<<"Luas segitiga adalah: "<<luas<<endl;
}

int main(){
    HitungLuasSegitiga(10.5, 100.0);
}