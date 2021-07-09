#include <stdio.h>

int main(void)
{
	long long int a;

	scanf_s("%lld", &a);
	printf("%lld", ++a);

	return 0;
}