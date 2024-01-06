#include<iostream>
using namespace std;
int main(){
    int money,n2,n3,n4;
    float mod;

    
    cout<<"Enter money : "; cin>>money;
    
    mod=money%1000;
    n2=mod;
    mod=n2%100;
    n3=mod;
    mod=n3%10;
    n4=mod;

    cout<<"1000 : "<<money/1000<<endl;
    cout<<"100  : "<<n2/100<<endl;
    cout<<"10   : "<<n3/10<<endl;
    cout<<"1    : "<<n4/1<<endl;


}