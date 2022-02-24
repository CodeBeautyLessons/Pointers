#include <iostream>
#include <vector>
using namespace std;

int getNumber()
{
	return 5;
}

int add(int a, int b)
{
	return a + b;
}

bool ascendingCompare(int a, int b)
{
	return a < b;
}

bool descendingCompare(int a, int b)
{
	return a > b;
}

void sortAscending(vector<int>& numbersVector)
{
	for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
	{
		int bestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
		{
			// We are doing comparison here
			if (ascendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
			{
				bestIndex = currentIndex;
			}
		}

		swap(numbersVector[startIndex], numbersVector[bestIndex]);
	}
}

void sortDescending(vector<int>& numbersVector)
{
	for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
	{
		int bestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
		{
			// We are doing comparison here
			if (descendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
			{
				bestIndex = currentIndex;
			}
		}

		swap(numbersVector[startIndex], numbersVector[bestIndex]);
	}
}

void customSort(vector<int>& numbersVector, bool (*compareFuncPtr)(int, int))
{
	for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
	{
		int bestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
		{
			// We are doing comparison here
			if (compareFuncPtr(numbersVector[currentIndex], numbersVector[bestIndex]))
			{
				bestIndex = currentIndex;
			}
		}

		swap(numbersVector[startIndex], numbersVector[bestIndex]);
	}
}

void printNumbers(vector<int>& numbersVector)
{
	for (int i = 0; i < numbersVector.size(); i++)
	{
		cout << numbersVector[i] << ' ';
	}
	cout << endl;
}

int main()
{
	// returns address of a function
	//cout << getNumber;

	int (*funcPtr)() = getNumber;

	cout << funcPtr() << endl;

	int (*addPtr)(int a, int b) = add;

	cout << addPtr(1, 3) << endl;


	vector<int> myNumbers = { 9, 3, 4, 5, 4, 1, 5, 7, 8 };

	sortAscending(myNumbers);
	printNumbers(myNumbers);

	sortDescending(myNumbers);
	printNumbers(myNumbers);

	customSort(myNumbers, ascendingCompare);
	printNumbers(myNumbers);

	customSort(myNumbers, descendingCompare);
	printNumbers(myNumbers);

	system("pause>nul");
}