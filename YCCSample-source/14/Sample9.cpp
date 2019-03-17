#include <iostream>
using namespace std;

//Base1���O���ŧi 
class Base1{
   protected:
      int bs1;
   public:
      Base1(int b1=0){bs1 = b1;}
      void showBs(); 
};

//Base2���O���ŧi 
class Base2{
   protected:
      int bs2;
   public:
      Base2(int b2=0){bs2 = b2;}
      void showBs(); 
};

//Derived���O���ŧi 
class Derived : public Base1, public Base2{
   protected:
      int dr;
   public:
      Derived(int d=0){dr = d;}
      void showDr();
};
//Base1���O������ƪ��w�q 
void Base1::showBs()
{
   cout << "b1��" << bs1 << "�C\n";
}

//Base2���O������ƪ��w�q 
void Base2::showBs()
{
   cout << "b2��" << bs2 << "�C\n";
}

//Derived���O������ƪ��w�q 
void Derived::showDr()
{
   cout << "dr��" << dr << "�C\n";
}

int main()
{
   Derived drv;

   drv.Base1::showBs();
   drv.Base2::showBs();
   drv.showDr();

   return 0;
}
