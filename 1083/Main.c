#include <stdio.h>

int main(void)
{
	int input;

	scanf_s("%d", &input);

	for (int i = 1; i <= input; i++)
	{
		if (i % 3 == 0)
			printf("X ");
		else
			printf("%d ", i);
	}

	return 0;
}