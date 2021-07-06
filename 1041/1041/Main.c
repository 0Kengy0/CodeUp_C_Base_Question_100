#include <stdio.h>

int main(void)
{
	char input;

	scanf_s("%c", &input, sizeof(char));
	printf("%c", input + 1);

	return 0;
}