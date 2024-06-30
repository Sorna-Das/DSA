// Reversing the alternative Array
#include <iostream>
using namespace std;
int printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<< arr[i] <<" "; 
    }
    cout <<"\n";
    return 0;
}
int rev(int arr[], int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
    printArray(arr,size);
    return 0;
}

int main(){
    int arr[7] = {1,2,4,6,7,4,6};
    int brr[8] = {1,4,45,6,66,4,5,33};
    rev(arr,7);
    rev(brr,8);

    return 0;
}