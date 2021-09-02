#include <stdio.h>

int main(void)
{
	int x = 2, y = 2;
	int arr[11][11] = { 0 };

	for (int i = 1; i <= 10; i++)
	{
		for (int k = 1; k <= 10; k++)
		{
			scanf_s("%d", &arr[i][k]);
		}
	}

	while (arr[x][y] != 2)
	{
		arr[x][y] = 9;

		if (arr[x][y + 1] != 1)
			y++;
		else if (arr[x + 1][y] != 1)
			x++;
		else
			break;
	}	
	arr[x][y] = 9;

	for (int i = 1; i <= 10; i++)
	{
		for (int k = 1; k <= 10; k++)
		{
			printf("%d ", arr[i][k]);
		}
		putchar('\n');
	}

	return 0;
}