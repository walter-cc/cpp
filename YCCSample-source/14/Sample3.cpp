#include <iostream>
using namespace std;

//Car類別的宣告 
class Car{
   protected:
      int num;
      double gas;
   public:
      Car();
      void setCar(int n, double g);
      void show();
};

//RacingCar類別的宣告 
class RacingCar : public Car{
   private:
      int course;
   public:
      RacingCar();
      void setCourse(int c);
      void show();
};

//Car類別成員函數的定義 
Car::Car()
{
   num = 0;
   gas = 0.0;
   cout << "作成汽車。\n";
}
void Car::setCar(int n, double g)
{
   num = n;
   gas = g;
   cout << "把汽車號碼設為" << num << "、把汽油容量設為" << gas << "。\n";
}
void Car::show()
{
   cout << "車牌號碼為" << num << "。\n";
   cout << "汽油容量為" << gas << "。\n";
}

//RacingCar類別成員函數的定義 
RacingCar::RacingCar()
{
   course = 0;
   cout << "作成賽車。\n";
}
void RacingCar::setCourse(int c)
{
   course = c;
   cout << "把跑道號碼設為" << course << "。\n";
}
void RacingCar::show()
{
   cout << "賽車的車牌號碼為" << num << "。\n";
   cout << "汽油容量為" << gas << "。\n";
   cout << "跑道號碼為" << course << "。\n";
}

int main()
{
   RacingCar rccar1;
   rccar1.setCar(1234, 20.5);
   rccar1.setCourse(5);

   rccar1.show();

   return 0;
}
