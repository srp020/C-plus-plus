#include <iostream>
using namespace std;
int main()
{
    int menuChoice,noodleChoice,drinkChoice,dishCount,totalAmount=0,money,n2,n3,n4,change;
    float mod;
    double dishPrice;
    bool order = false;

    do 
    {
        cout<<"----- MENU -----"<<endl;
        cout<<"1 For Select Noodles"<<endl;
        cout<<"2 For Select Drinks"<<endl;
        cout<<"3 For Check Bill"<<endl;
        cout<<"0 For Exit Program"<<endl;
        cout<<"Please input Menu >>"; cin>>menuChoice; cout<<endl;

        if(menuChoice==1)
        {
            cout<<"----- Noodles MENU -----"<<endl;
            cout<<"1 Beef Noodles 75 Bath"<<endl;
            cout<<"2 Pork Noodles 65 Bath"<<endl;
            cout<<"3 Chicken Noodles 60 Bath"<<endl;
            cout<<"4 Rice 10 Bath"<<endl;
            cout<<"Please Select Noodles >>"; cin>>noodleChoice; cout<<endl;
            if(noodleChoice==1){
                dishPrice=75;
                cout<<"Add Beef Noodles 75 Bath"<<endl;
            }else if(noodleChoice==2){
                dishPrice=65;
                cout<<"Add Pork Noodles 65 Bath"<<endl;
            }else if(noodleChoice==3){
                dishPrice=60;
                cout<<"Add Chicken Noodles 60 Bath"<<endl;
            }else if(noodleChoice==4){
                dishPrice=10;
                cout<<"Add Rice 10 Bath"<<endl;
            }
        }
        else if(menuChoice==2)
        {
            cout<<"----- Drinks MENU -----"<<endl;
            cout<<"1 Coffee 55 Bath"<<endl;
            cout<<"2 Matcha Green Tea Latte 65 Bath"<<endl;
            cout<<"3 Green tea 35 Bath"<<endl;
            cout<<"4 Coca Cola 35 Bath"<<endl;
            cout<<"5 Drinking water 35 Bath"<<endl;
            cout<<"Please Select Drinks >>"; cin>>drinkChoice; cout<<endl;
            if(drinkChoice==1){
                dishPrice+=55;
                cout<<"Add Coffee 55 Bath"<<endl;
            }else if(drinkChoice==2){
                dishPrice+=65;
                cout<<"Add Matcha Green Tea Latte 65 Bath"<<endl;
            }else if(drinkChoice==3){
                dishPrice+=35;
                cout<<"Add Green tea 35 Bath"<<endl;
            }else if(drinkChoice==4){
                dishPrice+=35;
                cout<<"Add Coca Cola 35 Bath"<<endl;
            }else if(drinkChoice==5){
                dishPrice+=15;
                cout<<"Add Drinking water 35 Bath"<<endl;
            }
        }
        else if(menuChoice==3)
        {
            cout<<"----- Check Bill -----"<<endl;
            totalAmount+=dishPrice;
            dishCount++;
            cout<<"Total = "<<totalAmount<<"Bath"<<endl;
            cout<<"Received Cash >> "; cin>>money; cout<<endl;
            change=totalAmount-money;
            cout<<"Change = "<<change<<"Bath"<<endl;
        }else if(menuChoice==0)
        {
            cout<<"Program Exit"<<endl;
        }
    }while(menuChoice!=0);

    if(order)
        cout<<"----- Check Bill -----"<<endl;
        totalAmount+=dishPrice;
        dishCount++;
        cout<<"Total = "<<totalAmount<<" Bath"<<endl;
        cout<<"Received Cash >> "; cin>>money; cout<<endl;
        change=totalAmount-money;
        cout<<"Change = "<<change<<" Bath"<<endl;

    return 0;
}