#include <stdio.h>

int main(void)
{
	int input;

	scanf_s("%d", &input);

	if (input > 0)
	{
		puts("plus");

		if (input % 2 == 0) puts("even");
		else puts("odd");

	}
	else
	{
		puts("minus");

		if (input % 2 == 0) puts("even");
		else puts("odd");
	}

	return 0;
}