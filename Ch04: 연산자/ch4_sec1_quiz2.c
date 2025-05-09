#include <stdio.h>

int main(void)
{
	int a, b, tot;
	double avg;

	printf("두 과목의 점수 : ");
	scanf("%d%d", &a, &b);
	tot = a + b;
	avg = tot / 2.0;
	// 평균 계산 tot가 정수형이므로 나누는 값을 2.0과 같이 실수값으로 사용해야 한다.
	// 그렇지 않으면 *****

	printf("평균 : %.1f\n", avg);

	return 0;
}