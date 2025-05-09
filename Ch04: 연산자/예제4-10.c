#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int res = 2;

	a += 20;
	res *= b + 10;	// b에 10을 더한 결괏값에 res를 곱하고 다시 res에 저장(*=)
	// 즉, res = res * (b + 10), 항상 가장 마지막에 복합대입 연산자를 사용한다.
	printf("a = %d, b = %d\n", a, b);
	printf("res = %d\n", res);
	
	return 0;
}