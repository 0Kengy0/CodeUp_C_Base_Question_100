#include <stdio.h>

int main(void)
{
	int n, x, y;
	int arr[20][20] = { 0 };

	for (int i = 1; i <= 19; i++)
	{
		for (int k = 1; k <= 19; k++)
		{
			scanf_s("%d", &arr[i][k]);
		}
	}

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &x, &y);

		for (int k = 1; k <= 19; k++)
		{
			if (arr[x][k] == 0)
				arr[x][k] = 1;
			else
				arr[x][k] = 0;
		}

		for (int k = 1; k <= 19; k++)
		{
			if (arr[k][y] == 0)
				arr[k][y] = 1;
			else
				arr[k][y] = 0;
		}
	}

	for (int i = 1; i <= 19; i++)
	{
		for (int k = 1; k <= 19; k++)
		{
			printf("%d ", arr[i][k]);
		}
		putchar('\n');
	}

	return 0;
}