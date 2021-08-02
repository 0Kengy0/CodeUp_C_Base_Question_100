#include <stdio.h>

int main(void)
{
	int score;

	scanf_s("%d", &score);

	if (score > 89 && score < 101) puts("A");
	else if (score > 69 && score < 90) puts("B");
	else if (score > 39 && score < 70) puts("C");
	else if (score > -1 && score < 40) puts("D");

	return 0;
}