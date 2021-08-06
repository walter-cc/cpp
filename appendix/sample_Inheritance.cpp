/*===============================
執行結果

cc@appendix$g++ sample_Inheritance.cpp -o test
cc@appendix$./test
作成汽車。
作成賽車。
把車牌號碼設為1234、把汽油容量設為20.5。
把跑道號碼設為5。

===============================
# 參考文件 :

「正」

===============================*/

#include <iostream>      // 引入標準程式庫中相關的輸入、輸出程式
using namespace std;        // std : 標準程式庫的命名空間

class Car {          //Car類別的宣告 -> 「基底」類別

    private:        // 私用資料成員
        int num;
        double gas;

    public:         // 公用資料成員
        Car();
        void setCar(int n, double g);
        void show();

};  // 記得加上 ";"		#### 重要


// RacingCar類別的宣告    -> 「衍生」類別
class RacingCar : public Car {      // 用public來宣告衍生類別，class RacingCar 是繼承 car 而來。 RacingCar(子)，car(父)。「左子右父」
    private:
        int course;

    public:
        RacingCar();
        void setCourse(int c);
};


Car::Car()      // Car類別成員函數的定義
{
    num = 0;
    gas = 0.0;
    cout << "作成汽車。\n";
}

void Car::setCar(int n, double g)
{
    num = n;
    gas = g;
    cout << "把車牌號碼設為" << num << "、把汽油容量設為" << gas << "。\n";
}

void Car::show()
{
    cout << "車牌號碼為" << num << "。\n";
    cout << "汽油容量為" << gas << "。\n";
}


RacingCar::RacingCar()      // RacingCar類別成員函數的定義
{
    course = 0;
    cout << "作成賽車。\n";
}

void RacingCar::setCourse(int c)
{
    course = c;
    cout << "把跑道號碼設為" << course << "。\n";
}

/*
- argc : argument count(參數總和)的縮寫，代表包括指令本身的參數個數。
- argv : argument value 的縮寫。 一個陣列，它會分拆所帶的參數放到陣列內
*/
int main(int argc, char *argv[]) {

    RacingCar rccar1;            // 製作「衍生」類別的物件
    
    rccar1.setCar(1234, 20.5);   // 呼叫「繼承而來」的成員函數
    rccar1.setCourse(5);         // 呼叫「新增」的成員函數

/*
cc@cpphome$g++ appendix/sample_Inheritance.cpp -o test
cc@cpphome$./test 
作成汽車。                   ## 「基底」類別的建構式(conductor)不會被「衍生」類別所繼承，取而代之的是「基底」類別的「無引號建構式」會被自動呼叫出來。
作成賽車。                   ##  「衍生」類別的建構式
把車牌號碼設為1234、把汽油容量設為20.5。
把跑道號碼設為5。

*/
    return 0;
}






