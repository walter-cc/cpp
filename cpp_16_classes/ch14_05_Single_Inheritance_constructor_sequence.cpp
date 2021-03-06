/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :

在單一繼承關係中，衍生類別物件的建構子，解構子「呼叫順序」。
===============================
呼叫基礎類別建構子
呼叫衍生類別建構子
呼叫衍生類別解構子
呼叫基礎類別解構子
*/

#include <iostream>	// 引入標準程式庫中相關的輸入、輸出程式
#include <cstdlib>
using namespace std; // std 為標準程式庫的命名空間


class stclass			//宣告類別
{
public:					//公用資料成員

	stclass()			//建構子
	{
		cout << "呼叫基礎類別建構子"<< endl;
	}
	
	~stclass()			//建構子
	{
		cout << "呼叫基礎類別解構子"<< endl;
	}
	
};				// 記得加上 ";"		#### 重要


// 繼承。Student(子)，stclass(父)。「左子右父」
class Student: public stclass 
{
public:					//公用資料成員

	Student()			//建構子
	{
		cout << "呼叫衍生類別建構子"<< endl;
	}
	
	~Student()			//建構子
	{
		cout << "呼叫衍生類別解構子"<< endl;
	}
};				// 記得加上 ";"		#### 重要

	

int main(void) {

	Student object1;

	
	return 0;
}





