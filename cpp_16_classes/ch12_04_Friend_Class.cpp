/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :

將 Class Student 宣告為 Class Teacher 的「朋友類別」，並 Student 中呼叫 Teacher 的成員函數來指定 tName的內容值。
===============================

# 「朋友類別」可以直接存取該類別中，設為 private or protected 的資料成員。
  
  # e.g. :
  
  class A
  {
	  friend class B; 	//宣告「朋友類別」B
	  
	  //class A 的成員
  }
  
  class B
  {
	  //class B 的成員
  }
  
*/

#include <iostream>	// 引入標準程式庫中相關的輸入、輸出程式
#include <cstring>
using namespace std; // std 為標準程式庫的命名空間

class Teacher			//宣告類別
{
	friend class Student;	//宣告 class Student 為 class Teacher 的 「朋友類別」
		
private:				//私用資料成員
	char tName[10];
	
public:					//公用資料成員
	//Teacher();			//宣告預設建構子(constructor)	#### 重要，這個建構子設定了會有問題，需mark，不知道為什麼?????
	void teach(int ID);
	
};						// 記得加上 ";"		#### 重要

void Teacher::teach(int ID)
{
	if(ID == 1)
	{
		strcpy(tName, "Walter");
	}
	else
	{
		strcpy(tName, "John");
	}
	
}

class Student			//宣告類別
{
private:				//私用資料成員
	int StuID, Select_C;	
	float Score_E, Score_M, Score_T;
	
public:								//公用資料成員
	Student();						//宣告預設建構子(constructor)
	Student(int id, int C);			//宣告2個參數的建構子(constructor)

};									// 記得加上 ";"		#### 重要

Student::Student(int id, int C)		//constructor使用參數設定初始值	
{
	StuID = id;
	Select_C = C;

	cout << "學號" << StuID << endl;
	cout << "課程編號" << Select_C << endl;

	Teacher t;					// 因為 class Student 為 class Teacher 的 「朋友類別」，所以 Student 可以存取 Teacher的成員
	t.teach(Select_C);			// 呼叫 class Teacher 的 teach函數指定tName的內容

	cout << "授課教授" << t.tName << endl;
}



int main(void) {

	Student stud1(920101, 1);
	Student stud2(920102, 2);
	
	
	return 0;
}





