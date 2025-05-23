#include <stdio.h>

int main(void)
{
	int hour, min, sec;
	double time = 3.76;

	hour = (int)time;	// 형 변환으로 정수 부분만 골라낸다.
	time -= hour;		// 한 시간이 안되는 부분만을 다시 저장한다.
	time *= 60.0;			// 분 단위로 환산
	min = (int)time;	// 정수 부분만을 골라내어 분으로 저장한다.
	time -= min;		// 일분이 안 되는 부분만을 다시 저장한다.
	time *= 60.0;			// 초 단위로 환산
	sec = (int)time;	// 정수 부분만을 골라내어 초로 저장한다.
	printf("3.76시간은 %d시간 %d분 %d초입니다.\n", hour, min, sec);	// 변환한 시간 출력

	return 0;
}