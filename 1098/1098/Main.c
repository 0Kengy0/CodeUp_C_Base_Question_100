#include <stdio.h>

int main(void)
{
	int h, w, n, l, d, x, y;
	int arr[101][101] = { 0 };

	scanf_s("%d %d", &h, &w);
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d %d %d", &l, &d, &x, &y);

		for (int i = 0; i < l; i++)
		{
			if (d == 0)
			{
				arr[x][y + i] = 1;
			}
			else if (d == 1)
			{
				arr[x + i][y] = 1;
			}
		}
	}

	for (int i = 1; i <= h; i++)
	{
		for (int k = 1; k <= w; k++)
		{
			printf("%d ", arr[i][k]);
		}
		putchar('\n');
	}

	return 0;
}