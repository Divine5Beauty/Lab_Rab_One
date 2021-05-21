#include "include.h"
int summa_conclusion(int lenght, double* Array) // вывод суммы или ошибок
{
	int last_positive_element = lastelement(lenght, Array);//поиск последнего положительного элемента 

	if (last_positive_element == -1)//проверка неуспешного сценария
	{
		cout << "There are no positive elements in the array" << endl;
	}
	else
		if (last_positive_element == 0)//проверка неуспешного сценария
		{
			cout << "It is not possible to calculate the sum of elements up to the last positive element, since it is in the first position" << endl;
		}
		else
			if (last_positive_element == 1)//проверка неуспешного сценария
			{
				cout << "It is not possible to calculate the sum of elements up to the last positive element, since it is in the second position" << endl;
			}
	//if (last_positive_element >1)// если прошло все проверки то ищем сумму и позицию элемента
	else
	{
		cout << "Sum of array elements located up to the last positive element = " << summa(last_positive_element, lenght, Array)<<endl<<"Position of the last positive element in the array "<< last_positive_element << endl;
	}
	return 0;
}