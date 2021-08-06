/*===============================

新增編譯和執行步驟 : 210729
g++ hello.cpp -o hello
./hello

===============================
# 此範例可以看到 : 「習」


- 「衍生類別」和「基礎類別」的成員函數可以有相同的 : 函數名稱、引數的數目、資料型態。

...
void Car::show()  // 基底類別
{
    cout << "車牌號碼為" << endl;
}
...
void RacingCar::show()  // 衍生類別
{
    cout << "賽車的車牌號碼為" << endl;
}
...

- 先宣告**「衍生類別」**物件，再呼叫`show()`成員函數，看到的所呼叫的結果是**「衍生類別」**的`show()`成員函數。
- 這種以**「衍生類別」**所定義的**成員函數**取代**「基底類別」**成員來工作的情形，就稱之為**「改寫」(overriding)或覆寫。**


===============================
# 螢幕輸出結果

cc@cpphome$g++ sample_CPP_template.cpp -o test
cc@cpphome$./test
做成汽車
做成賽車
-----1-----

把車牌號碼設為1234、把汽油容量設為20.5
-----2-----

把跑道號碼設為5
-----3-----

賽車的車牌號碼為1234
汽油容量為20.5
跑道號碼設為5
-----4-----


===============================
# 參考文件 :

最新C++物件導向程式設計實例入門(第四版)(附光碟)，高橋麻奈
https://www.evernote.com/l/AYwCGFA3IPtNaKKZp8tjMBY-vi4PUjnAlk8/

===============================
*/


#include <iostream>      // 引入標準程式庫中相關的輸入、輸出程式
using namespace std;        // std : 標準程式庫的命名空間

class Car {         // 宣告類別

    protected:

        int num;
        double gas;

    public:             // 公用資料成員  

        Car();          // 建構子
        void setCar(int n, double g);
        void show();    // 基底類別的show()函數

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

/*
- argc : argument count(參數總和)的縮寫，代表包括指令本身的參數個數。
- argv : argument value 的縮寫。 一個陣列，它會分拆所帶的參數放到陣列內
*/
int main(int argc, char *argv[]) {

    RacingCar rccar1;           // 宣告衍生類別的物件
    cout << "-----1-----\n" << endl;

    rccar1.setCar(1234, 20.5);  // 基底類別的函數
    cout << "-----2-----\n" << endl;

    rccar1.setCourse(5);        // 衍生類別的函數
    cout << "-----3-----\n" << endl;

    // 以「衍生類別」所定義的成員函數取代「基底類別」成員來工作的情形，就稱之為「改寫」(overriding)或覆寫。
    rccar1.show();              // 基底類別 & 衍生類別 都有同樣型式的函數
    cout << "-----4-----\n" << endl;

    // cout 用來輸出的物件
    // endl : end of line，換行，同 '\n'
    // 用作輸出的 `cout` 及 `endl` 則來自 標準程式庫 (standard library) 中的 `std` 命名空間
    cout << "Hello Walter !!" << endl;

    return 0;
}


/*
===============================
printf("\n\033[1;35m[walter]+++++++++++++++++++++++++[%s][%d]\n\n\033[0m",__FUNCTION__,__LINE__);
printf("\n\033[1;35m[walter]-------------------------[%s][%d]\n\n\033[0m",__FUNCTION__,__LINE__);
===============================

int main(int argc, char *argv[]) {

    printf("arguments numbers : %d\n", argc);   // argc : 所帶參數的數目

    for (i = 0; i < argc; i++) {
        printf("[%d] %s\n", i, argv[i]);    // argv : 一個陣列，它會分拆所帶的參數放到陣列內
    }
    printf("\n");
    return 0;
}

# 螢幕輸出結果

cc@myfirst$gcc Temp_C_Code.c -o test
cc@myfirst$./test

arguments numbers : 1
[0] ./test



cc@myfirst$./test walter

arguments numbers : 2
[0] ./test
[1] walter



cc@myfirst$./test w a l t e r

arguments numbers : 7
[0] ./test
[1] w
[2] a
[3] l
[4] t
[5] e
[6] r



cc@myfirst$./test 1 2 3 4

arguments numbers : 5
[0] ./test
[1] 1
[2] 2
[3] 3
[4] 4

===============================
# 參考文件 :

C/C++ 程式設計教學：main 函數讀取命令列參數，argc 與 argv 用法
https://blog.gtwang.org/programming/c-cpp-tutorial-argc-argv-read-command-line-arguments/


MAIN(int argc, char *argv[ ]) 之用法
https://blog.xuite.net/tzeng015/twblog/113273095

===============================
*/



