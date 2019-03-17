/*
	新增編譯和執行步驟 :
	g++ hello.cpp -o hello
	./hello
===============================
# 此範例可以看到 :

從前面的資料開始到最後的資料為止，一筆一筆地指示資料 
===============================
顯示結果 :

cc@15$./test 
請問要輸入幾個整數資料？
5
請輸入整數。
2
最前面的資料 : 2
最尾端的資料 : 2
請輸入整數。
4
最前面的資料 : 2
最尾端的資料 : 4
請輸入整數。
6
最前面的資料 : 2
最尾端的資料 : 6
請輸入整數。
8
最前面的資料 : 2
最尾端的資料 : 8
請輸入整數。
10
最前面的資料 : 2
最尾端的資料 : 10
顯示結果。
2-4-6-8-10-
*/

#include <iostream>     // 引入標準程式庫中相關的輸入、輸出程式
#include <vector>       // 引入標頭檔 <vector>
using namespace std;      // std 為標準程式庫的命名空間

int main()
{
   int num;
   vector<int> vt;      // 將vector template class 設定為int型態

   cout << "請問要輸入幾個整數資料？\n";
   cin >> num;

   for(int i=0; i<num;i++){
      int data;
      cout << "請輸入整數。\n";
      cin >> data;
      vt.push_back(data);           // 追加到向量的尾端
      cout << "最前面的資料 : " << *vt.begin() << endl;       // 顯示目前最前端的資料
      cout << "最尾端的資料 : " << *(vt.end()-1) << endl;     // 顯示目前最尾端的資料
   }

   cout << "顯示結果。\n";
   vector<int>::iterator it = vt.begin();   // iterator為class，可以一個一個地址是檔案。讓it = 最前端的資料
   while(it != vt.end()){                   // 如果it != 最尾端的資料
      cout << *it;
      cout << "-";
      it++;
   }
   cout << "\n";
}





