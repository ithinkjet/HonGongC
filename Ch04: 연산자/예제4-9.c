#include <stdio.h>
#pragma warning(disable:4477)	// 초록 물결 밑줄과 별개로 경고는 뜨지 않는 듯
int main(void)
{
	int a = 10;
	double b = 3.4;
	// sizeof 연산의 결괏값은 %d로도 출력할 수 있지만 컴파일 시 경고가 뜬다.
	printf("int형 변수의 크기 : %zd\n", sizeof(a));	// 본래 올바른 변환 문자는 %zd이다.
	printf("double형 변수의 크기 : %d\n", sizeof(b));
	printf("정수형 상수의 크기 : %d\n", sizeof(10));
	printf("수식의 결괏값의 크기 : %d\n", sizeof(1.5 + 3.4));
	printf("char 자료형 크기 : %d\n", sizeof(char));
	// sizeof는 함수가 아닌 연산자이므로 괄호가 없어도 된다. 대신 11~12행처럼 수식이나 자료형은 예외이다.
	return 0;	// 교재에서 말하길 이러한 차이를 기억하기 힘드므로 그냥 괄호를 사용하는걸 권장한다고 한다.
}