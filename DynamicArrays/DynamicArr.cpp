#include <iostream>
using namespace std;

int main()
{
	int myArray[5];

	int size;
	cout << "Size: ";
	cin >> size;

	// int myUserSizedArray[size]; - won't work size must be const

	// new allocated memory
	int* myUserSizedArray = new int[size];

	for (int i = 0; i < size; i++)
	{
		cout << "Array[" << i << "]";
		cin >> myUserSizedArray[i];
	}

	for (int i = 0; i < size; i++)
	{
		//cout << myUserSizedArray[i] << "  ";
		cout << *(myUserSizedArray + i) << " ";
	}

	delete[]myUserSizedArray;
	myUserSizedArray = NULL;

	system("pause>0");
}