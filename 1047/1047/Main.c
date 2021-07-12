#include <stdio.h>

int main(void)
{
	int a = 10;

	scanf_s("%d", &a);
	printf("%d", a << 1);

	return 0;
}