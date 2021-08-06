/*===============================
新增編譯和執行步驟 :
g++ hello.cpp -o hello
./hello

===============================
# 此範例可以看到 :





===============================
# 執行結果

cc@YCCSample-source$g++ Sample14-6.cpp -o test
cc@YCCSample-source$./test
-----1-----

作成車牌號碼為1234、汽油容量為20.5的汽車。
把速度設為60
-----2-----

作成編號232航班的飛機。
把速度設為500
-----3-----

車牌號碼為1234。
汽油容量為20.5。
速度為60。
飛機的航班為232。
速度為500。
-----4-----



===============================
# 參考文件 :

最新C++物件導向程式設計實例入門(第四版)(附光碟)，高橋麻奈
https://www.evernote.com/l/AYwCGFA3IPtNaKKZp8tjMBY-vi4PUjnAlk8/

===============================*/

#include <iostream> // 引入標準程式庫中相關的輸入、輸出程式
using namespace std; 	// std 為標準程式庫的命名空間

//宣告 抽象類別
class Vehicle {

protected:

    int speed;

public:

    void setSpeed(int s);
    virtual void show() = 0;        // 純虛擬函數

};  // 記得加上 ";"     #### 重要


// Vehicle類別成員函數的宣告
void Vehicle::setSpeed(int s)
{
   speed = s;
   cout << "把速度設為" << speed << endl;
}


//---------------------------------------------

// 繼承。「左子右父」
// Car類別的宣告
class Car : public Vehicle{

private:

    int num;
    double gas;

public:

    Car(int n, double g);
    void show();    // 衍生類別的show()函數

};  // 記得加上 ";"     #### 重要

// Car類別成員函數的定義
Car::Car(int n, double g)
{
   num = n;
   gas = g;
   cout << "作成車牌號碼為" << num << "、汽油容量為" << gas << "的汽車。\n";
}

void Car::show()    // 在「衍生類別」中「重新定義」和「實作」。
{
   cout << "車牌號碼為" << num << "。\n";
   cout << "汽油容量為" << gas << "。\n";
   cout << "速度為" << speed << "。\n";
}

// 繼承。「左子右父」
//Plane類別的宣告
class Plane : public Vehicle{

private:

    int flight;

public:

    Plane(int f);
    void show();    // 衍生類別的show()函數

};  // 記得加上 ";"     #### 重要


//Plane類別成員函數的定義
Plane::Plane(int f)
{
   flight = f;
   cout << "作成編號" << flight << "航班的飛機。\n";
}

void Plane::show()  // 在「衍生類別」中「重新定義」和「實作」。
{
   cout << "飛機的航班為" << flight << "。\n";
   cout << "速度為" << speed << "。\n";
}

//---------------------------------------------


int main(void) {

    Vehicle* pVc[2];      // 使用「基底類別」的指標時，不只可以指向基底類別本身，也可以指向衍生類別的物件。
    cout << "-----1-----\n" << endl;

    Car car1(1234, 20.5);   // 宣告衍生類別的物件
    pVc[0] = &car1;         // 指向 衍生類別
    pVc[0]->setSpeed(60);
    cout << "-----2-----\n" << endl;

    Plane pln1(232);        // 宣告衍生類別的物件
    pVc[1] = &pln1;         // 指向 衍生類別
    pVc[1]->setSpeed(500);
    cout << "-----3-----\n" << endl;

    // Dynamic binding
    for(int i=0; i<2 ;i++){
        pVc[i]->show();
    }
    cout << "-----4-----\n" << endl;

    return 0;
}





