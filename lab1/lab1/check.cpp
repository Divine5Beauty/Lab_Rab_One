#include "Include.h"

int check(int a)
{
	//�� ��������� �� ������������� ��������
	while (!(cin >> a) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error!\nEnter the number:" << endl;
	}
	return a;
}