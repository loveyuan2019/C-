//2020-07-22 星期三 早晨 林业楼小平房
//逻辑运算符：与、或、非
//小作业 int x = 3; int y = 5; 都为真，那么 !x||y是为真还是为假，优先级是怎样的? 实际是非与或，最高的是非

#include<iostream>
using namespace std;

int main(){
	//案例1，判断输入的年龄输出相应的语句，如是不是小男孩
	//int age;
	//cin >> age;

	//if (age >=1) //age大于1  //案例1**********
	//{
	//	if (age <= 18) //age小于18
	//	{
	//		cout << "张三是个小男孩" << endl;
	//	}
	//}

	//案例2，判断输入的年龄输出相应的语句，如是不是小男孩
	//if (age >= 1 && age <= 18) //案例2，使用与运算符***************
	//{
	//	cout << "张三是个小男孩" << endl;
	//}

	//案例3，判断输入的年龄输出相应的语句，大于50或者小于18的输出语句
	//if (age >= 1 && age <= 18 || age>=50) //案例3，使用或运算符***************
	//{
	//	cout << "张三是个老幼" << endl;
	//}

	//案例4，判断输入的年龄输出相应的语句，XXX的输出语句
	//if (!(age==18)) //案例3，使用非运算符***************
	//{
	//	cout << "张三不是18岁" << endl;
	//}


	//案例5，判断
	//int x = 5;
	//if (!x) //案例3，使用非运算符 判断x是不是为真
	//{
	//	cout << "看能不能输出" << endl;
	//}

	//案例6，判断哪个 变量数大，然后输出哪个,冒号运算符,比if else 执行效率高很多
	int x = 8 , y = 6;
	int z = x > y ? x : y;			//表达式一 ？ 表达式二：表达式三 ，二和三是并列关系
	{
		cout << "最大值是：" << z << endl;
	}
	return 0;
}