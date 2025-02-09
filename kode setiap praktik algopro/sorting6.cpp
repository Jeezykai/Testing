#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int size, int target){
    int low = 0;
    int high = size - 1;
    
    while(low <= high && target >= arr[low] && target <= arr[high]){
        if(low == high){
            if (arr[low] == target){
                return low;
            }
            return -1;
        }
        int pos = low + (((double)(high - low) / (arr[high] - arr[low])) * (target - arr[low]));
        if(arr[pos] == target){
            return pos;
        }
        if(arr[pos] < target){
            low = pos + 1;
        } else{
            high = pos - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,4,6,8,10,12,14,16,18,20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 12;
    
    int result = interpolationSearch(arr, size, target);
    
    if(result != 1){
        cout<<"Elemen ditemukan di index ke-"<<result<<endl;
    } else{
        cout<<"Elemen tidak ditemukan dalam array."<<endl;
    }
    return 0;
}