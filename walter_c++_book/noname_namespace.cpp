
/*===============================

新增編譯和執行步驟 : 210729
g++ hello.cpp -o hello
./hello

===============================
# 此範例可以看到 : 「習」


===============================
# 螢幕輸出結果

cc@walter_c++_book$g++ noname_namespace.cpp -o test
cc@walter_c++_book$./test
121

===============================
# 參考文件 :
單元 11 - 命名空間
http://kaiching.org/pydoing/cpp/cpp-namespace.html

「正」

===============================
*/


#include <iostream> // 引入標準程式庫中相關的輸入、輸出程式

// 在`無名`命名空間裡頭定義 Demo_class 類別 (class)
namespace {

    class Demo_class {  //宣告類別

        public:
            int a;
            int b;

            int sum() {
                return (a + b);
            }

    }; // 記得加上 ";"      #### 重要
}

/*
- argc : argument count(參數總和)的縮寫，代表包括指令本身的參數個數。
- argv : argument value 的縮寫。 一個陣列，它會分拆所帶的參數放到陣列內
*/
int main(int argc, char *argv[]) {

    Demo_class demo;    // 每個檔案只能有一個無名的命名空間，就直接使用裡頭的識別字

    demo.a = 55;
    demo.b = 66;

    // 用作輸出的 `cout` 及 `endl` 則來自 標準程式庫 (standard library) 中的 `std` 命名空間
    std::cout << demo.sum() << std::endl;

    return 0;
}

