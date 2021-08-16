#include <stdio.h>

int main(void)
{
	int input;

	scanf_s("%x", &input);

	for (int i = 1; i < 16; i++)
	{
		printf("%X*%X=%X\n", input, i, input * i);
	}

	return 0;
}