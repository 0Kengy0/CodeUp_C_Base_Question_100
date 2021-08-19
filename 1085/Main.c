#include <stdio.h>

int main(void)
{
	int h, b, c, s;
	float result;

	scanf_s("%d %d %d %d", &h, &b, &c, &s);

	result = ((long long int)h * b * c * s) / (float)8;

	for (int i = 0; i < 2; i++)
	{
		result /= 1024.0f;
	}

	printf("%.1f MB", result);

	return 0;
}