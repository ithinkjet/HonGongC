#include <stdio.h>
#pragma warning(disable:4477)	// �ʷ� ���� ���ٰ� ������ ���� ���� �ʴ� ��
int main(void)
{
	int a = 10;
	double b = 3.4;
	// sizeof ������ �ᱣ���� %d�ε� ����� �� ������ ������ �� ��� ���.
	printf("int�� ������ ũ�� : %zd\n", sizeof(a));	// ���� �ùٸ� ��ȯ ���ڴ� %zd�̴�.
	printf("double�� ������ ũ�� : %d\n", sizeof(b));
	printf("������ ����� ũ�� : %d\n", sizeof(10));
	printf("������ �ᱣ���� ũ�� : %d\n", sizeof(1.5 + 3.4));
	printf("char �ڷ��� ũ�� : %d\n", sizeof(char));
	// sizeof�� �Լ��� �ƴ� �������̹Ƿ� ��ȣ�� ��� �ȴ�. ��� 11~12��ó�� �����̳� �ڷ����� �����̴�.
	return 0;	// ���翡�� ���ϱ� �̷��� ���̸� ����ϱ� ����Ƿ� �׳� ��ȣ�� ����ϴ°� �����Ѵٰ� �Ѵ�.
}