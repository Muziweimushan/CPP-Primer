/*
 *
 *	编写程序从cin读取一组数,输出它们的和
 *
 */

#include <iostream>

int main(void)
{
	long long sum = 0;
	int value = 0;

	/*按下ctrl+d结束循环,在windows下是ctrl+z*/
	while (std::cin >> value)
	{
		sum += value;
	}

	std::cout << "sum = " << sum << std::endl;

	return 0;
}
