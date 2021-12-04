#include <iostream>
using namespace std;
int main()
{

	cout << "Enter numbers: ";
	float a, b, sum, num1;
	cin >> a >> b;
	sum = 0;
	if (a < b)
	{

		for (num1 = a; num1 <= b; num1++)
		{
			sum = sum + num1 * num1;
		}

		cout << "Amount: " << sum << endl;

	}
	else 
	{
		cout << " ERROR " << endl;
	}
}