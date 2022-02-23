#include <iostream>
using namespace std;

int main()
{
	int n = 5;
	cout << &n << endl;
	int* ptr = &n;

	cout << ptr << endl;
	cout << *ptr << endl;

	// Pointer de-referencing. n will change it value to 10
	*ptr = 10;

	cout << ptr << endl;
	cout << *ptr << endl;
	cout << n << endl;
	cout << &n << endl;

	// Pointer must be initialized
	int v;
	int* ptr2 = &v;
	*ptr2 = 7;
	cout << "v = " << v << endl;

	system("pause > 0");

	return 0;
}