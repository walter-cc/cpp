#include <iostream>
using namespace std;

int main()
{
   int a;
   int* pA;

   a = 5;
   pA = &a;

   cout << "變數a的值為" << a << "。\n";
   cout << "變數a的位址為" << &a << "。\n";
   cout << "指標pA的值為" << pA << "。\n";	
   cout << "*pA的值為" << *pA << "。\n";

   return 0;
}
