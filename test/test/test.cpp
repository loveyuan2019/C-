//2020-07-22 ������ �糿 ��ҵ¥Сƽ��
//���󣬸��������1-7���֣������Ӧ������

#include <iostream>
using namespace std;

int main(){
	int ask ; 
	cout << "����������1~7" << endl;
	cin >> ask;
	if (ask == 1)
	{
		cout << "monday" << endl;
	}
	else if (ask == 2)
	{
		cout << "tuesday" << endl;
	}
	else if (ask == 3)
	{
		cout << "wednesday" << endl;
	}
	else if (ask == 4)
	{
		cout << "thursday" << endl;
	}
	else if (ask == 5)
	{
		cout << "friday" << endl;
	}
	else if (ask == 6)
	{
		cout << "saturday" << endl;
	}
	else if (ask == 7)
	{
		cout << "sunday" << endl;
	}
	else 
	{
		cout << "�����������������" << endl;
	}
	return 0;
}