//2020-07-26 �����գ��糿 ��ҵ¥Сƽ�� 

#include<iostream>
using namespace std;



//����1��û�в�����û�з���ֵ
//void print_mes()
//{
//	cout << "hello world" << endl;
//}

//����2���������������з���ֵ
//int add(int x, int y)
//{
//	return x + y;
//}

//����3�������ĵ���
int add(int x, int y)	/*С�����������β�*/
{
	int sum = x+y;
	return sum;
}
int main(){
	int sum1=add(2, 4);		/*С����������ʵ��*/
	cout << "sum1��ֵ�ǣ�" << sum1 << endl;
	return 0;
}