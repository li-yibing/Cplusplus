#include<iostream>
using namespace std;

class Shape	//定义形状类
{
public:
	void setWidth(double w)
	{
		width = w;
	}
	void setHeight(double h)
	{
		height = h;
	}
protected:
	double width;
	double height;
};

class Rectangle : public Shape	//从形状类继承出长方形类
{
public:
	double area;
	double getarea()
	{
		area = width * height;
		return area;
	}
};

int main()
{
	Rectangle Rectangle1;
	Rectangle1.setWidth(20.6);
	Rectangle1.setHeight(56.32);
	double area;
	area = Rectangle1.getarea();
	cout << "the area of Rectangle1 is " << area << endl;	//利用类中函数的返回值
	cout << "the Rectangle1.area is " << Rectangle1.area <<endl;	//利用类中函数与变量的传递
}
