/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :

用 「private」來繼承 :
===============================

*/

#include <iostream>      // 引入標準程式庫中相關的輸入、輸出程式
#include <cstdlib>
using namespace std;        // std : 標準程式庫的命名空間


class student       //宣告類別
{
    private:            // 私用資料成員
        int age;

    protected:
        int lang;

    public:             // 公用資料成員
        int math;

        student()       // 建構子
        {
            age = 0;
            lang = 0;
            math = 0;
        }

        void set_age(int a1)
        {
            age = a1;
        }

        void show_age()
        {
            cout << "in 基底類別 - age = " << age << endl;
        }

};      // 記得加上 ";"		#### 重要


class s1: private student   // 用 private 來宣告衍生類別，class s1 是繼承 student 而來。s1(子)，student(父)。「左子右父」
{

    public:                 //公用資料成員
        void set_lang(int v3)
        {
            lang = v3;      // 可以直接設定父class的 protected 成員
        }

        void set_math(int v4)
        {
            math = v4;      // 可以直接設定父class的 public 成員
        }

        void setage(int v5)
        {
            set_age(v5);    // 因為無法直接存取 父class的 private 成員"age"，所以必須透過父class的成員"set_age()"來設定"age"。
        }

        void show_data()
        {
            show_age();	    // 因為無法直接存取 父class的 private 成員"age"，所以必須透過父class的成員"show_age()"來顯示"age"。

            cout << "in 衍生類別 - lang = " << lang << endl;		// 可以直接顯示父class的 public 成員
            cout << "in 衍生類別 - math = " << math << endl;		// 可以直接顯示父class的 public 成員
        }

};      // 記得加上 ";"		#### 重要


/*
- argc : argument count(參數總和)的縮寫，代表包括指令本身的參數個數。
- argv : argument value 的縮寫。 一個陣列，它會分拆所帶的參數放到陣列內
*/
int main(int argc, char *argv[]) {

    s1 obj1;

    obj1.setage(10);

    obj1.set_lang(20);

    obj1.set_math(30);

    obj1.show_data();

/*
cc@cpp_16_classes$g++ ch14_03_Single_Inheritance_Private.cpp -o test
cc@cpp_16_classes$./test
in 基底類別 - age = 10
in 衍生類別 - lang = 20
in 衍生類別 - math = 30

*/

	return 0;
}





