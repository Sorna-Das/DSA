//  Find the unique number in a list of an array.
#include <iostream>
using namespace std;
int main(){
    int arr[100],n,key,answer =0 ;
    cout<<"Total numbers: ";
    cin>>n;
    cout<<"The unique number you want to search:";
    cin>>key;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        answer = answer^arr[i];
    }
    cout<<"The Unique Number is :"<<answer <<endl;
    return 0;
}