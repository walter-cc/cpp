/*===============================
執行結果

cc@YCCSample-source$g++ Sample3.cpp -o test
cc@YCCSample-source$./test 
作成汽車。
作成賽車。
1---------------
把汽車號碼設為1234、把汽油容量設為20.5。
2---------------
把跑道號碼設為5。
3---------------
賽車的車牌號碼為1234。
汽油容量為20.5。
跑道號碼為5。
4---------------


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
    RacingCar rccar1;   // 衍生類別
    cout << "1---------------"<< endl;

    rccar1.setCar(1234, 20.5);  // 呼叫出來的是「基礎類別」的成員函數
    cout << "2---------------"<< endl;

    rccar1.setCourse(5);        // 呼叫出來的是「衍生類別」的成員函數
    cout << "3---------------"<< endl;

    rccar1.show();  // 呼叫出來的是「衍生類別」的show()成員函數
    cout << "4---------------"<< endl;

    return 0;
}

