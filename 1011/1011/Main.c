#include <stdio.h>

int main(void)
{
	char x;

	// scanf_s(���� ������, ���� �ּ�, ���ڿ� ����)
	scanf_s("%c", &x, 1);
	printf("%c", x);

	return 0;
}