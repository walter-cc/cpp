#include <iostream>
using namespace std;

//Base0類別的宣告 
class Base0{
   protected:
      int bs0;
   public:
      Base0(int b0=0){bs0 = b0;}
      void showBs0(); 
};

//Base1類別的宣告 
class Base1 : public virtual Base0{
   protected:
      int bs1;
   public:
      Base1(int b1=0){bs1 = b1;}
      void showBs1(); 
};

//Base2類別的宣告 
class Base2 : public virtual Base0{
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

//Base0類別成員函數的定義 
void Base0::showBs0()
{
   cout << "bs0為" << bs0 << "。\n";
}

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

   drv.showBs0();

   return 0;
}
