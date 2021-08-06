/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :



===============================
執行結果

cc@appendix$g++ sample_reference.cpp -o test
cc@appendix$./test
22
10


===============================
# 參考文件 :
C++ 快速導覽 - 函數 參考參數
https://pydoing.blogspot.com/2013/01/cpp-reference-parameter.html
*/

#include <iostream> // 引入標準程式庫中相關的輸入、輸出程式
using namespace std;

// do_something() 接受一個整數「參考」，然後將參數重新設定為 10
int do_something(int &nRef) {
    nRef = 10;
}


int main()
{
    int a = 22;
    cout << a << endl;

    do_something(a);
    cout << a << endl;

    return 0;
}

