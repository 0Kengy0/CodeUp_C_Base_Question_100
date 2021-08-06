#include <stdio.h>

int main(void)
{
	int n, m;

	scanf_s("%d", &n);

reget:
	scanf_s("%d", &m);
	printf("%d\n", m);
	if (--n != 0) goto reget;

	return 0;
}