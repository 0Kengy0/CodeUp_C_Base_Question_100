#include <stdio.h>

int main(void)
{
	int input;

	scanf_s("%d", &input);
	printf("%d", ~input);

	return 0;
}