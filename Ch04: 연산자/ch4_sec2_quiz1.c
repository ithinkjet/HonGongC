#include <stdio.h>

int main(void)
{
	int res;
	
	res = sizeof(long) < sizeof(short);

	res = printf("%s", res == 1 ? "short" : "long");

	return 0;
}