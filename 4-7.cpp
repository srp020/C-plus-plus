#include <iostream>
#include <string>
using namespace std;
int main()
{
    int Number;
    string Name;
    cout<<"Enter String :";
    cin >> Number;
    cout<<"Enter number :";
    cin >> Number;
    for (int n=1;n<=Number;n++)
        cout<<n<<"."<<Name<<endl;
    cout<<endl;
    return 0;
}