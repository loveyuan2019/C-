//2020-07-20 ��һ �糿 ��ҵ¥Сƽ�� p8 07 C++�����
//֪ʶ�������ǿ������ת��������X++�Լ�X--����������Ȳ�����

#include <iostream>
using namespace std;

int main(){
	//��������ͨ����
	//float x =10.8;
	//int y = 2;
	//cout << x/y << endl;

	//������ǿ������ת���磨int��ǿ��ת��������
	//float x =10.8;
	//int y = 2;
	//float q=x / y;
	////cout << (int)q%2 << endl; //ǿ��ת������1
	//cout << int(q) % 2 << endl; //ǿ��ת������2

	//�����������Լ�ѵ��1
	//int x = 3;
	//++x;
	//x++;
	//cout << x << endl;

	//�����������Լ�ѵ��2
	int x = 3;
	int y =x++; //��һ��X++����һ��ʽ��ʽֵ��3,��x��ֵ��3+1
	int z =++x; //��һ����X��ǰ��4����++X�󣬱�Ϊ5������5��ֵ��Z
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;

	return 0;
}