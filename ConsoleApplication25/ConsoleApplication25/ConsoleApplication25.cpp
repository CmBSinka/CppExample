#include <iostream>
using namespace std;
int main()
{
	cout << " Enter your name: " << endl;
	string name;
	cin >> name;

	cout << " Hello, " << name << ". Enter your command: " << endl;
	bool programm = { true };
	string command;
	while (programm == true)
	{
		cin >> command;

		bool programm = { true };

		if (command == "Help" || command == "help")
		{
			cout << "All commands: Help, cout, go, back, exit." << endl;
			cout << " Continue? " << endl;
			string otvet;
			cin >> otvet;
			if (otvet == "Yes" || otvet == "yes")
			{
				programm = { true };
			}
			else (otvet == "No" || otvet == "no");
			{
				programm = { false };
			}
		}

		if (command == "cout" || command == "Cout")
		{
			cout << "What do you need cout?" << endl;
			string coutt;
			cin >> coutt;
			cout << coutt;
			cout << " Continue? " << endl;
			string otvet;
			cin >> otvet;
			if (otvet == "Yes" || otvet == "yes")
			{
				programm = { true };
			}
			else (otvet == "No" || otvet == "no");
			{
				programm = { false };
			}
		}
		if (command == "Go" || command == "go")
		{
			cout << "Where do you need go?" << endl;
			string go;
			cin >> go;
			cout << " You are now: " << go << endl;
			cout << " Continue? " << endl;
			string otvet;
			cin >> otvet;
			if (otvet == "Yes" || otvet == "yes")
			{
				programm = { true };
			}
			else (otvet == "No" || otvet == "no");
			{
				programm = { false };
			}
		}

		if (command == "Back" || command == "back")
		{
			cout << "Where do you need back?" << endl;
			string back;
			cin >> back;
			cout << " You are now: " << back << endl;
			cout << " Continue? " << endl;
			string otvet;
			cin >> otvet;
			if (otvet == "Yes" || otvet == "yes")
			{
				programm = { true };
			}
			else (otvet == "No" || otvet == "no");
			{
				programm = { false };
			}
		}

		if (command == "Exit" || command == "exit")
		{
			programm = { false };
		}
	}
}

