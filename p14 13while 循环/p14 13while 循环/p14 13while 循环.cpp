//2020-07-23 ������ �糿 ��ҵ¥Сƽ��

#include<iostream>
using namespace std;

int main(){
	//����1��ʵ��1-100���ۼӣ���while ���
	/*int x = 1,sum = 0;
	while (x <= 100)
	{
		sum += x;
		x++;
	}
	cout << "1+2+3+...=" << sum << endl;*/

	//����2��ʵ��1-100���ۼӣ���do while ���
	int x = 1, sum = 0;
	do 
	{
		sum += x;
		x++;
	} while (x<=100);
	cout << "1+2+3+...=" << sum << endl; 


	return 0;
}