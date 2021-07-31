#include <stdio.h>

int main(void)
{
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);

	if (a % 2 == 0) puts("even");
	else puts("odd");

	if (b % 2 == 0) puts("even");
	else puts("odd");

	if (c % 2 == 0) puts("even");
	else puts("odd");

	return 0;
}