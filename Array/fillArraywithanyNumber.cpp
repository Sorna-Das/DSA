// Initializing an array with any number. 
// gIn this case, we are putting -24 in an list of an array[10000].
#include<iostream>
using namespace std;

int main(){
    int size= 10000;
    int arr[size];
    int value = -24;
    for(int i=0;i<size;i++){
        arr[i] = value;
    }
    for (int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}