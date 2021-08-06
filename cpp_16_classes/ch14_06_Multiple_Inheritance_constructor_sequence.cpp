/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :

在多重繼承關係中，衍生類別物件的建構子，解構子「呼叫順序」。
===============================
呼叫基礎類別 stclass 建構子
呼叫基礎類別 score 建構子
呼叫衍生類別 Student 建構子
呼叫衍生類別 Student 解構子
呼叫基礎類別 score 解構子
呼叫基礎類別 stclass 解構子

*/

#include <iostream>	// 引入標準程式庫中相關的輸入、輸出程式
#include <cstdlib>
using namespace std; // std 為標準程式庫的命名空間


class stclass       //宣告類別
{
    public:             //公用資料成員
        stclass()       //建構子
        {
            cout << "呼叫基礎類別 stclass 建構子"<< endl;
        }

        ~stclass()      //建構子
        {
            cout << "呼叫基礎類別 stclass 解構子"<< endl;
        }
    };          // 記得加上 ";"		#### 重要

class score			//宣告類別
{
    public:         //公用資料成員
        score()     //建構子
        {
            cout << "呼叫基礎類別 score 建構子"<< endl;
        }

        ~score()    //建構子
        {
            cout << "呼叫基礎類別 score 解構子"<< endl;
        }
};          // 記得加上 ";"		#### 重要

// 繼承。Student(子)，score，stclass(父)。「左子右父」
class Student: public stclass, public score
{
    public:             //公用資料成員
        Student()       //建構子
        {
            cout << "呼叫衍生類別 Student 建構子"<< endl;
        }

        ~Student()      //建構子
        {
            cout << "呼叫衍生類別 Student 解構子"<< endl;
        }
};      // 記得加上 ";"		#### 重要


/*
- argc : argument count(參數總和)的縮寫，代表包括指令本身的參數個數。
- argv : argument value 的縮寫。 一個陣列，它會分拆所帶的參數放到陣列內
*/
int main(int argc, char *argv[]) {

    Student object1;

/*
cc@cpp_16_classes$g++ ch14_06_Multiple_Inheritance_constructor_sequence.cpp -o test
cc@cpp_16_classes$./test 
呼叫基礎類別 stclass 建構子
呼叫基礎類別 score 建構子
呼叫衍生類別 Student 建構子
呼叫衍生類別 Student 解構子
呼叫基礎類別 score 解構子
呼叫基礎類別 stclass 解構子
*/
	return 0;
}





