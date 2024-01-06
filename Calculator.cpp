#include <iostream>
using namespace std;

int Plus(int num1, int num2);
int Minus(int num1, int num2);
int Multiply(int num1, int num2);
int Divide(int num1, int num2);
int Modulus(int num1, int num2);
float Circle_Area(float radius);
float Triangle_Area(float base, float high);
float Square_Area(float side);
float Rectangle_Area(float length, float width);
float Pentagon_Area(float side);

int main()
{
    while (true)
    {
        int press = 0;
        cout << "\n============================\n";
        cout << "-------- Calculator --------\n";
        cout << "Press 1 for Plus\n";
        cout << "Press 2 for Minus\n";
        cout << "Press 3 for Multiply\n";
        cout << "Press 4 for Divide\n";
        cout << "Press 5 for Modulus\n";
        cout << "Press 6 for Circle Area\n";
        cout << "Press 7 for Triangle Area\n";
        cout << "Press 8 for Square Area\n";
        cout << "Press 9 for Rectangle Area\n";
        cout << "Press 10 for Pentagon Area\n";
        cout << "Press 11 for Exit Program\n";
        cout << "============================\n";
        cout << "Press : ";
        cin >> press;

        if(press == 1)
        {
            int num1, num2;
            cout << "- Plus(+) -\n";
            cout << "Enter <Number> and <Number> : ";
            cin >> num1 >> num2;
            cout << "\nAnswer = " << Plus(num1, num2) << endl;
        }
        else if(press == 2)
        {
            int num1, num2;
            cout << "- Minus(-) -\n";
            cout << "Enter <Number> and <Number> : ";
            cin >> num1 >> num2;
            cout << "\nAnswer = " << Minus(num1, num2) << endl;
            
        }
        else if(press == 3)
        {
            int num1, num2;
            cout << "- Multiply(*) -\n";
            cout << "Enter <Number> and <Number> : ";
            cin >> num1 >> num2;
            cout << "\nAnswer = " << Multiply(num1, num2) << endl;
            
        }
        else if(press == 4)
        {
            int num1, num2;
            cout << "- Divide(/) -\n";
            cout << "Enter <Number> and <Number> : ";
            cin >> num1 >> num2;
            cout << "\nAnswer = " << Divide(num1, num2) << endl;
            
        }
        else if(press == 5)
        {
            int num1, num2;
            cout << "- Modulus(%) -\n";
            cout << "Enter <Number> and <Number> : ";
            cin >> num1 >> num2;
            cout << "\nAnswer = " << Modulus(num1, num2) << endl;
            
        }
        else if(press == 6)
        {
            float radius;
            cout << "- Circle Area -\n";
            cout << "Enter Radius : ";
            cin >> radius;
            cout << "\nAnswer = " << Circle_Area(radius) << endl;
            
        }
        else if(press == 7)
        {
            float base, high;
            cout << "- Triangle Area -\n";
            cout << "Enter Base and High : ";
            cin >> base >> high;
            cout << "\nAnswer = " << Triangle_Area(base, high) << endl;
            
        }
        else if(press == 8)
        {
            float side;
            cout << "- Square Area -\n";
            cout << "Enter Side : ";
            cin >> side;
            cout << "\nAnswer = " << Square_Area(side) << endl;
            
        }
        else if(press == 9)
        {
            float length, width;
            cout << "- Rectangle Area -\n";
            cout << "Enter Length and Width : ";
            cin >> length >> width;
            cout << "\nAnswer = " << Rectangle_Area(length, width) << endl;
            
        }
        else if(press == 10)
        {
            float side;
            cout << "- Pentagon Area -\n";
            cout << "Enter Side : ";
            cin >> side;
            cout << "\nAnswer = " << Pentagon_Area(side) << endl;
            
        }
        else if(press == 11)
        {
            cout << "Exit Program..." << endl;
            break;
        }
    }
}

int Plus(int num1, int num2)
{
    return(num1 + num2);
}

int Minus(int num1, int num2)
{
    return(num1 - num2);
}

int Multiply(int num1, int num2)
{
    return(num1 * num2);
}

int Divide(int num1, int num2)
{
    return(num1 / num2);
}

int Modulus(int num1, int num2)
{
    return(num1 % num2);
}

float Circle_Area(float radius)
{
    return(3.14 * radius * radius);
}

float Triangle_Area(float base, float high)
{
    return(0.5 * base * high);
}

float Square_Area(float side)
{
    return(side * side);
}

float Rectangle_Area(float length, float width)
{
    return(length * width);
}

float Pentagon_Area(float side)
{
    return(1.72 * side * side);
}