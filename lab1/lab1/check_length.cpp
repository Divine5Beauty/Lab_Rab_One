#include "include.h"

int check_length(int a)
{
	while (!(cin >> a) || (cin.peek() != '\n'))// проверка на ввод и на то что числа не €вл€ютс€ символом
	{
		system("cls");// очищение надписей до сюда
		cin.clear();
		while (cin.get() != '\n'  );
		{
			cout << "Error!\nEnter an lenght " << endl;
		}
	}
	return a;
}