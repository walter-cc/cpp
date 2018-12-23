/*
	新增編譯和執行步驟 :
	g++ ch13_class_demo4.cpp ch13_main.cpp -o main
	./main
*/


// 引入標準程式庫中相關的輸入、輸出程式
#include <iostream>

// 需引進標頭檔
#include "ch13_class_demo4.h"

// std 為標準程式庫的命名空間
using namespace std;

int main(void) {
	
	// 宣告並建立Demo型態的物件t
	Demo t1;
	Demo t2(11);
	Demo t3(11, 22);
	
	//cout 用來輸出的物件
	//endl : end of line，換行，同 '\n'
	cout << endl;			//空一行
	cout << t1.DoSomething() << endl;
	cout << t2.DoSomething() << endl;
	cout << t3.DoSomething() << endl;
	cout << endl;			//空一行

	return 0;
}





