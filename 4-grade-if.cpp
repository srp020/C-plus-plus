#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "Enter Score : ";
    cin >>score;
    if((score>=80) && (score<=100)){
        cout<<"A";
    }
    if((score>=75) && (score<=79)){
        cout<<"B+";
    }
    if((score>=70) && (score<=74)){
        cout<<"B";
    }
    if((score>=65) && (score<=69)){
        cout<<"D+";
    }
    if((score>=60) && (score<=64)){
        cout<<"D";
    }
    if((score>=55) && (score<=59)){
        cout<<"C+";
    }
    if((score>=50) && (score<=54)){
        cout<<"C";
    }
    if((score<=49) && (score=0)){
        cout<<"F";
    }
    return 0;
}