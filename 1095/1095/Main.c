#include <stdio.h>
#include <limits.h>

int main(void)
{
	int n, min = INT_MAX;
	int arr[10000] = { 0 };

	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &arr[i]);
		
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	printf("%d", min);

	return 0;
}