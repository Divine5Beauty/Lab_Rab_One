#include "Include.h"

void menu_seminar3()
{
	cout << "Seminar 3\n";
	cout << "Information about the seminar" << endl;
	cout << "In this seminar there are 3 programs: \n1 - search for the maximum element, \n2 - search for the sum of array elements up to the last positive element," << endl;
	cout << "3 - sorting according to the rule seminar" << endl << endl;
	int length = 0;
	const int maxlength = 50;
	cout << "Getting started with the program\n";
	cout << "Enter the length of the array: ";
	length = check_length(length);//������ ����� ������� � ��������� �� ������������

	cout << endl;

	//�������� �� ������������ ����� ����� �������
	while (true)
	{
		if (length <= 1 )// �������� ��� ���������� ��������� �� ������ 1
		{
			cout << "\nelements less than one or equal to one" << endl;
			cout << "\nEnter the size of the array --> ";
			length = check_length(length);
		}
		else 
			if (length > maxlength)
			{
				cout << "\nerror entering the number of elements" << endl;
				cout << "\nEnter the size of the array -->";
				length = check_length(length);
			}
			else
				break;
	}

	double* Array = new double[length];//������ ����������
	data_enter(length, Array);// ���� ��������� � ������
	system("cls");
	cout << endl << "Unsorted massive:" << endl;//������� �� ��������������� ������
	array_output(length, Array);//����� ��������� �������

	main_seminar3(length, Array);
	delete[] Array;

}