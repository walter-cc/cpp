// 需引進標頭檔
#include "ch13_class_demo4.h"

//沒有參數的建構函數(constructor)
Demo::Demo(){
	set_a(1);
	set_b(1);
}

//一個參數的建構函數(constructor)
Demo::Demo(int n1){
	set_a(n1);
	set_b(n1);
}

//兩個參數的建構函數(constructor)
Demo::Demo(int n1, int n2){
	set_a(n1);
	set_b(n2);
}

//實作Demo的DoSomething()成員函數
int Demo::DoSomething(){
	return get_a() + get_b();
}

void Demo::set_a(int n){
	a = n;
}

void Demo::set_b(int n){
	b = n;
}

int Demo::get_a(){
	return a;
}

int Demo::get_b(){
	return b;
}




