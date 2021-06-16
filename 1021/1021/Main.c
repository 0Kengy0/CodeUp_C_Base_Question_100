#include <stdio.h>

int main(void)
{
	char data[51] = "";
	scanf_s("%s", data, sizeof(data));
	printf("%s", data);

	return 0;
}