#include <iostream>
using namespace std;
int main()
{
    int Num;
    cout<<"Enter number :";
    cin>>Num;
    int Sum = 0;
    int Value;
    for (int n=1;n<=Num;n++){
        cout<<"Enter integer value("<<n<<") :";
        cin>>Value;
        Sum=Sum+Value;
    }
    cout<<"\nSummation of integer"<<Num;
    cout<<"value="<<Sum;
    return 0;
}