#include <iostream>
using namespace std;

string ttlbonus (int ttl){
    if (ttl <= 5000000 && ttl >= 1000000){
        return "Anda Mendapatkan Bonus Laptop!";
    }
    else if (ttl <= 1000000 && ttl >= 500000){
        return "Anda Mendapatkan Bonus HP!";
    }
    else if (ttl <= 500000 && ttl >= 250000){
        return "Anda Mendapatkan Bonus Sepeda!";
    }
    else if (ttl <= 250000 && ttl >= 100000){
        return "Anda Mendapatkan Bonus Tas!";
    }
    else if (ttl <= 100000 && ttl >= 50000){
        return "Anda Mendapatkan Bonus Baju!";
    }
    else if (ttl <= 50000 && ttl >= 0){
        return "Anda Mendapatkan Bonus Botol Minum!";
    }
    else{
        return "Anda Tidak Mendapatkan Bonus";
    }
}

int main(){
    int total;
    
    cout<<"Masukkan Total Belanjaan Anda: ";cin>>total;
    
    string bonus = ttlbonus (total);
    cout << bonus << endl;
    
}