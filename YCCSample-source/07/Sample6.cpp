#include <iostream>
using namespace std;

//buy函數的定義
int buy(int x, int y)
{
   int z;

   cout << "買了" << x << "萬元與" << y << "萬元的車子。\n";

   z = x+y;

   return z;
}

//buy函數的呼叫 
int main()
{
   int num1, num2, sum;

   cout << "要買多少錢的車子？\n";
   cin >> num1;

   cout << "要買多少錢的車子？\n";
   cin >> num2;

   sum = buy(num1, num2);

   cout << "合計為" << sum << "萬元。\n";

   return 0;
}
