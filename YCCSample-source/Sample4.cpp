/*===============================
執行結果

作成汽車。
作成汽車。
作成賽車。
1---------------
把汽車號碼設為1234、把汽油容量設為20.5。
2---------------
把汽車號碼設為4567、把汽油容量設為30.5。
3---------------
車牌號碼為1234。      // 以下四個被呼叫出來的是「基底類別」的show()成員函數
汽油容量為20.5。
車牌號碼為4567。
汽油容量為30.5。

===============================
# 參考文件 :



===============================*/

#include <iostream>	// 引入標準程式庫中相關的輸入、輸出程式
#include <cstdlib>
using namespace std;    // std 為標準程式庫的命名空間

//Car類別的宣告
class Car{
protected:
    int num;
    double gas;

public:
    Car();
    void setCar(int n, double g);
    // void show();
    virtual void show();    // 「虛擬函數」(virtual)的宣告
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


//RacingCar類別的宣告
class RacingCar : public Car{
private:
    int course;

public:
    RacingCar();
    void setCourse(int c);
    void show();
};

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
    Car* pCars[2];      // 使用「基底類別」的指標時，不只可以指向基底類別本身，也可以指向衍生類別的物件。

    Car car1;
    RacingCar rccar1;
    
    cout << "1---------------"<< endl;
    
    pCars[0] = &car1;   // 指向 基底類別
    pCars[0]->setCar(1234, 20.5);
    cout << "2---------------"<< endl;

    pCars[1] = &rccar1; // 指向 衍生類別
    pCars[1]->setCar(4567, 30.5);
    cout << "3---------------"<< endl;

    for(int i=0; i<2 ;i++){
        pCars[i]->show();
    }
    
    return 0;
}
