#include "include.h"

int additional_task(int lenght, double* Array, double maxx) //доп задание 
{
	for (int i = 0; i < lenght; i++)
	{
		if (maxx == Array[i])
		{
			cout << maxx << ", position " << i << endl;
		}
	}
	return 0;
}