#include <iostream>
using namespace std;

void garis(){
    cout<<"---------------------"<<endl;
}

void say_hello (string name){
    garis();
    cout<<"Hello "<<name<<endl;
}

int main(){
    say_hello ("Jorgie");
}