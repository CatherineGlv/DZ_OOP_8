#include <iostream>
using namespace std;

class MyException 
{
private:
	char message[256];
public:
	const char* get() 
	{
	return message;
	}
};

double divide(int a, int b) 
{
	if (b == 0) 
	{
		throw MyException("Division by zero"); // проблема с этим
	}
	return a / b;
}

int main()
{
	cout << "Enter a number 1: ";
	int c;
	cin >> c;
	
	cout << "Enter a number 2: ";
	int d;
	cin >> d;

	try
	{
		double x = divide(c, d);
	}
	catch (MyException& e)
	{
		cout << e.get();
		throw e;
	}
}