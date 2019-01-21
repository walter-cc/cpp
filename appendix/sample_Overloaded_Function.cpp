/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :

# C++支援函式「重載」（Overload），這種機制為類似功能的函式提供了統一的名稱，但是根據參數列個數或型態的不同，而自動呼叫對應的函式。

# 函式過載的功能使得程式設計人員能較少苦惱於函式名稱的設計，以統一的名稱來呼叫相同功能但實際提供的資料不同的函式。
  
===============================
# 參考文件 :
  重載函式（Overloaded function）
  https://openhome.cc/Gossip/CppGossip/OverloadedFunction.html
  
引數：10
引數：20	30
double 引數：10.5
*/

#include <iostream>	// 引入標準程式庫中相關的輸入、輸出程式
#include <cstdlib>
using namespace std; 	// std 為標準程式庫的命名空間

void showpara(int); 
void showpara(int, int); 
void showpara(double); 

void showpara(int x) 
{ 
    cout << "引數：" << x 
         << endl; 
} 

void showpara(int x, int y) 
{ 
    cout << "引數：" << x 
         << "\t" << y 
         << endl; 
}

void showpara(double x) 
{ 
    cout << "double 引數：" << x 
         << endl; 
} 

int main() 
{ 

    showpara(10); 
    showpara(20, 30); 
	showpara(10.5);
	
	
    return 0; 
} 





