/*===============================
執行結果

cc@appendix$g++ sample_const.cpp -o test
sample_const.cpp: In function ‘int main()’:
sample_const.cpp:37:18: warning: deprecated conversion from string constant to ‘char*’ [-Wwrite-strings]
     char *strB = "test";  
                  ^
cc@appendix$./test 
3
5
4
6
Test
Test
Test


===============================
# 參考文件 :

  【C 語言入門】24.2 - const 修飾字
  https://youtu.be/R2rhMxtjuv0

  【C 語言入門】24.4 - 指標與 const
  https://youtu.be/WM4AjsigcPY

  【C 語言入門】24.3 - 字串字面常數與 const char *
  https://youtu.be/0XlbDK2l1V4

*/

#include <iostream>	// 引入標準程式庫中相關的輸入、輸出程式
#include <cstdlib>
using namespace std; 	// std 為標準程式庫的命名空間

//#define GET_COMPILE_ERROR_LOG

int main(void) {

    int a = 3;
    const int b = 5;    // 要給定初始值

    int c[3] = {4, 5, 6};
    const int d[3] = {6, 7, 8}; // 要給定初始值

    // 一般我們只會使用 strA[] & const char *strC 這種方式。
    char strA[] = "test";       // 將字串存成一個字元陣列，大小為5

    char *strB = "test";		
    /* 特例，不能使用。"test"為系統所提供的字元陣列，它是read only，我們不可以修改它的資料。
    編譯時會造成的warning。
    error log : warning: deprecated conversion from string constant to ‘char*’ [-Wwrite-strings]*/

    const char *strC = "test";  // read only，正常我們會使用的方式

    cout << a << endl;
    cout << b << endl;
    cout << c[0] << endl;
    cout << d[0] << endl;

    a = 4;

#ifdef GET_COMPILE_ERROR_LOG
    b = 6;  //會出現編譯錯誤
    /*
    log :
    error: assignment of read-only variable ‘b’
    b = 6;
    */
#endif

    c[0] = 10;

#ifdef GET_COMPILE_ERROR_LOG
    d[0] = 11;	//會出現編譯錯誤

    /*
    log :
    error: assignment of read-only location ‘d[0]’
    d[0] = 11;
    */
#endif

    strA[0] = 'T';  // O，因為 strA 是真實存在記憶體中的一個字元陣列，是「我們自己宣告」的。

#ifdef GET_COMPILE_ERROR_LOG
    strB[0] = 'T';  // X(未定義行為)，因為 strB 是一個指標，它指向「系統提供」的字元陣列，我們當然無法改變
    /* 執行時會造成的core dump
    error log : Segmentation fault (core dumped)*/

    strC[0] = 'T';  // X(編譯失敗)，因為在前面已經宣告為read only
    /* 編譯時會造成的error log :
    error: assignment of read-only location ‘* strC’*/

    strA = strB;    // (char []) = (char *) (X)，陣列無法放在等號左邊
    /*error: incompatible types in assignment of ‘char*’ to ‘char [5]’*/

    strA = strC;    // (char []) = (const char *) (X)，陣列無法放在等號左邊
    /*error: incompatible types in assignment of ‘const char*’ to ‘char [5]’*/
#endif

    strB = strA;    // (char *) = (char []) (O)，strA為其元素[0]的address，可以隱性複製到 strB

#ifdef GET_COMPILE_ERROR_LOG
    strB = strC;    // (char *) = (const char *)(X)，因為 strC 在前面已經宣告為read only，今天又把 strC 複製給 strB，這樣會造成 strB 可以去修改 strC所指的字串(由系統提供的字串)
    /*error: invalid conversion from ‘const char*’ to ‘char*’ [-fpermissive]*/
#endif

    strC = strA;    // (const char *) = (char []) (O)，原本可讀可寫，轉成唯讀
    strC = strB;    // (const char *) = (char *)  (O)，原本可讀可寫，轉成唯讀

    cout << strA << endl;
    cout << strB << endl;
    cout << strC << endl;

    return 0;
}





