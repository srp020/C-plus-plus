//hello world
/*#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    return 0;
}*/
//----------------------------------------------------------------
//name
/*#include <iostream>
using namespace std;
int main()
{
    cout<<"######   #######  ###   #"<< endl;
    cout<<"##   ##  #        ###   #"<< endl;
    cout<<"######   #        # #   #"<< endl;
    cout<<"######   #######  #  #  #"<< endl;
    cout<<"##   ##  #        #   ###"<< endl;
    cout<<"######   #######  #    ##"<< endl;
    return 0;

}*/
//----------------------------------------------------------------
//calculte area rectangle
/*#include <iostream>
using namespace std;
int main()
{
    int width,length;
    cout<<"Program Calculate Area Rectangle."<<endl;
    cout<<"Enter widht :";
    cin>>width;
    cout<<"Enter Length :";
    cin>>length;
    cout<<"Area of Rectangle ="<<width*length;
    return 0;
}*/
//----------------------------------------------------------------
//Calculate Area Circle
/*#include <iostream>
using namespace std;
int main()
{
    float cr,cu;
    float r2=3.1415;
    cout<<"Program Calculate Area Circle."<<endl;
    cout<<"Circle radius :";
    cin>>cr;
    cout<<"Area of circle with radius :"<<cr<<"is"<<r2*cr*cr<<endl;
    cout<<"Circumference is"<<2*(r2*cr);
    return 0;
}*/
//----------------------------------------------------------------
//vat
/*#include <iostream>
using namespace std;
int main()
{
    int price,vat,vat2;
    cout<<"Enter price :";
    cin>>price;
    cout<<"Enter vat (%) :";
    cin>>vat;
    vat2=price*vat/100;
    cout<<"Net Price of product ="<<price+vat2;
    return 0;
}*/
//----------------------------------------------------------------
//คำนวณหาชั่วโมงนาที
/*#include <iostream>
using namespace std;
int main()
{
    int m=2,n=3;
    m=n+n;
    n=m*1.5;
    cout<<"m= "<<m<<"h="<<n<<endl;
    return 0;
}*/
//----------------------------------------------------------------
//เปลี่ยนองศาเป็นฟาเรนไฮ
/*#include <iostream>
using namespace std;
int main() {
    double f=0.0d;
    cout << "Enter temperature in fahrenheit: ";
    cin >> f;
    double c=(f-32)*5/9;
    cout << f << "Fahrenheit = " <<c<< " Celsius";
    return 0;
}*/
//----------------------------------------------------------------
//
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    string number;
    int space = 0;
    cout <<"Enter number:";
    cin >> number;
    space=number.length();
    for(int i=0; i<space; i++)
    {
        cout << number[i] << "";
    }

    return 0;
}*/
//----------------------------------------------------------------
//
/*#include <iostream>
using namespace std;

int main()
{
    int bin,dec=0,i,m,n=1;
    cout<<"Enter binary number :";
    cin>>bin;
    while(bin!=0)
    {
        m=bin%10;
        dec=dec+m*n;
        n=n*2;
        bin=bin/10;
        i++;
    }
    cout<<"Decimal value of "<<dec<<endl;
}*/
//----------------------------------------------------------------
//
/*#include <iostream>
using namespace std;
int main() {
    int start,end,h,m,s,;
    cout << "Data inputs are integer!.\n";
    cout << "Enter start kilometer:";
    cin >> start >>;
    cout << "Enter end kilometer:";
    cin >> end;
    cout << "Enter time used(hour minute second)";
    cin >> h,m,s;
    int total =h*3600+m*60+s;
    int distance =end-start;
    double average=distance/(total/3600);
    cout <<"Car travel " <<distance<< "Kilometers in "<<h,m,s<<endl;
    cout << "Average velocity was"<<average<<"kph.";
    return 0;
}*/
//----------------------------------------------------------------
//
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Please enter a simple expression";
    cout << "(number operator number): ";
    int LeftOp,RightOp;
    char Op;
    cin >> LeftOp >>Op>> RightOp;
    int Result;
    if(Op == '+') Result=LeftOp+RightOp;
        else if(Op == '-') Result=LeftOp-RightOp;
        else if(Op == '*') Result=LeftOp*RightOp;
        else if(Op == '/') Result=LeftOp/RightOp;
    else cout<<"Error";
    cout<<Result;
    return 0;
}*/
//----------------------------------------------------------------
//
/*#include <iostream>
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
}*/
//----------------------------------------------------------------
//
/*#include <iostream>
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
}*/
//----------------------------------------------------------------
//grade if
/*#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "Enter Score : ";
    cin >>score;
    if((score>=80) && (score<=100)){
        cout<<"A";
    }
    if((score>=75) && (score<=79)){
        cout<<"B+";
    }
    if((score>=70) && (score<=74)){
        cout<<"B";
    }
    if((score>=65) && (score<=69)){
        cout<<"D+";
    }
    if((score>=60) && (score<=64)){
        cout<<"D";
    }
    if((score>=55) && (score<=59)){
        cout<<"C+";
    }
    if((score>=50) && (score<=54)){
        cout<<"C";
    }
    if((score<=49) && (score=0)){
        cout<<"F";
    }
    return 0;
}*/
//----------------------------------------------------------------
//grade ifelse
/*#include <iostream>
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
} */
//----------------------------------------------------------------
//mango
/*#include <iostream>//โค้ดผิด4ตำแหน่งบอกวิธีแก้พร้อมอธิบายด้วย
using namespace std;
int main()
{
    cout<<"Welcome to my world!"<<endl;
    float pi=3.14;//1 cost int pi =3.14 ลบcostออกแล้วเปลี่ยนจากintเป็นfloatเพราะมันเป็นทศนิยม
    cout<<"Please enter 2 of you favorite integers: "<<endl;

    short fav1,fav2;//2 input ก่อนทำให้มันไม่รู้จักตัวแปร
    cin >>fav1>>fav2;//3 fav1เป็นinputแต่fav2ไม่ได้เป็นinput
    int result=fav1+fav2;//4 ตั้งชื่อตัวแปรผิดไม่ควรเอาตัวเลขไว้ข้างหน้า
    float b33=abs(float(fav1-fav2));
    pi=3.14159;

    cout<<"You will get married at age:"<<result<<endl;
    cout<<"You will have"<<b33<<"children"<<endl;
    cout<<"Good luck Bye^^"<<endl;
    return 0;
}*/
//----------------------------------------------------------------
//pen pencil ruler
/*#include <iostream>
using namespace std;
int main()
{
    int pencil,pen,ruler,x,y,z,result;
    cout<<"Enter Number of Pencil :";
    cin >>pencil;
    cout<<"Enter Number of Pen :";
    cin >>pen;
    cout<<"Enter Number of Ruler :";
    cin >>ruler;

    x=pencil*5;
    y=pen*2;
    z=ruler*8;

    result=x+y+z;
    
    if((result<=300)&&((x%2)==0)&&((y%2)==0)&&((z%2)==0)){
            cout<<"Order is OK"<<endl;
            cout<<"Total Price ="<<result<<endl;
        }else if((result<=200)&&((y%2)==0)&&((z%2)==0)){
                cout<<"Order is OK"<<endl;
                cout<<"Total Price ="<<result<<endl;
        }else if((result<=100)&&((z%2)==0)){
                cout<<"Order is OK"<<endl;
                cout<<"Total Price ="<<result<<endl;
        }else{
            cout<<"Invalid Order"<<endl;
        }
    return 0;
}*/
//----------------------------------------------------------------
//
/*#include <iostream>
using namespace std;
int main()
{
    float weight,moisture,result,deducted,net;
    cout<<"Please enter total weight:";
    cin>>weight;
    cout<<"Please enter rice moisture:";
    cin>>moisture;

    if(moisture>20){
        result=8;
    }else if((moisture>=18.0)&&(moisture>=19.9)){
        result=5;
    }else if((moisture>=16.0)&&(moisture>=17.9)){
        result=2;
    }else if((moisture>=15.0)&&(moisture>=15.9)){
        result=1;
    }else (moisture<15){
        result=0;
    }

    if (result<=8 && result>=1){
        deducted=weight*result/100;
        cout<<"Deducted weight:"<<deducted;
    }
    net=weight-deducted;
    cout<<"Net Weight:"<<net<<endl;
    cout<<"Payment:";


}*/
//----------------------------------------------------------------
//47year
/*#include <iostream>
using namespace std;

int main()
{
    float loan, interest, payment, total_money, overdue, y;

    cout << "Input Loan Interest Payment : ";
    cin >> loan >> interest >> payment;
    
    cout << "Year Remained\n";

    for(overdue = loan; overdue > payment; (overdue - payment) * (overdue * interest / 100))
    {
        overdue = overdue - payment;
        overdue = overdue + (overdue * interest / 100);
        y += 1;
        cout << y << " " << overdue << endl;
    }

    total_money = payment * y + overdue;
    cout << "Number of Year " << y << endl;
    cout << "Total Payment " << total_money;
    return 0;
}*/
/*#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double principal;  // ยอดเงินต้น
    double annualRate; // อัตราดอกเบี้ยรายปี (เป็นทศนิยม)
    int years;         // จำนวนปีที่จ่ายเงิน
    double totalPayment;

    // รับข้อมูลจากผู้ใช้
    cout << "กรุณาป้อนยอดเงินต้น: ";
    cin >> principal;

    cout << "กรุณาป้อนอัตราดอกเบี้ยรายปี (เป็นทศนิยม): ";
    cin >> annualRate;

    cout << "กรุณาป้อนจำนวนปีที่จ่ายเงิน: ";
    cin >> years;

    // คำนวณเงินทั้งหมดที่จ่าย
    double rate = annualRate / 100; // แปลงเป็นอัตราเป็นเศษส่วน
    totalPayment = principal * pow(1 + rate, years);

    // แสดงผลลัพธ์
    cout << "เงินทั้งหมดที่จ่าย: " << totalPayment << " บาท" << endl;
    cout << "จำนวนปีที่จ่าย: " << years << " ปี" << endl;

    return 0;
}
*/

