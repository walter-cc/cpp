/*===============================

新增編譯和執行步驟 : 210729
g++ hello.cpp -o hello
./hello

===============================
# 此範例可以看到 : 「習」


===============================
# 螢幕輸出結果

#ifdef USENAMESPACE
Hello Walter !!, using namespace - std

#else
Hello Walter !!, no using namespace - std

===============================
# 參考文件 :


===============================
*/


#include <iostream>      // 引入標準程式庫中相關的輸入、輸出程式

//#define USENAMESPACE

#ifdef USENAMESPACE
using namespace std;        // std : 標準程式庫的命名空間
#endif


/*
- argc : argument count(參數總和)的縮寫，代表包括指令本身的參數個數。
- argv : argument value 的縮寫。 一個陣列，它會分拆所帶的參數放到陣列內
*/
int main(int argc, char *argv[]) {

    // cout 用來輸出的物件
    // endl : end of line，換行，同 '\n'
    // 用作輸出的 `cout` 及 `endl` 則來自 標準程式庫 (standard library) 中的 `std` 命名空間
    
#ifdef USENAMESPACE
    cout << "Hello Walter !!, using namespace - std" << endl;
#else
    std::cout << "Hello Walter !!, no using namespace - std" << std::endl;
#endif

    return 0;
}

