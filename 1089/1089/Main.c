#include <stdio.h>

int main(void)
{
	int a, d, n;

	scanf_s("%d %d %d", &a, &d, &n);

	for (int i = 1; i < n; i++)
	{
		a += d;
	}

	printf("%d", a);

	return 0;
}