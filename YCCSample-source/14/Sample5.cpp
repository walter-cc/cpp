#include <iostream>
using namespace std;

//Car���O���ŧi 
class Car{
   protected:
      int num;
      double gas;
   public:
      Car();
      void setCar(int n, double g);
      virtual void show();
};

//RacingCar���O���ŧi 
class RacingCar : public Car{
   private:
      int course;
   public:
      RacingCar();
      void setCourse(int c);
      void show();
};

//Car��ƪ��w�q 
Car::Car()
{
   num = 0;
   gas = 0.0;
   cout << "�@���T���C\n";
}
void Car::setCar(int n, double g)
{
   num = n;
   gas = g;
   cout << "�⨮�P���X�]��" << num << "�B��T�o�e�q�]��" << gas << "�C\n";
}
void Car::show()
{
   cout << "���P���X��" << num << "�C\n";
   cout << "�T�o�e�q��" << gas << "�C\n";
}

//RacingCar���O������ƪ��w�q 
RacingCar::RacingCar()
{
   course = 0;
   cout << "�@���ɨ��C\n";
}
void RacingCar::setCourse(int c)
{
   course = c;
   cout << "��]�D���X�]��" << course << "�C\n";
}
void RacingCar::show()
{
   cout << "�ɨ������D���X��" << num << "�C\n";
   cout << "�T�o�e�q��" << gas << "�C\n";
   cout << "�]�D���X��" << course << "�C\n";
}

int main()
{
   Car* pCars[2];

   Car car1;
   RacingCar rccar1;

   pCars[0] = &car1;
   pCars[0]->setCar(1234, 20.5);

   pCars[1] = &rccar1;
   pCars[1]->setCar(4567, 30.5);

   for(int i=0; i<2 ;i++){
      pCars[i]->show();
   }

   return 0;
}
