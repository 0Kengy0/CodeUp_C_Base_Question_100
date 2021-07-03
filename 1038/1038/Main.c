#include <stdio.h>

int main(void)
{
	long long int input1, input2;

	scanf_s("%lld %lld", &input1, &input2);
	printf("%lld", input1 + input2);

	return 0;
}