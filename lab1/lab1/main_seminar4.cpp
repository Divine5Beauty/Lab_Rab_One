#include "include.h"

void main_seminar4(int square, int** Matrix)
{
	char choice = '\0';
	while (true)
	{
		cout << "Choose what do you want to start." << endl << "Write \n1 start searching for the sum of elements in columns that do not contain negative elements, ";
		cout << "\n2 start searching for the minimum among the sums of modules of elements of diagonals parallel to the side diagonal of the matrix.";
		cout << "\n Type 0 for exit from programm or for going back to main menu." << endl;
		cin >> choice;
		if (choice < '0' || choice > '2')
		{
			cout << "Error, enter type number in range from 1 to 2 to pick task from seminar4 \nor 0 to exit from program." << endl;
			cin >> choice;
		}
		switch (choice)
		{
		case '1':
			sum(square, Matrix);
			break;
		case '2':
			sum_diagonals(square, Matrix);
			break;
		default:

			break;
		}
		char y;
		cout << "Enter - 'y'" << endl;
		cout << "Exit menu 4 seminar or any!" << endl;
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
