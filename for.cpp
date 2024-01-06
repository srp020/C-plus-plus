#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
  /* code */

  int a = 1;

  a++;    // a = a + 1
  a--;    // a = a - 1
  a += 2; // a = a + 2
  a -= 2; // a = a - 2
  a /= 2; // a = a / 2
  a *= 2; // a = a * 2
  a ^= 2; // a = a ^ 2

  printf("=================================\n");
  printf("|    i    |     v    |  i <= n  |\n");
  printf("=================================\n");
  //      1                4         3
  for (int i = 0, v = 1; i <= 7; i++, v *= 2)
  {
    // 2
    cout << "|  " << i << "  |  " << v << "  |  " << (i + 1 <= 7) << endl;
  }
  printf("=================================\n");

  getch();

  return 0;
}
