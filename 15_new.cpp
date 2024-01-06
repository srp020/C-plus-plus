#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int menuChoice, eggChoice, dishCount, totalAmount = 0;
    bool order = false;

    // Integer int ตัวเลขจำนวนเต็ม // ไม่มีเศษ
    // Double double ตัวเลขที่สามารถมีเศษ // 5.99 // จำนวนของเลข สามารถเก็บได้เยอะกว่า float
    // Float float ตัวเลขที่สามารถมีเศษ

    // Boolean bool เก็บแค่ จริง หรือ เท็จ // True False

    // cout << "ยินดีต้อนรับสู่ร้านอาหาร!" << endl;
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

            double dishPrice;
            // switch (menuChoice)
            // {
            // case 1:
            //     dishPrice = 45;
            //     break;
            // case 2:
            //     dishPrice = 40;
            //     break;
            // case 3:
            //     dishPrice = 55;
            //     break;
            // case 4:
            //     dishPrice = 45;
            //     break;
            // case 5:
            //     dishPrice = 45;
            //     break;
            // }

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
