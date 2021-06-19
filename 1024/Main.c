#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[21];

	scanf_s("%s", string, sizeof(string));

	for (int i = 0; string[i] != '\0'; i++)
	{
		printf("\'%c\'\n", string[i]);
	}

	return 0;
}