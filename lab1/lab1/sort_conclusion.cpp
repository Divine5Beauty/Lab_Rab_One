#include "include.h"

void sort_conclusion(int lenght, double* Array)// вывод массива после сортировки 
{
	system("cls");
	double* Arraysort = new  double[lenght];
	for (int i = 0; i < lenght; i++)
	{
		Arraysort[i] = Array[i];
	}

	cout << "Sorting method: Insertion sort." << endl;
	cout << "Sorted Array" << endl;
	Arraysort = s3sort(lenght, Arraysort);

	cout  << "Unsorted massive:" << endl;
	array_output(lenght, Array);//вывод элементов массива

	if (Arraysort[0] == -50000.100)
	{
		cout << "It is not possible to compress the array, since all elements do not fall within the interval."<<endl;
	}
	 else
		if (Arraysort[0] == -10000.1)
		{
			cout << "The array is completely compressed and now consists of zeros." << endl;// не выводит ошибка
		}
		else
		{
			cout << "Sorted array " << endl;
			array_output(lenght, Arraysort);//вывод массива
		}

	delete[] Arraysort;
}