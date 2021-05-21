#include "include.h"

int check_word(char* buf)// ищем количество знаков
{
	int i = 0;
	int j = 0;

	while (buf[i])
	{
		if (buf[i] == '.' || buf[i] == '?' || buf[i] == '!')
			j++;
		i++;
	}

	i = 0;

	while (buf[i])
	{
		if (buf[i] == ' ')
			j++;
		i++;
	}
	return j;
}
