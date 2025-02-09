#include <iostream>
using namespace std;

float luasling (float r){
    return 3.14 * r * r;
}

float volker (float r, float t){
    return luasling(r) * t / 3;
}

int main(){
    float a, b, c;
    cout<<"Masukkan jari-jari: ";cin>>a;
    cout<<"Luas lingkaran: "<<luasling(a)<<endl;
    
    cout<<"Masukkan tinggi: ";cin>>b;
    
    c = luasling(a) * b / 3;
    cout<<"Volume kerucut: "<<c<<endl;
    
    cout<<"Volume kerucut dengan fungsi: "<<volker(a, b);
}