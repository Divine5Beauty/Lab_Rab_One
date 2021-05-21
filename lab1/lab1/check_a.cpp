#include "include.h"

int check_a(int a)
{
	while (!(cin >> a) || (cin.peek() != '\n'))
	{
		system("cls");
		cin.clear();
		while (cin.get() != '\n');//ждем ввод правильных данных
		{
			cout << "Error!\nEnter an integer " << endl; 
		}
	}
	return a;
}