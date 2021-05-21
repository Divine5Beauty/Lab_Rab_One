#include "Include.h"

void main_seminar3(int lenght, double* Array)
{
	char choice = '\0';
	while (true)
	{
		cout << "Choose what do you want to start." << endl << "Write \n1 to start search for the maximum element, \n2 to start search for the sum of array elements up to the last positive element,"
			" \n3 to start sort, \n0 to exit" << endl;
		cin >> choice;
		if (choice < '0' || choice > '3')
		{
			cout << "Error, enter type number in range from 1 to 3 to pick seminar \nor 0 to exit from program." << endl;
			cin >> choice;
		}
		switch (choice)
		{
		case '1':
			s3max_conclusion(lenght, Array);
			break;
		case '2':
			summa_conclusion(lenght, Array);
			break;
		case '3':
			sort_conclusion(lenght, Array);
			break;
		default:

			break;
		}
		char y;
		cout << "Enter - 'y'" << endl;
		cout << "Exit menu 3 seminar or any!" << endl;
		cout << "Or enter any other value to continue working with this workshop." << endl;
		cin >> y;
		if (y == 'y')
		{
			system("cls");
			break;
		}
		else
		{
			system("cls");
		}
	}
}