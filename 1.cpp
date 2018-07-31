#include <iostream>

using namespace std;

class classA{};	//classA空类,大小为1
class classB : public classA
{};	//classB继承空类，大小为1
class classC	//classC有大小为4B的成员变量，大小为4
{
private:
	int a;
};
class classD 	//classD有虚函数，大小为4（32位）8（64位）
{
public:
	virtual void fun(){}
};
class classE
{
public:
	virtual ~classE(){}	//classE有虚析构函数，大小为4（32位）8（64位）
};
class classF : public classC	//classF继承classC，且有一个虚函数，大小为4+4（32位）8+8（64位）,虽然classC大小只有4，但是C++向最大单位取整。
{
public:
	virtual void fun(){}
};
class classG	//classG中仅有一个实函数，因为成员函数只与类型相关，而与具体实例无关，大小为1
{
public:
	void fun(){}
};
int main(){
	cout << "sizeof(classA):" << sizeof(classA) << endl;
	cout << "sizeof(classB):" << sizeof(classB) << endl;
	cout << "sizeof(classC):" << sizeof(classC) << endl;
	cout << "sizeof(classD):" << sizeof(classD) << endl;
	cout << "sizeof(classE):" << sizeof(classE) << endl;
	cout << "sizeof(classF):" << sizeof(classF) << endl;
	cout << "sizeof(classG):" << sizeof(classG) << endl;
}

