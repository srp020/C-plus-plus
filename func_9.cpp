#include <iostream>
using namespace std;
int Min(int V1, int V2);
int Max(int V1, int V2);
void Avg(float t1, float t2);

int main()
{
    int Value1, Value2;
    cout<<"Enter first number : ";
    cin>>Value1;
    cout<<"Enter second number : ";
    cin>>Value2;
    cout<<"Min value : " <<Min(Value1,Value2)<<endl;
    cout<<"Max value : " <<Max(Value1,Value2)<<endl;
    Avg(Value1,Value2);
    return 0;
}

int Min(int V1, int V2)
{
   if(V1<V2)return(V1);
   else return(V2);
}

int Max(int V1, int V2)
{
    if(V1>V2)return(V1);
   else return(V2);
}

void Avg(float t1, float t2)
{
    float avg;
    avg = (t1+t2)/2;
     cout<<"Avg value : " <<avg<<endl;
}