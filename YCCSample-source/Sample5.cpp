/*===============================
新增編譯和執行步驟 :
g++ hello.cpp -o hello
./hello

===============================
# 此範例可以看到 :


- 若將「基礎類別」的成員函數設定為虛擬函數，那麼就會「視指標所指向物件的資料型態，呼叫出適合的成員函數」，這樣也更直覺，也就是說，不需區分該成員函數定義在衍生類別或基礎類別裡。

- virtual 「基礎類別」的成員函數的宣告


===============================
# 執行結果

cc@YCCSample-source$g++ Sample5.cpp -o test
cc@YCCSample-source$./test 
-----1-----

做成汽車
做成汽車
做成賽車
-----2-----

把車牌號碼設為1234、把汽油容量設為20.5
-----3-----

把車牌號碼設為4567、把汽油容量設為30.5
-----4-----

車牌號碼為1234
汽油容量為20.5
賽車的車牌號碼為4567
汽油容量為30.5
跑道號碼設為0


===============================
# 參考文件 :

最新C++物件導向程式設計實例入門(第四版)(附光碟)，高橋麻奈
https://www.evernote.com/l/AYwCGFA3IPtNaKKZp8tjMBY-vi4PUjnAlk8/

===============================*/

#include <iostream> // 引入標準程式庫中相關的輸入、輸出程式
using namespace std; 	// std 為標準程式庫的命名空間

//宣告類別
class Car {

protected:

    int num;
    double gas;

public:

    Car();  // 建構子
    void setCar(int n, double g);
    virtual void show();        // 虛擬函數 : 基底類別的show()函數

};  // 記得加上 ";"     #### 重要


// Car 類別裡的建構子
Car::Car() {

    num = 0;
    gas = 0.0;
    cout << "做成汽車" << endl;
}

// Car 類別裡的函數
void Car::setCar(int n, double g) {

    num = n;
    gas = g;
    cout << "把車牌號碼設為" << num << "、把汽油容量設為" << gas << endl;
}

// Car 類別裡的函數
void Car::show() {

    cout << "車牌號碼為" << num << endl;
    cout << "汽油容量為" << gas << endl;
}

//---------------------------------------------

// 繼承。「左子右父」
class RacingCar : public Car {

protected:

    int course;

public:

    RacingCar();
    void setCourse(int c);
    void show();    // 衍生類別的show()函數

};  // 記得加上 ";"     #### 重要

// RacingCar 類別裡的建構子
RacingCar::RacingCar() {

    course = 0;
    cout << "做成賽車" << endl;
}

// RacingCar 類別裡的函數
void RacingCar::setCourse(int c) {

    course = c;
    cout << "把跑道號碼設為" << course << endl;
}

// RacingCar 類別裡的函數
void RacingCar::show() {

    cout << "賽車的車牌號碼為" << num << endl;
    cout << "汽油容量為" << gas << endl;
    cout << "跑道號碼設為" << course << endl;
}

//---------------------------------------------


int main(void) {

    Car* pCars[2];      // 使用「基底類別」的指標時，不只可以指向基底類別本身，也可以指向衍生類別的物件。
    cout << "-----1-----\n" << endl;

    Car car1;               // 宣告基底類別的物件
    RacingCar rccar1;       // 宣告衍生類別的物件
    cout << "-----2-----\n" << endl;


    pCars[0] = &car1;   // 指向 基底類別
    pCars[0]->setCar(1234, 20.5);
    cout << "-----3-----\n" << endl;

    pCars[1] = &rccar1; // 指向 衍生類別
    pCars[1]->setCar(4567, 30.5);
    cout << "-----4-----\n" << endl;

    // Dynamic binding
    for(int i = 0; i < 2 ;i++){
        pCars[i]->show();
    }

    return 0;
}





