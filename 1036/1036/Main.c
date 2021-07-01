#include <stdio.h>

int main(void)
{
	char input;

	scanf_s("%c", &input, sizeof(char));
	printf("%d", input);

	return 0;
}