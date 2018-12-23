/*
	新增編譯和執行步驟 :
	g++ ch11_class_demo2.cpp -o demo
	./demo

*/

// 引入標準程式庫中相關的輸入、輸出程式
#include <iostream>

// std 為標準程式庫的命名空間
using namespace std;

// 宣告類別
class Demo{				//Demo為建構函數(constructor)
//宣告public成員
public:					//存取標籤(access label)，public成員可以在程式中的任何地方存取
	//專屬於類別的函數
	void set_a(int n);
	void set_b(int n);
	int get_a();
	int get_b();
	int DoSomething();	

//宣告private成員	
private:				//存取標籤(access label)，private成員只能在同個類別存取。
	int a;				//專屬於類別的變數
	int b;
};						//記得加上;

//實作Demo的DoSomething()成員函數
int Demo::DoSomething(){
	return get_a() + get_b();
}

void Demo::set_a(int n){
	a = n;
}

void Demo::set_b(int n){
	b = n;
}

int Demo::get_a(){
	return a;
}

int Demo::get_b(){
	return b;
}

int main(void) {
	
	// 宣告並建立Demo型態的物件t
	Demo t;
	t.set_a(11);	//直接成員變數值
	t.set_b(22);	//直接成員變數值
	
	//cout 用來輸出的物件
	//endl : end of line，換行，同 '\n'
	cout << endl;			//空一行
	cout << t.get_a() << endl;
	cout << t.get_b() << endl;
	cout << t.DoSomething() << endl;		//呼叫並印出DoSomething()的回傳值
	cout << endl;			//空一行

	return 0;
}





