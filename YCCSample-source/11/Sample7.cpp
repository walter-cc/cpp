#include <iostream>
using namespace std;

//共同空間資料型態Year的宣告
union Year{
   int ad;
   int gengo; 
};

int main()
{
   Year myyear;

   cout << "請輸入西元年份。\n";
   cin >> myyear.ad;

   cout << "西元為" << myyear.ad << "年。\n";
   cout << "民國也是" << myyear.gengo << "年。\n";

   cout << "請輸入民國年份。\n";
   cin >> myyear.gengo;

   cout << "民國為" << myyear.gengo << "年。\n";
   cout << "西元也是" << myyear.ad << "年。\n";

   return 0;
}
