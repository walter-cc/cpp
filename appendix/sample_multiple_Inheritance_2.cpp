/*===============================
執行結果

cc@appendix$g++ sample_multiple_Inheritance_2.cpp -o test
cc@appendix$./test 
in 基底類別 - b1為0
in 基底類別 - b2為0
in 衍生類別 - dr為0


===============================
# 參考文件 :

「正」

===============================*/

#include <iostream>      // 引入標準程式庫中相關的輸入、輸出程式
using namespace std;        // std : 標準程式庫的命名空間

//Base1類別的宣告
class Base1 {             // 宣告類別

    protected:
        int bs1;

    public:
        Base1(int b1 = 0){bs1 = b1;}   // initializar list
        void showBs();

};  // 記得加上 ";"		#### 重要

//Base1類別成員函數的定義
void Base1::showBs()
{
    cout << "in 基底類別 - b1為" << bs1 << "\n";
}


//Base2類別的宣告
class Base2 {             // 宣告類別

    protected:
        int bs2;

    public:
        Base2(int b2=0){bs2 = b2;}   // initializar list
        void showBs();

};  // 記得加上 ";"		#### 重要

//Base2類別成員函數的定義
void Base2::showBs()
{
    cout << "in 基底類別 - b2為" << bs2 << "\n";
}


//Derived類別的宣告
class Derived : public Base1, public Base2 {     // 「左子右父」

    protected:
        int dr;

    public:
        Derived(int d = 0){dr = d;}   // initializar list
        void showDr();

};  // 記得加上 ";"		#### 重要

//Derived類別成員函數的定義
void Derived::showDr()
{
    cout << "in 衍生類別 - dr為" << dr << "\n";
}


/*
- argc : argument count(參數總和)的縮寫，代表包括指令本身的參數個數。
- argv : argument value 的縮寫。 一個陣列，它會分拆所帶的參數放到陣列內
*/
int main(int argc, char *argv[]) {

    Derived drv;

    drv.Base1::showBs();
    drv.Base2::showBs();
    drv.showDr();

    return 0;
}








