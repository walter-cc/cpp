#include <iostream>
using namespace std;

int main()
{
   int num;

   cout << "請問要輸出幾個*？\n";

   cin >> num;

   for(int i=1; i<=num; i++){
      cout << '*';
   }
   cout << '\n';

   return 0;
}
