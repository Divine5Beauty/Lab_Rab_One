#include "Include.h"

double s3max_conclusion(int lenght, double* Array) //����� ������������� �������� ��� ������ 
{
	double maxx = max(lenght, Array);
	double max_addition = maxaddition(lenght, Array);
	if (max_addition == -100000.100)//�������� ����������� ��������
	{
		cout << "All elements in the array are maximal" << endl;
		cout << "Amount of maximum elements: " << lenght << endl;
		additional_task(lenght, Array, maxx);
	}
	else
	{
		cout << "The maximum element is equal to " << max(lenght, Array) << endl;//����� ���������
		additional_task(lenght, Array, maxx);
	}
	return 0;
}