#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{

  // i <  11 // 11 <  11 False
  // i <= 10 // 11 <= 10 False

  cout << "============================" << endl;
  //       1.                    4.       3.
  for (int i = 0, f = 0, g = 1; i <= 10; i++)
  {
    //  2.
    cout << "| " << i << "| " << f << "| " << g << " | " << endl;

    cout << "--------------------------" << endl;

    cout << "a = f " << f << endl;
    cout << "f " << f + g << " = "
         << " f " << f << " + g " << g << endl;
    cout << "g = a " << g << endl;

    int a = f; // f,a = 1
    f = f + g; // f 1 + g 1 = f2
    g = a;     // a,g = 1

    cout << "============================" << endl;
  }

  getch();

  return 0;
}
