#include <stdio.h>

int main(void)
{
	int n;

	scanf_s("%d", &n);

	while (n != 0)
	{
		printf("%d\n", n);
		n--;
	}

	return 0;
}