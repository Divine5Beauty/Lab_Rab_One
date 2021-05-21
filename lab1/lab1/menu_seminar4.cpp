#include "include.h"

void menu_seminar4()
{
	int square = 0;
	cout << "Seminar 4\n";
	cout << "Information about the seminar" << endl;
	cout << "In this seminar there are 2 programs: \n1 - Determine the sum of elements in those columns that do not contain negative elements, ";
	cout << "\n2 - Determine the minimum among the sums of modules of elements of diagonals parallel to the side diagonal of the matrix";
	cout << endl << endl;
	cout << "Getting started with the program\n";
	cout << "Enter one value the dimension of the square matrix: ";
	square = check_length(square);
	while (true)
	{
		if (square < 3 || square > 50)
		{
			cout << "\n\tThis dimension of the matrix is not suitable for the task" << endl;
			cout << "\n\tEnter one value the dimension of the square matrix -----> " ;
			square = check_length(square);
			cout << endl;
		}
		else
			break;
	}
	
	int** Matrix = new int* [square];// создаем матрицу
	for (int i = 0; i < square; i++)
	{
		Matrix[i] = new int[square];
	}
	data_enter(square,  Matrix);//ввод элементов
	system("cls");// очищаем экран перед выводом массива
	cout << "the initial matrix" << endl;//исходная матрица
	array_output(square,  Matrix);//вывод элементов

	main_seminar4(square,  Matrix);
	for (int i = 0; i < square; i++)//очищение памяти
	{
		delete Matrix[i];
	}

	delete[] Matrix;
}