/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :

「this」指標的宣告和使用方式。
「*this」代表目前這個物件的內容，「return *this;」代表傳回目前這個物件的內容。
===============================

# 在建立class物件時，會自動建立屬於該物件自己的指標，叫做「this」指標。

# 「this」指標指向物件自己本身，指向記憶體中儲存該物件的「位址」。
  
# 「this」指標代表了「目前這個物件」的指標，可以存取到該class的資料成員和成員函數。
  
  this->資料成員;		//第一種方式
  (*this).資料成員;		//第二種方式
  
*/

#include <iostream>	// 引入標準程式庫中相關的輸入、輸出程式
#include <cstdlib>
using namespace std; // std 為標準程式庫的命名空間

class Square			//宣告類別
{
	
private:				//私用資料成員
	int a;	
	
public:						//公用資料成員
	Square();				//宣告預設建構子(constructor)
	Square(int n);			//宣告有參數的建構子(constructor)
	
	Square squ(Square b);
	void show_data();
};							// 記得加上 ";"		#### 重要

Square::Square(int n)		//constructor使用參數設定初始值	
{
	a = n*n;
}

Square Square::squ(Square b)	
{
	this->a = this->a + b.a;	// this->a 為 n*n, b.a 為 
	
	return *this;				// 透過this指標 傳回 class Square
}

void Square::show_data()	
{
	cout << "答案" << (*this).a << endl;
}

int main(void) {

	int n1, n2;
	
	cout << "輸入第一個數字 : " ; 
	cin >> n1;
	cout << "輸入第二個數字 : " ; 
	cin >> n2;
	
	Square first(n1), second(n2), third(0);
	
	third = first.squ(second);  // 此時進入squ後， this->a 表示的是first這個物件的a成員。b.a 則為second的a成員。
	
	third.show_data();
	
	return 0;
}





