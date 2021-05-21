#include "include.h"

void sum(int square, int** Matrix)
{
	system("cls");
	cout<<"the initial matrix"<<endl;//исходная матрица
	array_output(square, Matrix);//вывод элементов
	if (summa_dop(square, Matrix) == 0)
	{
		cout << "There are no columns in the matrix that consist only of positive elements." << endl;
	}
	else
	{
		cout << "The amount = " << summa4(square, Matrix) << endl;
	}
}