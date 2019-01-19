/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :

衍生類別「Student」利用物件「object1」成功呼叫基礎類別「Math」「Chinese」「History」的成員。
===============================

*/

#include <iostream>	// 引入標準程式庫中相關的輸入、輸出程式
#include <cstdlib>
#include <cstring>
using namespace std; // std 為標準程式庫的命名空間


class Math			//宣告類別
{
private:				//私用資料成員
	int Math_Score;

public:					//公用資料成員

	void Math_make(int a)
	{
		Math_Score = a;
	}
	
	int Math_take()
	{
		return Math_Score;
	}
	
};				// 記得加上 ";"		#### 重要

class Chinese			//宣告類別
{
private:				//私用資料成員
	int Chinese_Score;

public:					//公用資料成員

	void Chinese_make(int b)
	{
		Chinese_Score = b;
	}
	
	int Chinese_take()
	{
		return Chinese_Score;
	}
	
};				// 記得加上 ";"		#### 重要

class History			//宣告類別
{
private:				//私用資料成員
	int History_Score;

public:					//公用資料成員

	void History_make(int c)
	{
		History_Score = c;
	}
	
	int History_take()
	{
		return History_Score;
	}
	
};				// 記得加上 ";"		#### 重要




// 多重繼承。Student(子)，Math，Chinese，Histotry(父)。「左子右父」
class Student: public Math, protected Chinese, private History 
{
private:
	int Student_Number;
	
protected:
	char Student_Name[20];
	
public:					//公用資料成員

	Student(int d, char* N)
	{
		Student_Number = d;
		strcpy(Student_Name, N);
	}
	
	void Student_C_make(int e)
	{
		Chinese_make(e);		
	}
	
	void Student_H_make(int f)
	{
		History_make(f);		
	}
	
	void show_data()
	{
		cout << "學號 = " << Student_Number << endl;
		cout << "姓名 = " << Student_Name << endl;
		cout << "數學 = " << Math_take() << endl;
		cout << "國文 = " << Chinese_take() << endl;
		cout << "歷史 = " << History_take() << endl;
	}
};				// 記得加上 ";"		#### 重要

	

int main(void) {

	Student object1(12345, "walter");	
	
	object1.Math_make(10);
	
	object1.Student_C_make(20);
	
	object1.Student_H_make(30);
	
	object1.show_data();

	
	return 0;
}





