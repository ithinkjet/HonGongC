#include <stdio.h>

int main(void)
{
	int hour, min, sec;
	double time = 3.76;

	hour = (int)time;	// �� ��ȯ���� ���� �κи� ��󳽴�.
	time -= hour;		// �� �ð��� �ȵǴ� �κи��� �ٽ� �����Ѵ�.
	time *= 60.0;			// �� ������ ȯ��
	min = (int)time;	// ���� �κи��� ��󳻾� ������ �����Ѵ�.
	time -= min;		// �Ϻ��� �� �Ǵ� �κи��� �ٽ� �����Ѵ�.
	time *= 60.0;			// �� ������ ȯ��
	sec = (int)time;	// ���� �κи��� ��󳻾� �ʷ� �����Ѵ�.
	printf("3.76�ð��� %d�ð� %d�� %d���Դϴ�.\n", hour, min, sec);	// ��ȯ�� �ð� ���

	return 0;
}