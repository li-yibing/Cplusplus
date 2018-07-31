//以打印不同类型变量为例练习了函数重载
#include<iostream>
using namespace std;

class Printer
{
public:
	void print(int i)
	{
		cout << "using int printer," << i << endl;
	}
	void print(float f)
	{
		cout << "using float printer," << f << endl;
	}
	void print(char * c)
	{
		cout << "using string printer," << c << endl;
	}

};

int main()
{
	int i = 6;
	float f = 6.66;
	char c[] = "I love you!\n";
	Printer printer1;

	printer1.print(i);	//打印整形
	printer1.print(f);	//打印浮点型
	printer1.print(c);	//打印字符数组
}
