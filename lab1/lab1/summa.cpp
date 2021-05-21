#include "include.h"

double summa(int k, int lenght, double* Array)
{
	double sum = 0;
	for (int t = 0; t < k; t++)
	{
		sum = sum+ Array[t];
	}
	return sum;
}