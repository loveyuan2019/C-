//2020-07-28 �糿 ��ҵ¥Сƽ��

#include<iostream>
using namespace std;

//��������������������λ�ã�����ô���������λ�ã����ܱ�ִ�С������Ҫ��main�������棬Ҫ��ǰ��������int add(int x, int y);����main�����Ϸ�
int add(int x, int y)
{
	return x + y;
}

int main(){
	int a = 2, b = 5;
	int sum = add(a, b);
	cout << "sum=" << sum << endl;
	return 0;
}

