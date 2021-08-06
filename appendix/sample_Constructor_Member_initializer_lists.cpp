/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :

類別(class)，建構子(constructor)，Constructor member initializer lists
===============================

# 參考文件 :
    C++ : (建構子)constructor, Member initializer lists
    https://www.learncpp.com/cpp-tutorial/8-5a-constructor-member-initializer-lists/

===============================
執行結果

cc@appendix$./main 
Something(1, 2.2, c)

*/

#include <iostream>	    // 引入標準程式庫中相關的輸入、輸出程式
#include <cstdlib>
using namespace std;        // std : 標準程式庫的命名空間

//#define OLD_METHOLD

#ifdef OLD_METHOLD
class Something {       //宣告類別

    private:            // 私用資料成員
        const int m_value;

    public:             // 公用資料成員
        Something()
        {
            m_value = 1; // error: const vars can not be assigned to
        } 
};

/*
# This produces code similar to the following:

const int m_value;  // error: const vars must be initialized with a value
m_value = 5;        //  error: const vars can not be assigned to

Assigning values to const or reference member variables in the body of the constructor is clearly not sufficient in some cases.    
*/

#else

//This is something that is best learned by example. Revisiting our code that does assignments in the constructor body:

class Something {       //宣告類別

    private:            // 私用資料成員
        int m_value1;
        double m_value2;
        char m_value3;

    public:             // 公用資料成員
        //The member initializer list is inserted after the constructor parameters. It begins with a colon (:), and then lists each variable to initialize along with the value for that variable separated by a comma.

        Something() : m_value1(1), m_value2(2.2), m_value3('c') // directly initialize our member variables
        {
            // No need for assignment here
        }

        void print()
        {
            cout << "Something(" << m_value1 << ", " << m_value2 << ", " << m_value3 << ")\n";
        }
};

#endif

/*
- argc : argument count(參數總和)的縮寫，代表包括指令本身的參數個數。
- argv : argument value 的縮寫。 一個陣列，它會分拆所帶的參數放到陣列內
*/
int main(int argc, char *argv[]) {

    Something something;
    something.print();      // Something(1, 2.2, c)

    return 0;
}





