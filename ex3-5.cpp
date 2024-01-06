#include <iostream>
using namespace std;

int main()
{
    int bin,dec=0,i,m,n=1;
    cout<<"Enter binary number :";
    cin>>bin;
    while(bin!=0)
    {
        m=bin%10;
        dec=dec+m*n;
        n=n*2;
        bin=bin/10;
        i++;
    }
    cout<<"Decimal value of "<<dec<<endl;
}