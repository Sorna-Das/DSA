// print the sum of all elements in an array
#include<iostream>
using namespace std;
int main(){
    int arr[100],n ,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        count += arr[i];
    }
    cout<<count<<endl;
    return 0;  
}