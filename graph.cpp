#include <iostream>
using namespace std;

void NumberLoop(int number1, int number2, int number3, int number4, int number5)
{   
    cout << number1 << " : " ;
    for(int n1 = 1; n1 <= number1; n1++)
    {
        cout << "*";
    }
    cout << endl;

    cout << number2 << " : " ;
    for(int n2 = 1; n2 <= number2; n2++)
    {
        cout << "*";
    }
    cout << endl;

    cout << number3 << " : " ;
    for(int n3 = 1; n3 <= number3; n3++)
    {
        cout << "*";
    }
    cout << endl;

    cout << number4 << " : " ;
    for(int n4 = 1; n4 <= number4; n4++)
    {
        cout << "*";
    }
    cout << endl;

    cout << number5 << " : " ;
    for(int n5 = 1; n5 <= number5; n5++)
    {
        cout << "*";
    }
}

int main()
{
    int number1, number2, number3, number4, number5;

    cout << "Enter five number : ";
    cin >> number1 >> number2 >> number3 >> number4 >> number5;

    NumberLoop(number1, number2, number3, number4, number5);
}