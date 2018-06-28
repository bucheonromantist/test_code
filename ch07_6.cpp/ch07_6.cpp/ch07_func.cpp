#include "ch07_func.h"

int TEST(const int a, int *b)
{
	cout << "1.TEST : " << a << endl;
	*b = 100;
	return 1;
}

int TEST(const int a)
{
	cout << "2.TEST :" << a << endl;
	return 1;
}
