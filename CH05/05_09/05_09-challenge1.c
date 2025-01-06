#include <stdio.h>

void line(int count, char character)
{
	for (size_t i = 0; i < count; i++)
	{
		putchar(character);
	}
}

int main()
{
	puts("Report on Extraterrestrial Activity");
	line(35,'-');

	return(0);
}
