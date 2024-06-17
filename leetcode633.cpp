#include<iostream>
#include<math.h>
using namespace std;
bool sum(int n){
    long long count = 0;
    long long sqr = sqrt(n);
    while(count<=sqr){
        int sum = count*count + sqr*sqr ;
        
        if(sum == n){
            return true;
        }else if(sum<n){
            count++;
        }else{
            sqr--;
        }
    }
     return false; 
}
int main(){
    int n;
    cin>>n;
    bool ans = sum(n);
    cout <<ans<<endl;
}