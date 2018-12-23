// Demo類別的標頭檔
// 僅有Demo類別的宣告
class Demo{				//Demo為建構函數(constructor)，建構函數沒有回傳值
//宣告public成員
public:					//存取標籤(access label)，public成員可以在程式中的任何地方存取
	//建構函數(constructor)，主要是用來設定資料成員，譬如a,b
	Demo();					
	Demo(int);			//多個參數的建構函數(constructor)，叫做多載函數(overloaded function)
	Demo(int, int);		//多個參數的建構函數(constructor)，叫做多載函數(overloaded function)
	//專屬於類別的函數
	void set_a(int);
	void set_b(int);
	int get_a();
	int get_b();
	int DoSomething();	

//宣告private成員	
private:				//存取標籤(access label)，private成員只能在同個類別存取。
	int a;				//專屬於類別的變數
	int b;
};						//記得加上;




