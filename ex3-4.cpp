#include <iostream>
#include <string>
using namespace std;
int main()
{
    string number;
    int space = 0;
    cout <<"Enter number:";
    cin >> number;
    space=number.length();
    for(int i=0; i<space; i++)
    {
        cout << number[i] << "";
    }

    return 0;
}