/*#include <iostream>
#include <iomanip>

int main() {
    double loanAmount = 100000;  // เงินต้น
    double annualInterestRate = 0.05;  // อัตราดอกเบี้ยต่อปี
    double yearlyPayment = 5000;  // เงินที่จ่ายในแต่ละปี
    
    double remainingBalance = loanAmount;
    
    std::cout << "ปี" << std::setw(20) << "เงินค้างชำระ" << std::endl;
    std::cout << "------------------------------" << std::endl;
    
    for (int year = 1; year <= 47; ++year) {
        double interestPayment = remainingBalance * annualInterestRate;
        double principalPayment = yearlyPayment - interestPayment;
        remainingBalance -= principalPayment;
        
        if (remainingBalance < 0) {
            remainingBalance = 0;
        }
        
        std::cout << year << std::setw(20) << remainingBalance << std::endl;
    }
    
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    double principal = 100000;  // เงินต้น
    double interestRate = 0.05; // อัตราดอกเบี้ยต่อปี

    // คำนวณและแสดงผลปีและเงินค้างชำระในแต่ละปี
    cout << "ปี\tเงินค้างชำระ" << endl;
    for (int year = 1; year <= 47; ++year) {
        double interest = principal * interestRate;  // ดอกเบี้ยปีนี้
        double totalPayment = principal + interest;  // จำนวนเงินทั้งหมดที่จ่ายปีนี้

        cout << year << "\t" << totalPayment << endl;

        principal = totalPayment;  // เปลี่ยนค่าเงินต้นให้เป็นเงินค้างชำระปีถัดไป
    }

    return 0;
}
*/
//----------------------------------------------------------------
//menu
/*#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int menuChoice, eggChoice, dishCount, totalAmount = 0;
    bool order = false;
    cout << "==========| Welcome to my shop! |============" << endl;
    cout << "       "
         << "What would you like to day?" << endl;

    do
    {
        cout << "Menu:" << endl;
        cout << "     1. Khaw kai jewmoosub - 45 Bath" << endl;
        cout << "     2. Padkrapaomoosub - 40 Bath" << endl;
        cout << "     3. Padkanamookob - 55 Bath" << endl;
        cout << "     4. Padpikkagmoo - 45 Bath" << endl;
        cout << "     5. Mootodkraterm - 45 Bath" << endl;

        cout << "Press number of menu to order. ( Press 0 Cancel ) : ";
        cin >> menuChoice;

        if (1 <= menuChoice && menuChoice <= 5)
        {
            order = true;
            cout << "Would you like to add extra egg? (1 = Kaidaw, 2 = Kaijew, 0 = No Kai): ";
            cin >> eggChoice;

            int dishPrice;
        
            if (menuChoice == 1 || menuChoice == 4 || menuChoice == 5)
            {
                dishPrice = 45;
            }
            else if (menuChoice == 2)
            {
                dishPrice = 40;
            }
            else
            {
                dishPrice = 55;
            }

            if (eggChoice == 1)
            {
                dishPrice += 5;
            }
            else if (eggChoice == 2)
            {
                dishPrice += 10;
            }

            totalAmount += dishPrice;
            dishCount++;
        }
        else if (menuChoice != 0)
        {
            cout << "Number of menu not exist. " << endl;
        }
    } while (menuChoice != 0);

    if (order)
    {
        cout << "Dish Count: " << dishCount << endl; // discount
        cout << "Total: " << totalAmount << " Bath" << endl;
    }

    getche();

    return 0;
}
*/
//----------------------------------------------------------------