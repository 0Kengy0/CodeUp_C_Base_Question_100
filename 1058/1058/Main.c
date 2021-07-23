#include <stdio.h>

int main(void)
{
	int input1, input2;

	scanf_s("%d %d", &input1, &input2);
	printf("%d", !(input1 || input2));

	return 0;
}