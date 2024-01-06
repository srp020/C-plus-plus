#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void DisplayMenu();
float Area(const float Raduis);
float Area(const float Legth,const float Widht);
float Area(const float Base,const float Hight,double n);
float Area(float Side);
int main()
{
    char Choice;
    bool Flag = true;
    do{
        DisplayMenu();
        cin>>Choice;
        if(Choice==1){
            float Radiue;
            cout<<"\nEnter raduis : ";
            cin>>Radius;
            cout<<"Area of Circle = "<<fixed;
            cout<<setprecision(2)<<Area(Radius)<<endl;
        }else if(Choice==2){
            float Length,Widht;
            cout<<"Enetr length and wideh : ";
            cin>>Length>>Widht;
            cout<<"Area of Rectangle = "<<fixed;
            cout<<setprecision(2)<<Area(Length,Widht);
            cout<<endl;
        }else if(Choice==3){
            float Base,Hight; double n=0.5;
            cout<<"Enetr Base and Hight : ";
            cin>>Base>>Hight;
            cout<<"Area of Triangle = "<<fixed;
            cout<<setprecision(2)<<Area(Base,Hight);
            cout<<endl;
        }else if(Choice==4){
            float Side;
            cout<<"Enetr Side : ";
            cin>>Side;
            cout<<"Area of Pentagon = "<<fixed;
            cout<<setprecision(2)<<Area(Side);
            cout<<endl;
        }else if(Choice==5) Flag=false;
        else{
            cout<<"\nYou choose out of range is";
            cout<<"not process.\n"
        }
    }while (Flag);
    cout<<"\n...Exit Program...\n";
    return 0;
}
float Area(const float Radius)
{
    return(3.14159F*Radius*Radius);
}
float Area(const float Length,const float Widht)
{
    return(Length*Widht);
}
float Area(const float Base,const float Hight,double n)
{
    return(n*Base*Hight);
}
float Area(float Side)
{
    return(1.72*Side*Side);
}
void DisplayMenu()
{
    cout<<endl;
    cout<<"Program Calculate Area"<<endl;
    cout<<"1.Clrcle"<<endl;
    cout<<"2.Rectangle"<<endl;
    cout<<"3.Triangle"<<endl;
    cout<<"4.Pentagon"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<"Enter your choose number : ";
}