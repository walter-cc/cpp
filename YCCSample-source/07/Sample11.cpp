#include <iostream>
using namespace std;

//buy函數的宣告
void buy(int x=10);

//buy函數的呼叫
int main()
{
   cout <<  "第1次以100萬元買入。\n";
   buy(100);

   cout <<  "第2次以預設價格買入。\n";
   buy();

   return 0;
}

//buy函數的定義
void buy(int x)
{
   cout <<  "買了" << x << "萬元的車子。\n";
}
