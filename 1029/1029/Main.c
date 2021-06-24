#include <stdio.h>

int main(void)
{
	double d;

	scanf_s("%lf", &d);
	printf("%.11lf", d);

	return 0;
}