#include <iostream>
using namespace std;
//��ӡHello WorldС����
int main(){
	cout << "Hello World" << endl;
	cout << "2+3=" << 2 + 3 << endl;

	//��ӡ1+2+3+������100���ܺ��Ƕ���
	int sum = 0;
	for (int idx = 1; idx <= 100; ++idx)
		sum += idx;
	cout << "1+2+3+..100=" << sum << endl;
	return 0;
}
