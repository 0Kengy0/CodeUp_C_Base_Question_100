#include <stdio.h>

int main(void)
{
	unsigned char input;

	scanf_s("%hhu", &input);
	printf("%c", input);

	return 0;
}