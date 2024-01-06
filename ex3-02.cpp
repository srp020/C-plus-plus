#include <iostream>
using namespace std;

int main()
{
    int X =0,A=5,B=2,C=11,D=4,E=3,F=7;
    cout<<"(A-D)*F%B ="<<X<<endl;
    X=(A-D)*F%B;
    cout<<"(A%D-E)+B*C ="<<X<<endl;
    X+=(A%D-E)+B*C;
    cout<<"F/(D+E-B*A)%C ="<<X<<endl;
    X=F/(D+E-B*A)%C;
    cout<<"(D*A-B/C)-(A%C/D-E) ="<<X<<endl;
    X+=(D*A-B/C)-(A%C/D-E);
    cout<<"(A-B)+C%(F-E+A) ="<<X<<endl;
    X-=(A-B)+C%(F-E+A);
    cout<<"(B-D/C)-A*F ="<<X<<endl;
    X=(B-D/C)-A*F;
    cout<<"(C-A%B)*(D-F/E)+(A-C) ="<<X<<endl;
    X*=(C-A%B)*(D-F/E)+(A-C);
    cout<<"E%D/F+(B-C+A) ="<<X<<endl;
    X-=E%D/F+(B-C+A);
    cout<<"D/(C+(A-F*E))+C ="<<X<<endl;
    X=D/(C+(A-F*E))+C;
    cout<<"C-(A F)/E%(D-C)*A+B ="<<X<<endl;
    X+=C-(A*F)/E%(D-C)*A+B;
    return 0;
}