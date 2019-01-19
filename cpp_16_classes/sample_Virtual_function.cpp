/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :

# 「早期繫結」（Early binding）、「靜態繫結」（Static binding）: 
  
  在編譯時就可以決定函式的呼叫對象，它們的呼叫位址在編譯時就可以得知。 

# 晚期繫結」（Late binding）、「動態繫結」（Dynamic binding） : 

  必須在執行時期才會得知所要調用的物件或其上的公開介面。
  
# 一個基底類別的物件指標，可以用來指向其衍生類別物件而不會發生錯誤，例如若基底類別是Foo1，而衍生類別是Foo2，則 下面這個指定是可以接受的： 
  
  Foo1 *fptr; 
  Foo2 f2; 
  fptr = &f2;
  
===============================
# 參考文件 :
  虛擬函式（Virtual function）
  https://openhome.cc/Gossip/CppGossip/VirtualFunction.html
*/

#include <iostream>	// 引入標準程式庫中相關的輸入、輸出程式
#include <cstdlib>
using namespace std; 	// std 為標準程式庫的命名空間

#define VIRTUAL_ENABLE	// 決定要不要加入關鍵字 "virtual" 

class walter			//宣告類別
{
public:					//公用資料成員

#ifdef VIRTUAL_ENABLE
    virtual void show()
#else
    void show()
#endif
    {
        cout << "walter" << endl;
    }
	
};				// 記得加上 ";"		#### 重要


// 繼承。tiana(子) walter(父)。「左子右父」
class tiana: public walter 
{
public:					//公用資料成員

#ifdef VIRTUAL_ENABLE
    virtual void show()
#else
    void show()
#endif
    {
        cout << "tiana" << endl;
    }
};								// 記得加上 ";"		#### 重要

void showPt(walter* pt)			// 傳址呼叫，call by address
{
    pt->show();
}

void showRef(walter &ref)		// 傳參考呼叫，call by reference, 跟傳址呼叫一樣是將物件名字的address讀取出來
{
    ref.show();
}

int main(void) {
/*   	
    int i, a[4] = {0,1,2,3};
  
    for(i = 0;i < 4;i++)
    {
        cout << a[i];						// 0123
    }
    cout << endl;
    cout << "a=" << a << endl;				//a[0]'s address	 a=0x7fff212e1580
    cout << "&a=" << &a << endl;			//a[0]'s address	&a=0x7fff212e1580
    cout << "*a=" << *a << endl;			//a[0]'s value		*a=0
    cout << "*(a+1)=" << *(a+1) << endl;	//a[0]'s address + 1 = a[1]'s value		*(a+1)=1
*/  

	walter wa;
    tiana ta;

	//=====================================
    //static binding
	//=====================================
    wa.show();				// #ifdef VIRTUAL_ENABLE -> walter, #else -> walter
    ta.show();            	// #ifdef VIRTUAL_ENABLE -> tiana,  #else -> tiana
    
	//=====================================
    //dynamic binding		// 傳址呼叫，call by address
	//=====================================
    showPt(&wa);        	// #ifdef VIRTUAL_ENABLE -> walter, #else -> walter
	
	//一個基底類別的物件指標，可以用來指向其衍生類別物件而不會發生錯誤
    showPt(&ta);        	// #ifdef VIRTUAL_ENABLE -> tiana,  #else -> walter
    
	//=====================================
    //dynamic binding		// 傳參考呼叫，call by reference, 跟傳址呼叫一樣是將物件名字的address讀取出來
	//=====================================
    showRef(wa);        	// #ifdef VIRTUAL_ENABLE -> walter, #else -> walter
	
	//一個基底類別的物件指標，可以用來指向其衍生類別物件而不會發生錯誤
    showRef(ta);        	// #ifdef VIRTUAL_ENABLE -> tiana,  #else -> walter
 
	
	return 0;
}





