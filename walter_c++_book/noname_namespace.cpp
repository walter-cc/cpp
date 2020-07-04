/*===============================
執行結果

cc@walter_book$./main 
121

===============================
# 參考文件 :
單元 11 - 命名空間
http://kaiching.org/pydoing/cpp/cpp-namespace.html

「正」

===============================*/

#include <iostream> // 引入標準程式庫中相關的輸入、輸出程式


// 在"無名"命名空間裡頭定義 Demo 類別 (class)
namespace {
    
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

    Demo d;     // 每個檔案只能有一個無名的命名空間，就直接使用裡頭的識別字
    d.a = 55;
    d.b = 66;

    // 用作輸出的 cout 及 endl 則來自標準程式庫 (standard library) 中的 std 命名空間
    std::cout << d.do_something() << std::endl;

    return 0;
}