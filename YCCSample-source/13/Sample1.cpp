#include <iostream>
using namespace std;

//Car類別的宣告
class Car{
   private:
      int num;
      double gas;
   public:
      Car();
      void show();
};

//Car類別成員函數的定義
Car::Car()
{
   num = 0;
   gas = 0.0;
   cout << "製作了一輛汽車。\n";
}
void Car::show()
{
   cout << "汽車的車牌號碼為" << num << "。\n";
   cout << "汽油容量為" << gas << "。\n";
}

int main()
{
   Car car1;

   car1.show();

   return 0;
}
