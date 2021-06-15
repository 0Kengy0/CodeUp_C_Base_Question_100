#include <stdio.h>

int main(void)
{
	int front, rear;

	scanf_s("%d-%d", &front, &rear);
	printf("%06d%07d", front, rear);

	return 0;
}