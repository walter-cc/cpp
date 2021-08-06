/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :

# 虛擬基礎類別(Vitual Base Class)

  利用關鍵字 "virtual" 使得 aircraft, car 這兩個class 共享同一個 vehicle class的資料。
  如果沒有用 "virtual" 宣告，則會造成編譯錯誤。ambiguous 模糊不清
===============================

#define VIRTUAL_ENABLE	// 決定要不要加入關鍵字 "virtual"

    爺爺 運輸工具 start
    爸爸 運輸工具 fly
    媽媽 運輸工具 go
    爸爸 運輸工具 land
    媽媽 運輸工具 stop
    爺爺 運輸工具 shutdown

#else

    會造成編譯錯誤。 ambiguous 模糊不清

    cc@cpp_16_classes$g++ ch14_10_Virtual_Base_Class.cpp -o main
    ch14_10_Virtual_Base_Class.cpp: In function ‘int main()’:
    ch14_10_Virtual_Base_Class.cpp:99:8: error: request for member ‘start’ is ambiguous
       ac.start();   //爺爺
          ^
    ch14_10_Virtual_Base_Class.cpp:35:7: note: candidates are: void vehicle::start()
    void start()
         ^
    ch14_10_Virtual_Base_Class.cpp:35:7: note:                 void vehicle::start()
    ch14_10_Virtual_Base_Class.cpp:104:8: error: request for member ‘shutdown’ is ambiguous
       ac.shutdown();     //爺爺
          ^
    ch14_10_Virtual_Base_Class.cpp:39:7: note: candidates are: void vehicle::shutdown()
    void shutdown()
         ^
    ch14_10_Virtual_Base_Class.cpp:39:7: note:                 void vehicle::shutdown()

*/

#include <iostream>	// 引入標準程式庫中相關的輸入、輸出程式
#include <cstdlib>
using namespace std;    // std 為標準程式庫的命名空間

#define VIRTUAL_ENABLE	// 決定要不要加入關鍵字 "virtual"

class vehicle   //宣告類別
{
public: //公用資料成員
    void start()
    {
        cout << "爺爺 運輸工具 start" << endl;
    }
    void shutdown()
    {
        cout << "爺爺 運輸工具 shutdown" << endl;
    }
};  // 記得加上 ";"		#### 重要


// 繼承。aircraft(子) vehicle(父)。「左子右父」
#ifdef VIRTUAL_ENABLE
class aircraft: virtual public vehicle  //宣告「虛擬基礎類別」類別
#else
class aircraft: public vehicle  //宣告類別
#endif
{
public:         //公用資料成員
    void fly()
    {
        cout << "爸爸 運輸工具 fly" << endl;
    }
    void land()
    {
        cout << "爸爸 運輸工具 land" << endl;
    }

};  // 記得加上 ";"		#### 重要


// 繼承。car(子) vehicle(父)。「左子右父」
#ifdef VIRTUAL_ENABLE
class car: virtual public vehicle   //宣告「虛擬基礎類別」類別
#else
class car: public vehicle           //宣告類別
#endif
{
public:         //公用資料成員
    void go()
    {
        cout << "媽媽 運輸工具 go" << endl;
    }
    void stop()
    {
        cout << "媽媽 運輸工具 stop" << endl;
    }

};  // 記得加上 ";"		#### 重要


// 繼承。aircar(子) aircraft(父) car(母)。「左子右父」
class aircar: public aircraft, public car   //左子右父
{
};  // 記得加上 ";"		#### 重要


int main(void) {

    aircar ac;      //孫子

    ac.start();     //爺爺
    ac.fly();       //爸爸
    ac.go();        //媽媽
    ac.land();      //爸爸
    ac.stop();      //媽媽
    ac.shutdown();  //爺爺

    return 0;
}





