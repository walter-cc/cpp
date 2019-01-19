/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :
 在「靜態繫結」的作用下，使得「衍生類別」的物件所呼叫的函數，仍然是指向「基礎類別」的同名異式函數，而非「衍生類別」的函數。

===============================
父 運輸工具 start
父 運輸工具 stop
父 運輸工具 start
父 運輸工具 stop
父 運輸工具 start
父 運輸工具 stop
*/

#include <iostream>	// 引入標準程式庫中相關的輸入、輸出程式
#include <cstdlib>
using namespace std; 	// std 為標準程式庫的命名空間



class vehicle			//宣告類別
{
public:					//公用資料成員

	void start()
	{
		cout << "父 運輸工具 start" << endl;
	}
	void stop()
	{
		cout << "父 運輸工具 stop" << endl;
	}

};				// 記得加上 ";"		#### 重要


// 繼承。aircraft(子) vehicle(父)。「左子右父」
class aircraft: public vehicle				//宣告類別
{
public:										//公用資料成員

	void start()
    {
        cout << "子 飛機 start" << endl;
    }
	void stop()	
    {
        cout << "子 飛機 stop" << endl;
    }

};				// 記得加上 ";"		#### 重要


// 繼承。car(子) vehicle(父)。「左子右父」
class car: public vehicle					//宣告類別
{
public:										//公用資料成員

	void start()
    {
        cout << "子 汽車 start" << endl;
    }
    void stop()	
	{
        cout << "子 汽車 stop" << endl;
    }

};				// 記得加上 ";"		#### 重要



int main(void) {

	vehicle* ve = new vehicle;	// 抽象基礎類別不可實體化，所以只能宣告「指標」
	aircraft af;
	car cr;
	
	ve->start();
	ve->stop();
	delete ve;
	
	ve = &af;
	ve->start();
	ve->stop();
	
	ve = &cr;
	ve->start();
	ve->stop();

	return 0;
}





