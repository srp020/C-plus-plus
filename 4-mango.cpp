#include <iostream>//โค้ดผิด4ตำแหน่งบอกวิธีแก้พร้อมอธิบายด้วย
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
}