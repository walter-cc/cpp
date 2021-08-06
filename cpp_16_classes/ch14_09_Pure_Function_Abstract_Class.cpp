/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :

  正確的使用 純虛擬函數 和 抽象基礎類別，對程式本身的可攜性和擴充性具有相當大的影響力。

# 純虛擬函數 (Pure Virtual Fuction) :

  最主要的功能是保留「函數介面」。


# 抽象基礎類別 (Abstract Class) :

  擁有一個或多個「純虛擬函數」的基礎類別就叫做「抽象基礎類別」。
  因為純虛擬函數無法在 單一類別 或 衍生類別中宣告，只能存在於 擁有繼承關係的基礎類別中，所以這種基礎類別我們叫它「抽象基礎類別」。
  抽象基礎類別不可實體化，所以只能宣告「指標」。

# 當衍生類別繼承了抽象基礎類別後，必須在衍生類別中「重新定義」和「實作」所繼承的純虛擬函數。
===============================
子 飛機 start
子 飛機 stop
子 汽車 start
子 汽車 stop
*/

#include <iostream>	// 引入標準程式庫中相關的輸入、輸出程式
#include <cstdlib>
using namespace std; 	// std 為標準程式庫的命名空間



class vehicle   //宣告類別， 抽象基礎類別 (Abstract Class)
{
public:     //公用資料成員
	virtual void start() = 0;		// 純虛擬函數 start
	virtual void stop() = 0;		// 純虛擬函數 stop
};      // 記得加上 ";"		#### 重要


// 繼承。aircraft(子) vehicle(父)。「左子右父」
class aircraft: public vehicle  //宣告類別
{
public:                     //公用資料成員
    virtual void start()    // 「實作」所繼承的純虛擬函數 start。  (關鍵字 virtual 可省略)
    {
        cout << "子 飛機 start" << endl;
    }
    virtual void stop()     // 「實作」所繼承的純虛擬函數 stop。  (關鍵字 virtual 可省略)
    {
        cout << "子 飛機 stop" << endl;
    }
};      // 記得加上 ";"		#### 重要


// 繼承。car(子) vehicle(父)。「左子右父」
class car: public vehicle       //宣告類別
{
public:                     //公用資料成員
    virtual void start()    // 「實作」所繼承的純虛擬函數 start。  (關鍵字 virtual 可省略)
    {
        cout << "子 汽車 start" << endl;
    }
    virtual void stop()     // 「實作」所繼承的純虛擬函數 stop。  (關鍵字 virtual 可省略)
    {
        cout << "子 汽車 stop" << endl;
    }
};  // 記得加上 ";"		#### 重要



int main(void) {

    vehicle* ve;    // 抽象基礎類別不可實體化，所以只能宣告「指標」
    aircraft af;
    car cr;

    ve = &af;
    ve->start();
    ve->stop();

    ve = &cr;
    ve->start();
    ve->stop();

    return 0;
}





