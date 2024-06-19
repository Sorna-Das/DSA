#include<iostream>
using namespace std;
//  printing array with the help of functions.
void printArray(int array[],int size){
    for(int i =0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<"TAsk completed!!"<<endl;
}

int main() {
    int third[15] = {2,7};
    int n = 15;
    printArray(third,n);
}
