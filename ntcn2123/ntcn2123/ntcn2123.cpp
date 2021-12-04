#include <iostream>
#include <string>
using namespace std;
void pr(char*, int, int, char*, int);
char y[10], x[100];
int main()
{
	setlocale(LC_ALL, "Rus");
	int i, in, ik, l;
	cout << "Введите число заменяемых элементов: ";
	cin >> l;
	cout << "текст для замены:";
	cin >> y;
	cout << "Введите массив: ";
	cin.get(x, 100, '.');
	cout << x;
	i = 0;
	in = 0;
	ik = 0;
	while (*(x + i)) {
		if (*(x + i) == '\n') {
			ik = i - 1;
			pr(x, in, ik, y, l);
			in = i + 1;
		}
		i++;
	}
	cout << x << endl;

	return 0;
}
void pr(char* c, int d, int e, char* z, int n) {
	int j;
	for (j = d; j <= e; j++) {
		if (j - d < n)
			*(c + j) = *(z + (j - d));
	}
	cout << y;
}