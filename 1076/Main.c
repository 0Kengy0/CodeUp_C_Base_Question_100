#include <stdio.h>

int main(void)
{
	char x, t = 'a';

	scanf_s("%c", &x, 1);

	do
	{
		printf("%c ", t);
		t++;
	} while (t < x + 1);

	return 0;
}