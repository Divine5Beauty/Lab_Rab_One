#include "include.h"

void sum_diagonals(int square, int** Matrix)
{
	system("cls");
	cout << "the initial matrix" << endl;//�������� �������
	array_output(square, Matrix);//����� ���������

	if (min_sum_diagonals(square, Matrix) == -1)// ��������
	{
		cout << "All sums of modules of elements of diagonals parallel to the side diagonal of the matrix can be taken as a minimum equal to = "
			<< min_sum_diagonals_dop(square, Matrix) << endl;
	}
	else
	{
		cout << "Minimum sum of modules of elements of all diagonals parallel to the side diagonal of the matrix = "
			<< min_sum_diagonals_dop(square, Matrix) << endl;
	}
}