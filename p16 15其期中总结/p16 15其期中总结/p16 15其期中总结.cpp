//2020-07-24 ������Ϣ ӯ�λ��� 1008
//2020-07-25 �糿 ��ҵ¥Сƽ��
//С��ҵ����2/1, 3/2, 5/3, 8/5, 13/8, 21/13������еĺ�
#include <iostream>
using namespace std;

int main(){
	//����1��ˮ�ɻ������㣬��һ����λ������λ�����������͵��ڱ�������153��1��������1��5��������125��3��������27����ӵ���153
	/*int x = 234;
	int z = x % 100;
	cout << z << endl;*/
	//for (int x = 100; x <= 999; ++x)
	//{
	//	int y = x;
	//	int bai_num = y / 100;	//�õ���λ�ϵ�������234���õ�2
	//	bai_num = bai_num*bai_num*bai_num;
	//	y %= 100; //�õ�ʮλ���λ����234���õ�34

	//	int shi_num = y / 10;		//�õ�ʮλ���֣���34���õ�3
	//	shi_num = shi_num*shi_num*shi_num;		
	//	y %= 10;		//�õ���λ����34���õ�4

	//	int ge_num = y;
	//	ge_num = ge_num*ge_num*ge_num;

	//	if (bai_num + shi_num + ge_num == x)
	//	{
	//		cout << x << endl;
	//	}
	//}

	//����2���������ͼ��
	//*
	//***
	//*****
	//*******
	//*****
	//***
	//*
	for (int idx = 1; idx <= 7; idx += 2)
	{
		for (int jdx = 0; jdx < idx; ++jdx)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int idx = 5; idx >= 1; idx -= 2)
	{
		for (int jdx = 0; jdx < idx; ++jdx)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}