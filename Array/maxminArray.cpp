#include <iostream>
#include <climits>
using namespace std;

int max(int arr[],int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[],int size){
    int min= INT_MAX;
    for(int i =0 ;i<size;i++){
        if(min > arr[i]){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int size,arr[100];
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<< "Maximum value is: "<< max(arr,size)<<endl;
    cout<< "Maximum value is: "<< min(arr,size)<<endl;
}