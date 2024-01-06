#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "Enter Score : ";
    cin >>score;
    if(score >=80){
        cout<<"A";
    }else{
        if(score>=75){
            cout<<"B+";
        }else{
            if(score>=70){
                cout<<"B";
            }else{
                if(score>=65){
                    cout<<"C+";
                }else{
                    if(score>=60){
                        cout<<"C";
                    }else{
                        if(score>=55){
                            cout<<"D+";
                        }else{
                            if(score>=50){
                                cout<<"D";
                        }else{
                        if(score<50){
                            cout<<"F";
                        }
                        }
                    }
                }
            }
        }
    }
    return 0;
    }
}    