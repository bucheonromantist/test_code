#include "ch07_func.h"

int main()
{
	int kor = 90, math = 80;

	cout << "* main : kor = " << kor << endl;
	cout << "* main : math = " << math << endl;
	cout << "* main : math  = " << math << endl;
	cout << "**************" << endl;
	TEST(kor, &math);
	cout << "**********" << endl;
	TEST(math);
	cout << "***********" << endl;
	TEST();

	return 0;
}

