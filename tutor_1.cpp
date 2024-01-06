#include <iostream>
using namespace std;
int main()
{
    a++; //  a= a+1
    a--; //  a= a-1
    a+=2; // a= a+2
    a-=2; // a= a-2
    a/=2; // a= a/2
    a*=2; // a= a*2
    a^=2; // a= a^2

    for (int i = 0,v= 1; i <= 7 ; i++,v*=2)
    {
        cout<<"================================================================";
    }

    return 0;
}