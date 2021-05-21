#include "include.h"

int check_spaces()
{
	ifstream fin("text.txt", ios::in);//������ ���� ��� ���
	fin.seekg(0, ios::end);//��������� � ����� �����
	int len = fin.tellg();//���������� ������� ������� ������
	char* buf = new char[len + 1];

	fin.seekg(0, ios::beg);
	fin.read(buf, len);
	buf[len] = '\0';

	if (check_word(buf) == 0)
	{
		cout << "File is empty " << endl << endl << endl;
	}
	else
	{
		if (check_word(buf) == 1)
		{
			cout << "File contains only 1 word" << endl << endl << endl;
		}

		if (check_word(buf) > 1)
		{
			cout << "Original text: " << endl;
			cout << buf << endl << endl;
			cout << "Amended text: " << endl;
			logic();
		}
	}

	return 0;
}