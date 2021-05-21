#include "include.h"

void menu()
{
	char choice = '\0';

	while (true)
	{
		text();//вызов текстового меню
		
		cin >> choice;
		if (choice < '0' || choice > '3')
		{
			cout << "Error, enter type number in range from 1 to 3 to pick seminar or 0 to exit from program." << endl;
			cin >> choice;
		}
		switch (choice)
		{
		case '1':
			system("cls");
			menu_seminar3();
			break;
		case '2':
			system("cls");
			menu_seminar4();
			break;
		case '3':
			system("cls");
			seminar5();
			break;
		case '0':
			cout << "thank you for trying out the program";
			exit(0);
			break;
		default:
			cout << "Attention!!!Select the workshop number again or click 0:" << endl;
			break;
		}
	}
}