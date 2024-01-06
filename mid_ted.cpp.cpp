#include<iostream>
using namespace std;
int main(){
    int in_water,in_geg,in_honey,in_sugar,in_sa,Q;
    int water=0,geg=0,honey=0,sugar=0,sa=0;

    for(int i=1;i<=5;i++){
        cout<<"Day "<<i<<endl;

            cout<<"enter water : "; cin>>in_water;
            cout<<"enter geg : "; cin>>in_geg;
            cout<<"enter honey : "; cin>>in_honey;
            cout<<"enter sugar : "; cin>>in_sugar;
            cout<<"enter sa : "; cin>>in_sa;

            water=water+in_water;
            geg=geg+in_geg;
            honey=honey+in_honey;
            sugar=sugar+in_sugar;
            sa=sa+in_sa;

            int ch_water,ch_geg,ch_honey,ch_sugar,ch_sa;
            ch_water=in_water/200;
            ch_geg=in_geg/75;
            ch_honey=in_honey/25;
            ch_sugar=in_sugar/5;

            if(ch_water<=ch_geg && ch_water<=ch_honey && ch_water<=ch_sugar){
                // cout<<"water less.";
                Q=ch_water;
            }else if(ch_geg<=ch_water && ch_geg<=ch_honey && ch_geg<=ch_sugar){
                // cout<<"geg less.";
                Q=ch_geg;
            }else if(ch_honey<=ch_water && ch_honey<=ch_geg && ch_honey<=ch_sugar){
                // cout<<"honey less.";
                Q=ch_honey;
            }else if(ch_sugar<=ch_water && ch_sugar<=ch_honey && ch_sugar<=ch_geg){
                // cout<<"sugar less.";
                Q=ch_sugar;
            }else{
                cout<<"Error."<<endl;
                Q=0;
            }
            cout<<endl;
            cout<<"can get cupgeg "<<Q<<" cup."<<endl;
            

            water=water-(200*Q);
            geg=geg-(75*Q);
            honey=honey-(25*Q);
            sugar=sugar-(25*Q);


            ch_water=water/200;
            ch_sa=sa/50;
            ch_honey=honey/25;

            if(ch_water<=ch_sa && ch_water<=ch_honey){
                cout<<"water less.";
                Q=ch_water;
            }else if(ch_sa<=ch_water && ch_sa<=ch_honey){
                cout<<"sa less.";
                Q=ch_sa;
            }else if(ch_honey<=ch_water && ch_honey<=ch_sa){
                cout<<"honey less.";
                Q=ch_honey;
            }else{
                cout<<"Error.";
                Q=0;
            }
            cout<<endl;
            cout<<"can get cupsa "<<Q<<" cup."<<endl;

            water=water-(200*Q);
            sa=sa-(50*Q);
            honey=honey-(25*Q);

            cout<<"---total---- "<<endl;
            cout<<"water : "<<water<<endl;
            cout<<"geg : "<<geg<<endl;
            cout<<"honey : "<<honey<<endl;
            cout<<"sugar : "<<sugar<<endl;
            cout<<"sa : "<<sa<<endl;

    }
}