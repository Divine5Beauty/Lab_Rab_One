#include "include.h"

double maxaddition(int lenght, double* Array)//����� ������������� �������� ��� ������� ������
{
	double max;
	int checkmax = 0;
	max = Array[0];
	for (int i = 0; i < lenght; i++)
	{
		if (max == Array[i])
		{
			checkmax = checkmax + 1;
		}
		if (max < Array[i])
		{
			max = Array[i];
		}

	}
	if (checkmax == lenght)// �������� ��� ����������� �������� 
	{
		return -100000.100;
	}
	else
	{
		return max;

	}
}