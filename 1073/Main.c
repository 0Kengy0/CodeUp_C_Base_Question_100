#include <stdio.h>

int main(void)
{
	int n = 1;

	while (n != 0)
	{
		scanf_s("%d", &n);

		if (n != 0)
		{
			printf("%d\n", n);
		}
	}

	return 0;
}