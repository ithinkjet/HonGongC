#include <stdio.h>

int main(void)
{
	int seats = 70;		// �¼� �ʱ�ȭ
	int audience = 65;	// ���� �ʱ�ȭ
	double rate;			// ����� ����

	rate = (double)audience / (double)seats * 100.0;

	printf("����� : %.1lf%%", rate);

	return 0;
}