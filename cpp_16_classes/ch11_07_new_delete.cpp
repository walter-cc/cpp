/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :

new, delte 的使用方式
===============================
# C++ 也支援「動態記憶體管理」，因此除了一般的物件建立方式，可以使用「new」和「delete」指令來做指標物件建立與釋放的工作。
  
# 以下範例示範了， 用「new」來配置一塊和「Man」類別相同大小的記憶體，並呼叫類別的建構子，然後進行初始化。

  如果記憶體配置成功，就會傳回指向這塊記憶體起始位址的指標，這時的m是一個Man型態的指標。
  
  如果記憶體配置失敗，那麼m的內容就是NULL。
  
# 當使用了這種方式建立物件時，物件並不會在生命週期結束前自動釋放，而會一直儲存在記憶體中，這時就必須使用「deleete」關鍵字來做物件釋放的動作。
  
	# e.g. :

	class Man
	{
		//class定義
	};
	  
	void main()
	{
		Man* m = new Man;
		
		delete m;
	}   
===============================
執行結果

cc@cpp_16_classes$./main 
+++++執行建構子+++++
輸入學號
學號 : 12345
輸入英文成績 : 
99
輸入數學成績 : 
98
==============
學號12345
總分是197分，平均是98.5分
-----執行解構子-----

*/


#include <iostream>	// 引入標準程式庫中相關的輸入、輸出程式
#include <cstdlib>
using namespace std; // std 為標準程式庫的命名空間

class Student       //宣告類別
{
    private:            //私用資料成員
        char StuID[8];	
        float Score_E, Score_M, Score_T, Score_A;

    public:             //公用資料成員
        Student();      //宣告預設建構子(constructor)
        ~Student();     //宣告解構子(destructor)

    void input_data();  //宣告成員函數的原型
    void show_data();
};  // 記得加上 ";"		#### 重要

Student::Student()      //constructor設定資料成員的初始值	
{
    cout << "+++++執行建構子+++++" << endl;
}

Student::~Student()     //destructor
{
    cout << "-----執行解構子-----" << endl;
}

void Student::input_data()      //實作input_data	
{
    //cout 用來輸出的物件
    //endl : end of line，換行，同 '\n'
    cout << "輸入學號" << endl;
    cout << "學號 : " ;
    cin >> StuID;

    cout << "輸入英文成績 : " << endl;
    cin >> Score_E;

    cout << "輸入數學成績 : " << endl;
    cin >> Score_M;
}

void Student::show_data()       //實作show_data	
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
	
    Student *stud1 = new Student;   //宣告class Student 的 指標物件，此時會呼叫無參數的建構

    stud1->input_data();

    stud1->show_data();

    delete stud1;						//呼叫解構子 (delete 指標的名字)


    return 0;
}





