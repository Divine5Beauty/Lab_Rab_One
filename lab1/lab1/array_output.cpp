#include "Include.h"

void array_output(int lenght, double* Array)
{
	for (int i = 0; i < lenght; i++)//вывод массива
	{
		cout << setw(2) << Array[i] << endl;
	}
	cout << endl;
}

void array_output(int square, int** Matrix)// вывод матрицы
{
	for (int i = 0; i < square; i++)
	{
		for (int j = 0; j < square; j++)
		{
			cout << setw(3) << Matrix[i][j] << " | ";
		}
		cout << endl;
	}
	cout << endl;
}