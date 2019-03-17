#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   vector<int> vt;
   for(int i=0; i<10; i++){
      vt.push_back(i);
   }

   cout << "重新排列之前是";
   vector<int>::iterator it = vt.begin();
   while(it != vt.end()){
      cout << *it;
      it++;
   }
   cout << "。\n";

   cout << "逆向排列之後是";
   reverse(vt.begin(), vt.end());
   it = vt.begin();
   while(it != vt.end()){
      cout << *it;
      it++;
   }
   cout << "。\n";

   cout << "重新排列之後是";
   sort(vt.begin(), vt.end());
   it = vt.begin();
   while(it != vt.end()){
      cout << *it;
      it++;
   }
   cout << "。\n";
}
