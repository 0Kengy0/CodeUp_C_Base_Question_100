#include <stdio.h>

int main(void)
{
	long long int a;
	int r, n;

	scanf_s("%lld %d %d", &a, &r, &n);

	for (int i = 1; i < n; i++)
	{
		a *= r;
	}

	printf("%lld", a);

	return 0;
}