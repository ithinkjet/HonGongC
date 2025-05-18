#include <stdio.h>

int main(void)
{
	int chest = 105;
	char size;

	if (chest <= 90)
	{
		size = 'S';
	}
	else if	(chest <= 100)	// 미흡한 답: ((90 < chest) && (chest <= 100))
	{						// 앞의 조건문 때문에 (90 < chest) 필요없음
		size = 'M';
	}
	else
	{
		size = 'L';
	}
	
	printf("%c\n", size);

	return 0;
}