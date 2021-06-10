#include <stdio.h>

int main(void)
{
	char x, y;

	scanf_s("%c %c", &x, 1, &y, 1);
	printf("%c %c", y, x);

	return 0;
}