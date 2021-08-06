/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :

由於函數只能有一個回傳值，因此當程式中有多個變數需要用函數修改時，利用參考當參數為一個解決方案

===============================
執行結果

cc@appendix$g++ sample_reference_1.cpp -o test
cc@appendix$./test 
a + b : 59
a : 24
b : 35


===============================
# 參考文件 :
C++ 快速導覽 - 函數 參考參數
https://pydoing.blogspot.com/2013/01/cpp-reference-parameter.html
*/

#include <iostream> // 引入標準程式庫中相關的輸入、輸出程式
using namespace std;

// 由於函數只能有一個回傳值，因此當程式中有多個變數需要用函數修改時，利用參考當參數為一個解決方案
int do_something(int &n1Ref, int &n2Ref) {
    n1Ref += 2;
    n2Ref += 2;
    return (n1Ref + n2Ref);
}

int main()
{
    int a = 22;
    int b = 33;

    cout << "a + b : " << do_something(a, b) << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    return 0;
}

