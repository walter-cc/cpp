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

   cout << "���s�ƦC���e�O";
   vector<int>::iterator it = vt.begin();
   while(it != vt.end()){
      cout << *it;
      it++;
   }
   cout << "�C\n";

   cout << "�f�V�ƦC����O";
   reverse(vt.begin(), vt.end());
   it = vt.begin();
   while(it != vt.end()){
      cout << *it;
      it++;
   }
   cout << "�C\n";

   cout << "���s�ƦC����O";
   sort(vt.begin(), vt.end());
   it = vt.begin();
   while(it != vt.end()){
      cout << *it;
      it++;
   }
   cout << "�C\n";
}
