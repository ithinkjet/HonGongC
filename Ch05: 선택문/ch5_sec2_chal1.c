#include <stdio.h>

int main(void)
{
	int n1, n2, res;
	char op;

	printf("사칙연산 입력(정수) : ");
	scanf("%d%c%d", &n1, &op, &n2);
	
	switch (op)
	{
	case '+':
		res = n1 + n2;
		break;
	case '-':
		res = n1 - n2;
		break;
	case '*':
		res = n1 * n2;
		break;
	case '/':
		res = n1 / n2;
		break;

	}

	printf("%d%c%d=%d", n1, op, n2, res);

	return 0;
}