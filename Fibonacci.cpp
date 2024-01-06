#include <iostream>
using namespace std;

int main()
{
    unsigned long long int number1 = 0;
    unsigned long long int number2 = 1;
    unsigned long long int fibonacci = 0;
    unsigned long long int input;

    cout << "Enter Number : ";
    cin >> input;

    cout << number1 << " " << number2 << " ";
    for (int i = 3; i <= 100; i++)
    {
        fibonacci = number1 + number2;
        cout << fibonacci << " ";
 
        if(input == 0)
        {
            fibonacci = 0;
            cout << "\nIt's Fibonacci at No. : 1";
            break;
        }
        else if (input == fibonacci)
        {
            cout << "\n\n>> It's Fibonacci at No. : " << i << " <<";
            break;
        }
        number1 = number2;
        number2 = fibonacci;
    }

    if (input != fibonacci)
    {
        cout << "\n\n>> It's not Fibonacci <<";
    }
        
    return 0;
}