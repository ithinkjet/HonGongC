#include <stdio.h>

int main(void)
{
	int a, b, tot;
	double avg;

	printf("�� ������ ���� : ");
	scanf("%d%d", &a, &b);
	tot = a + b;
	avg = tot / 2.0;
	// ��� ��� tot�� �������̹Ƿ� ������ ���� 2.0�� ���� �Ǽ������� ����ؾ� �Ѵ�.
	// �׷��� ������ *****

	printf("��� : %.1f\n", avg);

	return 0;
}