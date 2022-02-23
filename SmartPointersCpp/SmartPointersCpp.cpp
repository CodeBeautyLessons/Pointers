#include <iostream>
#include <memory>
using namespace std;

class MyClass
{
public:
	MyClass()
	{
		cout << "MyClass constructor invoked" << endl;
	}

	~MyClass()
	{
		cout << "MyClass destructor invoked" << endl;
	}
};

int main()
{
	// shared pointers
	{
		shared_ptr<MyClass> shPtr1 = make_shared<MyClass>();
		cout << "Shared count: " << shPtr1.use_count() << endl;
		{
			shared_ptr<MyClass> shPtr2 = shPtr1;
			cout << "Shared count: " << shPtr1.use_count() << endl;
		}

		cout << "Shared count: " << shPtr1.use_count() << endl;
	}

	{
		unique_ptr<MyClass>uClassPtr1 = make_unique<MyClass>();
	}

	// weak pointers
	unique_ptr<int> unPtr1 = make_unique<int>(25);
	unique_ptr<int> unPtr2 = move(unPtr1);
	cout << *unPtr2 << endl;
	
	// null reference exception
	// cout << *unPtr1 << endl;

	//cout << unPtr1 << endl;
	//cout << *unPtr1 << endl;

	system("pause>nul");
}