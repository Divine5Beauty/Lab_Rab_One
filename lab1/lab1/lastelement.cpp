#include "include.h"

double lastelement(int lenght, double* Array)//��������� ������������� ������� 
{
	int k = -1;
	for (int t = 0; t < lenght; t++)
	{
		if (Array[t] > 0)
		{
			k = t;
		}
	}
	return k;
}