#include <stdio.h>

int main(void)
{
	int kor = 3, eng = 5, mat = 4;						// ����, ����, ������ ���� �ʱ�ȭ
	int credits;										// ��ü ������ ������ ����
	int res;											// ���� ����� ������ ����
	double kscore = 3.8, escore = 4.4, mscore = 3.9;	// �� ������ ���� �ʱ�ȭ
	double grade;										// ������ ����� ������ ����

	credits = kor + eng + mat;							// ��ü ���� ���
	grade = (kscore + escore + mscore) / 3 ;			// ������ ��� ���
	res = ((credits >= 10) && (grade > 4.0));			//  ��ü ������ 10���� �̻��̰�
	// ���� ����� 4.0���� ũ�� ���̹Ƿ� ����� 1, �׷��� ������ �����̹Ƿ� 0
	printf("%d", res);

	return 0;
}