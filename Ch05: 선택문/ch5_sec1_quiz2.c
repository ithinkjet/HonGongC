#include <stdio.h>

int main(void)
{
	int chest = 105;
	char size;

	if (chest <= 90)
	{
		size = 'S';
	}
	else if	(chest <= 100)	// ������ ��: ((90 < chest) && (chest <= 100))
	{						// ���� ���ǹ� ������ (90 < chest) �ʿ����
		size = 'M';
	}
	else
	{
		size = 'L';
	}
	
	printf("%c\n", size);

	return 0;
}