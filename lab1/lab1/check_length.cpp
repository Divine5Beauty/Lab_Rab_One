#include "include.h"

int check_length(int a)
{
	while (!(cin >> a) || (cin.peek() != '\n'))// �������� �� ���� � �� �� ��� ����� �� �������� ��������
	{
		system("cls");// �������� �������� �� ����
		cin.clear();
		while (cin.get() != '\n'  );
		{
			cout << "Error!\nEnter an lenght " << endl;
		}
	}
	return a;
}