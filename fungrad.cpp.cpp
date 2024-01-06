#include <iostream>
#include <string>
using namespace std;
void input();
void calgrade();
void display();
int main()
{
    float point;
    cout<<"Enter point : ";
    cin>>point;

    


    return 0;

}
/*void calgrade()
{
    float point;
}
/*โปรแกรมกำหนดให้รับค่าคะแนนของนศ.20คน
input รับค่า คืนค่าเป็นเลขทศนิยม calgrade คำนวณเกรด display แสดงข้อมูล*/
/*void a(void);
void b(void);
void c(void);
int x =1;
int main()
{
    int x = 5;
    cout<<"local x in outer space of main is"<<x<<endl;
    {
        int x = 7;
        cout<<"local x in outer scope of main is"<<x<<endl;
    }
    cout<<"local x in outer scope of main is"<<x<<endl;
    a();
    b();
    c();
    a();
    b();
    c();
    cout<<"local x in main"<<x<<endl;
    
    return 0;
}
void a()
{
    int x = 25;
    cout<<"\nlocal x is"<<x<<"on entering a()";
    ++x;
    cout<<"\nlocal x is"<<x<<"before exiting a()\n";
}
void b()
{
    static int x = 50;
    cout<<"\nlocal static x is"<<x<<"on entering b()";
    ++x;
    cout<<"\nlocal static x is"<<x;
    cout<<"before exiting b()\n"<<endl;
}
void c()
{
    cout<<"\nglobal x os"<<x<<"on entering c()";
    x+=10;
    cout<<"\nglobal x is"<<x<<"before exiting c()\n";
}*/
/*int Summation(int StarNumber=1,int EndNumber=10);
int main()
{
    int Start,End;
    cout<<"Enter start number :";
    cin>>Start;
    cout<<"Enter end number :";
    cin>>End;
    cout<<endl;
    cout<<"Summation of number"<<Start<<"to"<<End;
    cout<<"="<<Summation(Start,End)<<endl;
    cout<<"Summation of number"<<5<<"to"<<10;
    cout<<"="<<Summation(5)<<endl;
    cout<<"Summation of number"<<1<<"to"<<10;
    cout<<"="<<Summation()<<endl;
    return 0;
}
int Summation(int StartNumber, int EndNumber)
{
    long Sum =0;
    for(int N = StartNumber;N<EndNumber;N++)
        Sum+=N;
    return Sum;
}*/