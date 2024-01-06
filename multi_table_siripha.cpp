#include <iostream>
using namespace std;
int main()
{
    int num=0,sum=0;
    do{
        cout<<"Input Number : ";
        cin>>num;
        if(2>num||num>100)
        {
            cout<<"Number between 2 to 100 ";
            cout<<endl;
        }
    }while(2>num||num>100);
    cout<<"================================";
    cout<<endl;
    if (2>num||num>100);
    for(int i=1; i<=4; i++){
        cout<<"multi table : "<<num;
        cout<<endl;
        for(int p=1; p<=12; p++){
            sum=num*p;
            cout<<num<<" X "<<p<<" = "<<sum;
            cout<<endl;
        }
        num=num+2;
        cout<<endl;
    }
    cout<<"=================================";

    return 0;
}