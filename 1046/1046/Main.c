#include <stdio.h>

int main(void)
{
	long long int input1, input2, input3;

	scanf_s("%lld %lld %lld", &input1, &input2, &input3);
	printf("%lld\n", input1 + input2 + input3);
	printf("%.1Lf", ((long double)input1 + input2 + input3) / 3);
	return 0;
}