/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :

將add_score()宣告為Class Student的「朋友函數」，並利用 add_score() 來存取class中的私有資料
===============================

# 在class中可以利用「friend」關鍵字宣告函數的原型，稱為class的「朋友函數」。

# 「朋友函數」雖然不是class中的成員，但它可以直接使用class的「任何資料」，就好像把此函數當成是class的成員函數一樣，給予存取class內的私有成員的權力。

# 宣告class的朋友函數可以在class內部的任何位置，但通常是在class內的「首行」。
  
*/

#include <iostream>	// 引入標準程式庫中相關的輸入、輸出程式
#include <cstdlib>
using namespace std; // std 為標準程式庫的命名空間

class Student			//宣告類別
{
	friend float add_score(Student);	//宣告 add_score() 為 class Student 的朋友函數。
		
private:				//私用資料成員
	int StuID;	
	float Score_E, Score_M, Score_T;
	
public:											//公用資料成員
	Student();									//宣告預設建構子(constructor)
	Student(int id, float E, float M);			//宣告三個參數的建構子(constructor)
	
};						// 記得加上 ";"		#### 重要

Student::Student(int id, float E, float M)		//constructor使用參數設定初始值	
{
	StuID = id;
	Score_E = E;
	Score_M = M;
	Score_T = Score_E + Score_M;
	
	//cout 用來輸出的物件
	//endl : end of line，換行，同 '\n'
	cout << "==============" << endl;
	cout << "學號" << StuID << endl;
	cout << "總分是" << Score_T << "分" << endl;
}

float add_score(Student a)		// #### 物件傳值呼叫(call by value)
{
	a.Score_T += 30;
	
	return a.Score_T;
}


int main(void) {

	Student stud1(920101, 80, 90);
	
	cout << "加30分後，總分是 : " << add_score(stud1) << "分" << endl;
	
	
	return 0;
}





