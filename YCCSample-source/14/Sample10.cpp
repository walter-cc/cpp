#include <iostream>
using namespace std;

//Base0���O���ŧi 
class Base0{
   protected:
      int bs0;
   public:
      Base0(int b0=0){bs0 = b0;}
      void showBs0(); 
};

//Base1���O���ŧi 
class Base1 : public virtual Base0{
   protected:
      int bs1;
   public:
      Base1(int b1=0){bs1 = b1;}
      void showBs1(); 
};

//Base2���O���ŧi 
class Base2 : public virtual Base0{
   protected:
      int bs2;
   public:
      Base2(int b2=0){bs2 = b2;}
      void showBs2(); 
};

//Derived���O���ŧi 
class Derived : public Base1, public Base2{
   protected:
      int dr;
   public:
      Derived(int d=0){dr = d;}
      void showDr();
};

//Base0���O������ƪ��w�q 
void Base0::showBs0()
{
   cout << "bs0��" << bs0 << "�C\n";
}

//Base1���O������ƪ��w�q 
void Base1::showBs1()
{
   cout << "bs1��" << bs1 << "�C\n";
}

//Base2���O������ƪ��w�q 
void Base2::showBs2()
{
   cout << "bs2��" << bs2 << "�C\n";
}

//Derived���O������ƪ��w�q 
void Derived::showDr()
{
   cout << "dr��" << dr << "�C\n";
}

int main()
{
   Derived drv;

   drv.showBs0();

   return 0;
}
