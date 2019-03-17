#include <iostream>
using namespace std;

//Car類別的宣告
class Car{
   private:
      int num;
      double gas;
   public:
      static int sum;
      Car();
      void setCar(int n, double g);
      void show();
      static void showSum();
};

//Car類別成員函數的定義
Car::Car()
{
   num = 0;
   gas = 0.0;
   sum++;
   cout << "製作了汽車。\n";
}
void Car::setCar(int n, double g)
{
   num = n;
   gas = g;
   cout << "設定車牌號碼為" << num << "、汽油容量為" << gas <<"。\n"; 
}
void Car::showSum()
{
   cout << "一共有" << sum << "輛汽車。\n";
}
void Car::show()
{
   cout << "汽車的車牌號碼為" << num << "。\n";
   cout << "汽油容量為" << gas << "。\n";
}

int Car::sum = 0;

//Car類別的利用
int main()
{
   Car::showSum();

   Car car1;
   car1.setCar(1234, 20.5);

   Car::showSum();

   Car car2;
   car2.setCar(4567, 30.5);

   Car::showSum();

   return 0;
}
