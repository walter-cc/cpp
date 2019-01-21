/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :

類別(class)，建構子(constructor)，Constructor member initializer lists
===============================
Something(1, 2.2, c)


# 參考文件 :
  C++ : (建構子)constructor, Member initializer lists
  https://www.learncpp.com/cpp-tutorial/8-5a-constructor-member-initializer-lists/
  
*/

#include <iostream>	// 引入標準程式庫中相關的輸入、輸出程式
#include <cstdlib>
using namespace std; // std 為標準程式庫的命名空間

class Something
{
private:
    int m_value1;
    double m_value2;
    char m_value3;
 
public:

//The member initializer list is inserted after the constructor parameters. It begins with a colon (:), and then lists each variable to initialize along with the value for that variable separated by a comma.

    Something(int value1, double value2, char value3='c')
        : m_value1(value1), m_value2(value2), m_value3(value3) // directly initialize our member variables
    {
    // No need for assignment here
    }
 
    void print()
    {
         cout << "Something(" << m_value1 << ", " << m_value2 << ", " << m_value3 << ")\n";
    }
 
};


int main(void) {
	
	Something something(1, 2.2); // value1 = 1, value2=2.2, value3 gets default value 'c'
    something.print();

	return 0;
}





