#include "Include.h"

void data_enter(int lenght, double* Array)// ������ �������� ������� ��� ����������
{
	cout << "Fill the array: " << endl;
	for (int i = 0; i < lenght; i++)
	{
		cout << "\telement [ " << i << " ] --->:";
		cin >> Array[i];
	}
}

void data_enter(int square,  int** Matrix)//��� �������� �������
{
	cout << "Enter a data in matrix: " << endl;
	for (int i = 0; i < square; ++i)
	{
		for (int j = 0; j < square; ++j)
		{
			cout << "\n\telement [ " << i << " ] " << " [ " << j << " ] --->:";
			cin >> Matrix[i][j];
		}
	}
}