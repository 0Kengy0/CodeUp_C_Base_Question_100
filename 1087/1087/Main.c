#include <stdio.h>

int main(void)
{
	int input, sum = 0;

	scanf_s("%d", &input);

	for (int i = 1; ;i++)
	{
		sum += i;

		if (sum >= input)
			break;
	}

	printf("%d", sum);

	return 0;
}