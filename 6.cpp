//将指针作为函数的参数
#include <iostream>
#include <ctime>
using namespace std;

void getSeconds(int *sec);

int main()
{
	int sec;
	getSeconds(&sec);
	cout << "the Second is: " << sec <<endl;
}

void getSeconds(int *sec)
{
	*sec = time(NULL);
}