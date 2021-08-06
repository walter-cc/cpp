/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :

除了可以在建構函數中設定資料成員外，資料成員也可以由初值串列 (initializar list) 來設定

===============================
執行結果

cc@appendix$g++ sample_initializar_list.cpp -o test
cc@appendix$./test
constructor
11 , 22
33

===============================
# 參考文件 :
C++ 速查手冊 V1.00 - 單元 9.2 - 初值串列
https://pydoing.blogspot.com/2015/01/cpp-0902.html
*/

#include <iostream>      // 引入標準程式庫中相關的輸入、輸出程式
using namespace std;        // std : 標準程式庫的命名空間

class Demo {        //Car類別的宣告 -> 「基底」類別

    private:
        int a;
        int b;

    public:
        Demo(int pa, int pb);
        int do_something(void);

};  // 記得加上 ";"     #### 重要


// 初值串列 (initializar list)，這樣就會將 pa 的值設定給 a ， pb 的值設定給 b 。
Demo::Demo(int pa, int pb) : a(pa), b(pb) {

    cout << "constructor" << endl;
    cout << a << " , " << b << endl;

}


int Demo::do_something() {
    return (a + b);
}


/*
- argc : argument count(參數總和)的縮寫，代表包括指令本身的參數個數。
- argv : argument value 的縮寫。 一個陣列，它會分拆所帶的參數放到陣列內
*/
int main(int argc, char *argv[]) {
{
    Demo d(11,22);      //宣告 class Demo 的物件

    cout << d.do_something() << endl;

    return 0;
}

