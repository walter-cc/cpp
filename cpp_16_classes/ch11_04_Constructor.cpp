/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :

類別(class)，建構子(constructor)，多載(overload)	
===============================
# 建構子(constructor)是一種「初始化」class物件的成員函數，可用於將物件內部的「私有資料成員」設定初始值。

# 解構子(Destructor)可作為物件生命周期結束時，用來釋放class所占用的記憶體，讓其他class使用。

# 當物件被建立時，會於constructor內動態配置若干記憶體，當程式結束或物件結束後並不會被自動釋放，所用destructor來釋放。

# 因為建構子也是一種「公用成員函數」，當然可以使用「範圍解析運算子(::)」來將建構子內的程式主體至於class之外。


# 建構子的四個特性 :
  
  1) 建構子名稱 = class名稱， 如 class名稱為 Student = 建構子名稱 Student
  
  2) 沒有回傳值，所以不須指定回傳型態。
  
  3) 當物件被建立時自動產生預設建構子，預設建構子並不提供參數列傳入。
  
  4) 建構子可以有多載功能，也就是一個類別內可以存在多個相同的名稱，但參數列不同的建構子。
  
  
# 解構子的四個特性 :
  
  1) 解構子不可以多載(overlaod)，一個class只有一個解構子。
  
  2) 解構子的第一個字必須是 「~」，其餘和class的名稱相同。
  
  3) 解構子不含任何「參數」和「回傳值」。
  
  4) 當物件的生命週期結束時，或是我們以「delete」將「new」配置的物件釋放時，編譯器就會自動呼叫解構子。在程式區塊結束前，所有在區塊中曾經宣告的物件，都會依照「先建構者後解構」的順序執行。  
  

# C++ 也支援「動態記憶體管理」，因此除了一般的物件建立方式，可以使用「new」和「delete」指令來做指標物件建立與釋放的工作。
  
*/

#include <iostream>	// 引入標準程式庫中相關的輸入、輸出程式
#include <cstdlib>
using namespace std; // std 為標準程式庫的命名空間

class Student			//宣告類別
{
private:				//私用資料成員
	int StuID;	
	float Score_E, Score_M, Score_T, Score_A;
	
public:					//公用資料成員
	Student();			//宣告預設建構子(constructor)
	Student(int id, float E, float M);			//宣告三個參數的建構子(constructor)
	void show_data();	//宣告成員函數的原型
	
};						// 記得加上 ";"		#### 重要

Student::Student()		//constructor設定資料成員的初始值	
{
	StuID = 920101;
	Score_E = 60;
	Score_M = 80;
}

Student::Student(int id, float E, float M)		//constructor使用參數設定初始值	
{
	StuID = id;
	Score_E = E;
	Score_M = M;
}

void Student::show_data()		//實作show_data	
{
	Score_T = Score_E + Score_M;
	Score_A = (Score_E + Score_M)/2;
	
	//cout 用來輸出的物件
	//endl : end of line，換行，同 '\n'
	cout << "==============" << endl;
	cout << "學號" << StuID << endl;
	cout << "總分是" << Score_T << "分，平均是" << Score_A << "分" << endl;
}

int main(void) {
	
	Student stud;		//宣告class Student 的物件，此時會呼叫無參數的建構
	
	stud.show_data();
	
	Student stud1(920102, 30, 40);	//宣告class Student 的物件，此時會呼叫三個參數的建構，此為多載(overload)
	
	stud1.show_data();
	
	
	return 0;
}





