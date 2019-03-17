#include <iostream>
using namespace std;

//swapㄧ计
void swap(int* pX, int* pY);

int main()
{
   int num1 = 5;
   int num2 = 10;

   cout << "跑计num1" << num1 << "\n";
   cout << "跑计num2" << num2 << "\n";
   cout << "盢跑计num1籔num2秈︽ユ传\n";

   swap(&num1, &num2);

   cout << "跑计num1穝" << num1 << "\n";
   cout << "跑计num2穝" << num2 << "\n";

   return 0;
}

//swapㄧ计﹚竡
void swap(int* pX, int* pY)
{
   int tmp;

   tmp = *pX;
   *pX = *pY;
   *pY = tmp;
}
