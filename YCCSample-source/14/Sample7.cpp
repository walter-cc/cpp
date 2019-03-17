#include <iostream>
#include <typeinfo>
using namespace std;

//Vehicle類別的宣告 
class Vehicle{
   protected:
      int speed;
   public:
      void setSpeed(int s);
      virtual void show() = 0;
};

//Car類別的宣告 
class Car : public Vehicle{
   private:
      int num;
      double gas;
   public:
      Car(int n, double g);
      void show();
};

//Plane類別的宣告 
class Plane : public Vehicle{
   private:
      int flight;
   public:
      Plane(int f);
      void show();
};

//Vehicle類別成員函數的宣告 
void Vehicle::setSpeed(int s)
{
   speed = s;
   cout << "把速度設為" << speed << "。\n";
}

//Car類別成員函數的定義 
Car::Car(int n, double g)
{
   num = n;
   gas = g;
   cout << "作成車牌號碼為" << num << "、汽油容量為" << gas << "的汽車。\n";
}
void Car::show()
{
   cout << "車牌號碼為" << num << "。\n";
   cout << "汽油容量為" << gas << "。\n";
   cout << "速度為" << speed << "。\n";
}

//Plane類別成員函數的定義 
Plane::Plane(int f)
{
   flight = f;
   cout << "作成編號" << flight << "航班的飛機。\n";
}
void Plane::show()
{
   cout << "飛機的航班為" << flight << "。\n";
   cout << "速度為" << speed << "。\n";
}

int main()
{
   Vehicle* pVc[2]; 
   Car car1(1234,20.5);
   Plane pln1(232);

   pVc[0] = &car1;
   pVc[1] = &pln1;

   for(int i=0; i<2; i++){
       if(typeid(*pVc[i]) == typeid(Car))
         cout<< "第" << (i+1) << "個物件是" << typeid(Car).name() << "。\n";
       else
         cout<< "第" << (i+1) << "個物件不是"<< typeid(Car).name() << "，而是"
<<  typeid(*pVc[i]).name() << "。\n";
   }
}
