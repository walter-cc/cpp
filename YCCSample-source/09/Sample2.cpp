#include <iostream>
using namespace std;

int main()
{
   const int num = 5;
   int test[num];

   cout << "請輸入" << num <<"個學生的分數。\n";
   for(int i=0; i<num; i++){
      cin >> test[i];
   }

   for(int j=0; j<num; j++){
      cout << j+1 << "號的學生分數為" << test[j] << "。\n";
   }

   return 0;
}
