#include <stdio.h>

int main(void)
{
	int w, h, b;
	float result;

	scanf_s("%d %d %d", &w, &h, &b);

	result = (w * h * b) / (float)8;

	for (int i = 0; i < 2; i++)
	{
		result /= 1024.0f;
	}

	printf("%.2f MB", result);

	return 0;
}