#include <iostream>
using namespace std;

//swap��ƪ��ŧi
void swap(int* pX, int* pY);

int main()
{
   int num1 = 5;
   int num2 = 10;

   cout << "�ܼ�num1���Ȭ�" << num1 << "�C\n";
   cout << "�ܼ�num2���Ȭ�" << num2 << "�C\n";
   cout << "�N�ܼ�num1�Pnum2���ȶi��洫�C\n";

   swap(&num1, &num2);

   cout << "�ܼ�num1���s�Ȭ�" << num1 << "�C\n";
   cout << "�ܼ�num2���s�Ȭ�" << num2 << "�C\n";

   return 0;
}

//swap��ƪ��w�q
void swap(int* pX, int* pY)
{
   int tmp;

   tmp = *pX;
   *pX = *pY;
   *pY = tmp;
}
