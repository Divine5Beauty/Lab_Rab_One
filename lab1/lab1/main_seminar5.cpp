#include "include.h"

void main_seminar5()
{
	ifstream fin("text.txt");//������ �����
	
	if (!fin)// �������� ������� �����
	{
		cout << "File open error." << endl;
	}
	else
	{
		check_spaces();

	}
	fin.close();
}