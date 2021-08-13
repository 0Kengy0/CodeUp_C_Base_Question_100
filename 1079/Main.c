#include <stdio.h>

int main(void)
{
	char input;

	do
	{
		scanf_s("%c", &input, 1);
		if (input != ' ')
		{
			printf("%c\n", input);
		}
	} while (input != 'q');

	return 0;
}