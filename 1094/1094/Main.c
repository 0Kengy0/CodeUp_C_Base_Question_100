#include <stdio.h>

int main(void)
{
	int n;
	int arr[10000] = { 0 };

	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	for (int i = n; i >= 1; i--)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}