#include <stdio.h>

int main(void)
{
	char input;

	scanf_s("%c", &input, sizeof(char));

	switch (input)
	{
	case 'A':
		puts("best!!!");
		break;
	case 'B':
		puts("good!!");
		break;
	case 'C':
		puts("run!");
		break;
	case 'D':
		puts("slowly~");
		break;
	default:
		puts("what?");
		break;
	}

	return 0;
}