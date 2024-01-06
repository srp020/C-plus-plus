#include <iostream>
using namespace std;
void CalCircle();
void CalSquare();

int main()
{
    cout<<"Program Calaulate of Circle."<<endl;
    cout<<"****************************"<<endl;
    CalCircle();
    cout<<"Program Calaulate of Square."<<endl;
    cout<<"****************************"<<endl;
    CalSquare();
    return 0;
}
void CalCircle()
{
    float Radius, Area, Circumference;
    cout<<"Input raduis : ";
    cin>>Radius;
    Area=3.14f*Radius*Radius;
    Circumference=2*3.14f*Radius;
    cout<<endl;
    cout<<"Area of circle :"<<Area<<endl;
    cout<<"Circleference of circle : "<<Circumference<<endl;
    cout<<"Diameter of circle : "<<(2*Radius)<<endl;
}
void CalSquare()
{
    float d1,d2,Area;
    cout<<"Input DAN1 : ";
    cin>>d1;
    cout<<"Input DAN2 : ";
    cin>>d2;
    Area=d1*d2;
    cout<<endl;
    cout<<"Area of Square :"<<Area<<endl;
}