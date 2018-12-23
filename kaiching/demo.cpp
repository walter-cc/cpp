/*
	新增編譯和執行步驟 :
	g++ demo.cpp -o demo
	./demo

*/

// 引入標準程式庫中相關的輸入、輸出程式
#include <iostream>

// std 為標準程式庫的命名空間
using namespace std;

// 引入標準程式庫中相關的字串程式
#include <string>

int main(void) {
	
	// 下面建立名稱為 m ， string 型態的物件
	// 小括弧為 string 的建構子
	// 雙引號為字串字面常數
	string m( "There is no spoon." );
	
	//cout 用來輸出的物件
	//endl : end of line，換行，同 '\n'
	cout << endl;			//空一行
	cout << m << endl;		//印出字串m
	cout << endl << endl;	//空二行
	
	return 0;
}





