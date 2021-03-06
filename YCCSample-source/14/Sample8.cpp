#include <iostream>
using namespace std;

//Base1類別的宣告 
class Base1{
   protected:
      int bs1;
   public:
      Base1(int b1=0){bs1 = b1;}
      void showBs1(); 
};

//Base2類別的宣告 
class Base2{
   protected:
      int bs2;
   public:
      Base2(int b2=0){bs2 = b2;}
      void showBs2(); 
};

//Derived類別的宣告 
class Derived : public Base1, public Base2{
   protected:
      int dr;
   public:
      Derived(int d=0){dr = d;}
      void showDr();
};

//Base1類別成員函數的定義 
void Base1::showBs1()
{
   cout << "bs1為" << bs1 << "。\n";
}

//Base2類別成員函數的定義 
void Base2::showBs2()
{
   cout << "bs2為" << bs2 << "。\n";
}

//Derived類別成員函數的定義 
void Derived::showDr()
{
   cout << "dr為" << dr << "。\n";
}

int main()
{
   Derived drv;

   drv.showBs1();
   drv.showBs2();
   drv.showDr();

   return 0;
}
