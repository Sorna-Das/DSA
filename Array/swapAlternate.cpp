#include <iostream>
using namespace std;

// int swapping (int a, int b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     return a,b;
// }  

void printingArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
}

void swappingAlternate(int arr[], int n){
    for (int i=0;i<n;i+=2){
        if(i+1 <n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    swappingAlternate(arr,10);
    printingArray(arr, 10);

    

}