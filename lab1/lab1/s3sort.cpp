#include "include.h"
double* s3sort(int lenght, double* Array)
{
	int a=0, b=0;
	bool flag = false;
	cout << "enter the interval from a to b"<<endl;//������ �������� 
	cout << "enter the  a " << endl;
	a = check_a(a);//�������� �� ���� �����
	cout << "enter the  b " << endl;
	b = check_a(b);//�������� �� ���� �����
	system("cls");
	while (flag == false)
	{
		if (a > b)// �������� �� �������
		{
			cout << "make sure that the first border is smaller than the second one, and enter the borders a, b again" << endl;
			cout << "enter the  a " << endl;
			a = check_a(a);//�������� �� ���� �����
			cout << "enter the  b " << endl;
			b = check_a(b);//�������� �� ���� �����
			system("cls");
		}
		else
			if (a == b)
			{
				cout << "The first border is equal to the second, change the borders a, b" << endl;
				cout << "enter the  a " << endl;
				a = check_a(a);//�������� �� ���� �����
				cout << "enter the  b " << endl;
				b = check_a(b);//�������� �� ���� �����
				system("cls");
			}
		else
		{
			flag = true;
		}
	}

	int check = 0;
	double key = 0;
	int i = 0;
	for (int j = 1; j < lenght; j++)//���������� ���������, ����������� ����� �������� � �������� � �����
	{
		key = Array[j];
		i = j - 1;
		while (i >= 0 && (abs(Array[i]) > a) && (abs(Array[i]) < b))
		{
			Array[i + 1] = Array[i];
			i = i - 1;
			Array[i + 1] = key;
			check++;
		}
		
	}

	double* Arraysort = new  double[lenght];// ������ ������ ��� ������� ����������, ����������� ����� � ��������� � ����
	for (i = 0; i < lenght; i++)
	{
		if ((abs(Array[i]) < b) && (abs(Array[i]) > a))
		{
			Arraysort[i] = 0;
		}
		else
		{
			Arraysort[i] = Array[i];
		}
	}

	if (check == 0)//��������,  ������ ��� ����� �������� � ��������
	{
		Arraysort[0] = -50000.100;
	}
	else
		if (check == lenght)//��������, ��� ����� ������ � ��������
		{
			Arraysort[0] = -10000.1;
		}

	return Arraysort;
}