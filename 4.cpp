//定义指向指针的数组
#include <iostream>
using namespace std;
int main()
{
	const int MAX = 3;
	char * names[3] = {
		"liyibing",
		"tangningning",
		"litang",
	};
	for(int i = 0; i < MAX; i++)
	{
		cout << "the name is: " << names[i] << endl;
	}
}