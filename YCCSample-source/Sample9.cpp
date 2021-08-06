/*===============================
執行結果

cc@YCCSample-source$g++ Sample9.cpp -o test
cc@YCCSample-source$./test 
請輸入第1個整數：
5
請輸入第2個整數：
7
最大值為7。


===============================
# 參考文件 :



===============================*/

#include <iostream>	// 引入標準程式庫中相關的輸入、輸出程式
#include <cstdlib>
using namespace std;    // std 為標準程式庫的命名空間

//max函數的定義 : inline 函數
inline int max(int x, int y) {if(x>y) return x; else return y;}

int main()
{
    int num1, num2, ans;

    cout << "請輸入第1個整數：\n";
    cin >> num1;

    cout << "請輸入第2個整數：\n";
    cin >> num2;

    ans = max(num1, num2);

    cout << "最大值為" << ans << "。\n";

    return 0;
}

