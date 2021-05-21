#include "include.h"

double max(int lenght, double* Array)//поиск максимального элемента 
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
	return max;
}