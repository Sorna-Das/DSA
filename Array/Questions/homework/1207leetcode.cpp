#include<iostream>
using namespace std;
int uniqueOccurances(int arr[],int n){
    int count=0;
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
    }
    if(count%2 == 0){
        cout<<"True"<<endl;
    }else{
        cout<<"False" <<endl;
    }
}
int main(){
    int arr[100]= {1,2,2,1,1,3};
    uniqueOccurances (arr,5);
    return 0;
}