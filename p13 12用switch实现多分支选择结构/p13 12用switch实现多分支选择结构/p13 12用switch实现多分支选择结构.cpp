//2020-07-23 ������ �糿 ��ҵ¥Сƽ�� 

#include<iostream>
using namespace std;

int main(){

	//����1������0-6�������Ӧ�����ڣ����������ĩ��if�����ʵ��
	int x = 0;
	cout << "����������" << endl;
	cin >> x;
	/*if (x == 1)
	{
		cout << "����������һ" << endl;
	}
	if (x == 2)
	{
		cout << "���������ڶ�" << endl;
	}
	if (x == 3)
	{
		cout << "������������" << endl;
	}
	if (x == 4)
	{
		cout << "������������" << endl;
	}
	if (x == 5)
	{
		cout << "������������" << endl;
	}
	if (x == 5)
	{
		cout << "������������" << endl;
	}
	if (x == 6)
	{
		cout << "������������" << endl;
	}
	if (x == 0)
	{
		cout << "������������" << endl;
	}*/

	//����2������0-6�������Ӧ�����ڣ����������ĩ��switch�����ʵ��,���û��break,�������2������ʾ���ڶ����Ժ�ģ���������switch
	switch (x)
	{
	case 0:
		cout << "������������" << endl;
		cout << "����������ĩ" << endl;
		break;
	case 1:
		cout << "����������һ" << endl;
		break;
	case 2:
		cout << "���������ڶ�" << endl;
		break;
	case 3:
		cout << "������������" << endl;
		break;
	case 4:
		cout << "������������" << endl;
		break;
	case 5:
		cout << "������������" << endl;
		break;
	case 6:
		cout << "������������" << endl;
		cout << "����������ĩ" << endl;
		break;
	default:
		cout << "���������������" << endl;
	}
	return 0;
}