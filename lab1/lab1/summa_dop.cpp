#include "include.h"

int summa_dop(int square, int** Matrix)//сумму элементов в тех столбцах, которые не содержат отрицательных элементов
{
	int sum = 0, zero_sum = 0;
	bool zero_flag = false;

	for (int i = 0; i < square; i++)
	{
		for (int j = 0; j < square; j++)
		{
			sum = sum + Matrix[j][i];
			if (Matrix[j][i] < 0)
			{
				zero_flag = true;
				break;
			}
		}

		if (zero_flag == false)
		{
			zero_sum = zero_sum + sum;
		}
		zero_flag = false;
		sum = 0;
	}

	return zero_sum;
}