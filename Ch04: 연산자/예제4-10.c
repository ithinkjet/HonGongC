#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int res = 2;

	a += 20;
	res *= b + 10;	// b�� 10�� ���� �ᱣ���� res�� ���ϰ� �ٽ� res�� ����(*=)
	// ��, res = res * (b + 10), �׻� ���� �������� ���մ��� �����ڸ� ����Ѵ�.
	printf("a = %d, b = %d\n", a, b);
	printf("res = %d\n", res);
	
	return 0;
}