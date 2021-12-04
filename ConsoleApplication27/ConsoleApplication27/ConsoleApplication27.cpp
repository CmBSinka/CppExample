#include <locale.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <Windows.h>
using namespace std;
int main()
{
	static const TCHAR* myTitle = TEXT("Привет"); // Название приложения

	SetConsoleTitle(myTitle);
	int sum = NULL, com = 1, x;
	while (true)
	{
		cout << "Enter number: " << endl;
		cin >> x;
		if (x > 0)
		{
			com *= x;
		}
		else
		{
			if (sum != NULL && x < sum) break;
		}
		sum += x;
	}
	cout << com << endl;
	system("pause");
}