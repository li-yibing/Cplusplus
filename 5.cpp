//定义指向指针的指针
#include <iostream>
using namespace std;
int main()
{
	int var = 666;
	int *p = NULL;
	int **pp = NULL;
	p = &var;	//变量的地址给p
	pp = &p;	//p的地址给pp
	cout << "var: " << var << endl;
	cout << "*p: " << *p << endl;
	cout << "**pp: " << **pp << endl;
}