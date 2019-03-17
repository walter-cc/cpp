#include <iostream>
#include <typeinfo>
using namespace std;

//Vehicle���O���ŧi 
class Vehicle{
   protected:
      int speed;
   public:
      void setSpeed(int s);
      virtual void show() = 0;
};

//Car���O���ŧi 
class Car : public Vehicle{
   private:
      int num;
      double gas;
   public:
      Car(int n, double g);
      void show();
};

//Plane���O���ŧi 
class Plane : public Vehicle{
   private:
      int flight;
   public:
      Plane(int f);
      void show();
};

//Vehicle���O������ƪ��ŧi 
void Vehicle::setSpeed(int s)
{
   speed = s;
   cout << "��t�׳]��" << speed << "�C\n";
}

//Car���O������ƪ��w�q 
Car::Car(int n, double g)
{
   num = n;
   gas = g;
   cout << "�@�����P���X��" << num << "�B�T�o�e�q��" << gas << "���T���C\n";
}
void Car::show()
{
   cout << "���P���X��" << num << "�C\n";
   cout << "�T�o�e�q��" << gas << "�C\n";
   cout << "�t�׬�" << speed << "�C\n";
}

//Plane���O������ƪ��w�q 
Plane::Plane(int f)
{
   flight = f;
   cout << "�@���s��" << flight << "��Z�������C\n";
}
void Plane::show()
{
   cout << "��������Z��" << flight << "�C\n";
   cout << "�t�׬�" << speed << "�C\n";
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
         cout<< "��" << (i+1) << "�Ӫ���O" << typeid(Car).name() << "�C\n";
       else
         cout<< "��" << (i+1) << "�Ӫ��󤣬O"<< typeid(Car).name() << "�A�ӬO"
<<  typeid(*pVc[i]).name() << "�C\n";
   }
}
