#include <stdio.h>

int main(void)
{
	int n, count;
	int arr[24] = { 0 };

	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &count);
		arr[count] += 1;
	}

	for (int i = 1; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}