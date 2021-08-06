/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :

用 「public」來繼承，衍生類別(class)所繼承而來的類別成員的存取設定保持不變。
===============================


*/

#include <iostream>      // 引入標準程式庫中相關的輸入、輸出程式
#include <cstdlib>
using namespace std;        // std : 標準程式庫的命名空間

class car {             // 宣告類別

    public:             //公用資料成員
        void go()
        {
            cout << "汽車啟動了" << endl;
        }

        void stop()
        {
            cout << "汽車熄火了" << endl;
        }
};  // 記得加上 ";"		#### 重要


class freighter: public car     // 用public來宣告衍生類別，class freighter 是繼承 car 而來。 freighter(子)，car(父)。「左子右父」
{

};      // 記得加上 ";"		#### 重要


/*
- argc : argument count(參數總和)的縮寫，代表包括指令本身的參數個數。
- argv : argument value 的縮寫。 一個陣列，它會分拆所帶的參數放到陣列內
*/
int main(int argc, char *argv[]) {

    freighter ft;	// ft 是class freighter的物件，因為繼承了car，所以可以使用go()和stop()。
                    // 用 「public」來繼承，衍生類別(class)所繼承而來的類別成員的存取設定保持不變。
    ft.stop();
    cout << "--------------------------------" << endl;

    ft.go();
    cout << "--------------------------------" << endl;

/*
cc@cpp_16_classes$g++ ch14_01_Single_Inheritance_Public.cpp -o test
cc@cpp_16_classes$./test
汽車熄火了
--------------------------------
汽車啟動了
--------------------------------
*/

    return 0;
}





