/*===============================
執行結果

cc@walter_book$./main 
33

===============================
# 參考文件 :
單元 11 - 命名空間
http://kaiching.org/pydoing/cpp/cpp-namespace.html

「正」

===============================*/

#include <iostream> // 引入標準程式庫中相關的輸入、輸出程式

// 命名空間裡頭可以定義任何需要的變數 (variable) 、函數 (function) 、類別 (class) 或其他的命名空間
namespace demo {

    class Demo {

    public:
        int a;
        int b;

        int do_something() {
            return a + b;
        }
    };
}

int main() {

    demo::Demo d;   // 表示這識別字"Demo"來自"demo"這個命名空間
    
    d.a = 11;
    d.b = 22;

    // 用作輸出的 cout 及 endl 則來自標準程式庫 (standard library) 中的 std 命名空間
    std::cout << d.do_something() << std::endl;

    return 0;
}