#include <stdio.h>

int main(void)
{
	int n, x, y;
	int checkerboard[20][20] = { 0 };

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &x, &y);
		checkerboard[x][y] = 1;
	}

	for (int i = 1; i < 20; i++)
	{
		for (int k = 1; k < 20; k++)
		{
			printf("%d ", checkerboard[i][k]);
		}
		putchar('\n');
	}
	return 0;
}