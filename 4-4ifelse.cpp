#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Please enter a simple expression";
    cout << "(number operator number): ";
    int LeftOp,RightOp;
    char Op;
    cin >> LeftOp >>Op>> RightOp;
    int Result;
    if(Op == '+') Result=LeftOp+RightOp;
        else if(Op == '-') Result=LeftOp-RightOp;
        else if(Op == '*') Result=LeftOp*RightOp;
        else if(Op == '/') Result=LeftOp/RightOp;
    else cout<<"Error";
    cout<<Result;
    return 0;
}