#include "include.h"

int dop_condition(int square, int** Matrix) // дополнительное задание по выводу столбца и его содержимого
{
	for (int i = 0; i < square; i++)
	{
		bool zero_flag = false;
		for (int j = 0; j < square; j++)
		{
			if (Matrix[j][i] < 0)
			{
				zero_flag = true;
				break;
			}
		}

		if (zero_flag == false)
		{
			cout << "Positive column number " << i << endl;
			cout << "The contents of the column without the negative elements: ";
			for (int j = 0; j < square; j++)
			{
				cout << Matrix[j][i] << " ";
			}
			cout << endl;
			bool zero_flag = false;
		}
	}

	return 0;
}