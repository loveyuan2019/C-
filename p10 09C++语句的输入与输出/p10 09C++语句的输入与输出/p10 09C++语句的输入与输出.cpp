//2020-07-21 ���ڶ� �糿 ��ҵ¥Сƽ��
// ����cin�����cout��ʹ�� �����ǵ����ٲ���һ��������������
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	//������cout��ʹ��
	//int a = 3; int b = 4;
	//cout << a << b << endl;

	//������cin��ʹ��
	//int a = 0; int b = 0;
	//cin >> a >> b  ; //����1�����ⲻ��д��cin >>a ,b;
	//cin >> a;	//����2
	//cin >> b;	//����2
	//cout << a << b << endl;

	//����һ����Ҫ������С�������λ����Ҫ��ӡ����λС����
	cout << fixed << setprecision(2) << endl;  //���������setprecisionʱ���Შ�ˣ��Ҽ���refactor,add include���ͷ�ļ�
	float c = 2.1;
	cout << c <<endl ;
	return 0;
}