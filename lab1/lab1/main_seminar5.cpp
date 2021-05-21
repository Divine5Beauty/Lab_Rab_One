#include "include.h"

void main_seminar5()
{
	ifstream fin("text.txt");//чтение файла
	
	if (!fin)// проверка наличие файла
	{
		cout << "File open error." << endl;
	}
	else
	{
		check_spaces();

	}
	fin.close();
}