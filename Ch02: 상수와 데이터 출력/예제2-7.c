#include <stdio.h>

int main(void)									// 상수 = 변수의 반의어. 변수는 유동값, 상수는 고정값
{												// ex) a = 5 일 때, a가 변수, 5는 상수
	printf("%c\n", 'A');						// 문자 상수 출력
	printf("%s\n", "A");						// 문자열 상수 출력
	printf("%c는 %s입니다.\n", '1', "first");	// 문자(%c)와 문자열(%s)와 함께 출력
	
	return 0;
}