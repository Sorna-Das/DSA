// Reverse an array
#include<iostream>
using namespace std;

void change(int &start,int &end){
    int temp = 0; // 0
    temp = start; // s
    start = end;
    end = temp;    
}

int rev (int arr[],int size){
    int start = 0;
    int end = size-1;
    while(start <= end){
        change(arr[start],arr[end]);
        start++;
        end--;
    }
    return 0;
}

int printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<< "\n";
    return 0;
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int brr[5] = {5,4,3,2,1};

    rev(arr,6);
    rev(brr,5);

    printArray(arr,6);
    printArray(brr,5);
}
    