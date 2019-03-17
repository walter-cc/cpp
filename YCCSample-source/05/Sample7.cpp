#include <iostream>
using namespace std;

int main()
{
   int res;
   char ans;

   cout << "請問要選哪條路線？\n";
   cout << "請輸入整數。\n";

   cin >> res;

   ans = (res==1) ? 'A' : 'B'; 

   cout << "選擇" << ans << "路線。\n";

   return 0;
}
