#include <stdio.h>

int main(void)
{
	int a;

	if (a < 0)
	{
		a = -1;
	}
	if ((a % 2) == 0)
	{
		a = 2;
	}
	else
	{
		a = 1;
	}

	return 0;
}