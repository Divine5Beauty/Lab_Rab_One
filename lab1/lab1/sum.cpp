#include "include.h"

void sum(int square, int** Matrix)
{
	system("cls");
	cout<<"the initial matrix"<<endl;//�������� �������
	array_output(square, Matrix);//����� ���������
	if (summa_dop(square, Matrix) == 0)
	{
		cout << "There are no columns in the matrix that consist only of positive elements." << endl;
	}
	else
	{
		cout << "The amount = " << summa4(square, Matrix) << endl;
	}
}