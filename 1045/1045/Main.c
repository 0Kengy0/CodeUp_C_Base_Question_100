#include <stdio.h>

int main(void)
{
	unsigned int a, b;

	scanf_s("%u %u", &a, &b);

	printf("%u\n", a + b);
	printf("%u\n", a - b);
	printf("%u\n", a * b);
	printf("%u\n", a / b);
	printf("%u\n", a % b);
	printf("%.2f\n", (float)a / b);

	return 0;
}