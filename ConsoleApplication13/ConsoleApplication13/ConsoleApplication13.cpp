#include <iostream>
using namespace std;
int main()
{

	cout << "Enter number:";
	int number, num1, composition{ 1 }, summ{ 0 };
	cin >> number;

	if (number >= 9) 
	{
		while (number > 10)
		{
			summ += number % 10;
			composition *= number % 10;
			number /= 10; 
		}
		summ += number;
		composition *= number;
		cout << "The summ: " << summ << endl;
		cout << "The coposition" << composition << endl;
	}
	else if (number <= 0) 
	{
		cout << " ERROR " << endl;

	}
	else
	{
		cout << "Number is equal itself." << endl;
	}

	return 0;
}