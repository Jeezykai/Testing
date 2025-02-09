#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i = 0;i<size;++i){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,4,6,8,10,12,14,16,18,20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 12;
    
    int result = linearSearch(arr, size, target);
    
    if(result != 1){
        cout<<"Elemen ditemukan di index ke-"<<result<<endl;
    } else{
        cout<<"Elemen tidak ditemukan dalam array."<<endl;
    }
    return 0;
}