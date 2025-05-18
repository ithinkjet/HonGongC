#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;

	if (a > 0)
	{
		printf("b에 1을 대입합니다.\n");
		b = 1;
	}
	else if (a == 0)
	{
		printf("b에 2를 대입합니다.\n");
		b = 2;
	}
	else if (a == -1)
	{
		printf("b에 3을 대입합니다.\n");
		b = 3;
	}
	else
	{
		printf("b에 4을 대입합니다.\n");
		b = 4;
	}

	printf("b = %d\n", b);

	return 0;
}