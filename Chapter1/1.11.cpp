/*
 *	提示用户输入两个整数,然后打印出这两个整数指定范围内的所有整数
 *
 */

#include <iostream>

using namespace std;


int main(void)
{	int i, j;

	cout << "Please Enter two integer:" << endl;
	cin >> i >> j;

	while (j >= i)
	{
		cout << i << endl;
		i++;
	}

	return 0;
}
