#include <stdio.h>

int main(void)
{
	int input;
	int sum = 0;

	scanf_s("%d", &input);

	for (int i = 0; sum <= input; i++)
	{
		sum += i;

		if (sum >= input)
		{
			printf("%d", i);
			break;
		}
	}

	return 0;
}