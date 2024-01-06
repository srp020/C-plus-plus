#include <iostream>
using namespace std;
int main() {
    double f=0.0d;
    cout << "Enter temperature in fahrenheit: ";
    cin >> f;
    double c=(f-32)*5/9;
    cout << f << "Fahrenheit = " <<c<< " Celsius";
    return 0;
}