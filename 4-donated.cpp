#include <iostream>
using namespace std;
int main()
{
    int water,bread,boiled,x,y,z,division_x,division_y,division_z,result;
    cout<<"Please Enter Number of water bottles donated :";
    cin >>water;
    cout<<"Please Enter Number of bread donated :";
    cin >>bread;
    cout<<"Please Enter Number of boiled eggs donated :";
    cin >>boiled;
    division_x=water/3;
    division_y=bread/4;
    division_z=boiled/2;
    if(division_x<division_y){
        if(division_x<division_z){
            cout<<"Result of Donated bag : "<<division_x<<endl;
            result=division_x;
        }else if(division_y<division_x){
            if(division_y<division_z){
                cout<<"Result of Donated bag : "<<division_y<<endl;
                result=division_y;
            }
        }else if(division_z<division_x){
            if(division_z<division_y){
                cout<<"Result of Donated bag : "<<division_z<<endl;
                result=division_z;
            }
        }else{
            cout<<"Result of Donated bag : "<<division_x<<endl;
            result=division_x;
        }
    }
    x=water-(result*3);
    cout<<"The remaining amount of donated water bottles :"<<x<<endl;
    y=bread-(result*4);
    cout<<"The remaining amount of donated bread :"<<y<<endl;
    z=boiled-(result*2);
    cout<<"The remaining amount of donated boiled eggs :"<<z<<endl;
    return 0;
}