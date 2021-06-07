#include <stdio.h>

int main(void)
{
	char x;

	// scanf_s(서식 지정자, 변수 주소, 문자열 길이)
	scanf_s("%c", &x, 1);
	printf("%c", x);

	return 0;
}