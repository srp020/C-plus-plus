#include <iostream>
#include <string>
using namespace std;
int main()
{
    char Choice;
    float Area,Radius,Lenght,Width;
    cout<<"Program Calculate Area"<<endl;
    cout<<"1.Circle"<<endl;
    cout<<"2.Rectangle"<<endl;
    cout<<"3.Exit"<<endl;
    cout<<"Enter your choose number";
    cin>>Choice;
    switch(Choice){
        case'1':cout<<"Enter radius";
        cin>>Radius;
        Area=3.14159F*Radius*Radius;
        cout<<"Area of Clrcle = "<<Area<<endl;
        break;
        case'2':cout<<"Enter lenght and width :";
        cin>>Lenght>>Width;
        Area=Lenght*Width;
        cout<<"Area of Ractangle = "<<Area<<endl;
        break;
        case'3':cout<<"Exit Program";
        break;
        default:cout<<"Error(you choose out of range is not process.)"<<endl;
    }
    return 0;
}