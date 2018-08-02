//函数返回指针
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int * getRandom(const int num);

int main()
{
	const int num = 10;
	int * p = NULL;
	int var[num];	//b不能用数组首地址作为指针的接收变量，因为数组首地址是常亮，不能赋值
	p = getRandom(num);
	for(int i = 0; i < num; i++)
	{
		var[i] = *(p + i);
		cout << "the random number: " << var[i] << endl;
	}
}

int * getRandom(const int num)
{
	static int arr[100];	//将变量放在静态区，扩大有效范围。必须在初始确定数组大小
	srand((unsigned)time(NULL));
	for(int i = 0; i < num; i++)
	{
		arr[i] = rand();
		cout << "arr[" << i <<"] is: " << arr[i] << endl;
	}
	return arr;
}