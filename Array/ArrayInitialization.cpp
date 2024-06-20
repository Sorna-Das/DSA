#include <iostream>
using namespace std;

int main(){
//    Integar Initialization
   int num[5]={1,23,4,5,6};
   for(int i =0;i<5;i++){
    cout<<"Integar :"<<num[i] <<" ";
   }
   cout<<endl;

//    Character Initialization
    char ch[5] = {'S','o','r','n','a'};
    for (int i=0;i<5;i++){
        cout<< "char :"<< ch[i]<<" ";
    }
    cout <<endl;
   
//     Double Initializatin
    double duo[5] = {1.123,2.6,3.65,6.33,9.66};
    for(int i=0;i<5;i++){
        cout<<"double :"<<duo[i] <<" ";
    }
    cout <<endl;

// Float Initializaition
    float flo[5] = {1.1,1.2,1.3,1.4,1.5};
    for(int i=0;i<5;i++){
        cout<<"float :"<<flo[i]<<" ";
    }
    cout<<endl;


// Bool Initializatin
    bool bo[3] = {true, false,true};
    for(int i=0;i<3;i++){
        cout<<"bool :"<<bo[i]<< " ";
    }
    cout<<endl;

// String Initializatin
    string st[3] = {"one", "two" ,"three"};
    for(int i=0;i<3;i++){
        cout<<"string :"<<st[i]<< " ";
    }
    cout<<endl;

}