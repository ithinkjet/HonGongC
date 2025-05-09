#include <stdio.h>

int main(void)
{
	int seats = 70;		// ÁÂ¼® ÃÊ±âÈ­
	int audience = 65;	// °ü°´ ÃÊ±âÈ­
	double rate;			// ÀÔÀå·ü ¼±¾ğ

	rate = (double)audience / (double)seats * 100.0;

	printf("ÀÔÀå·ü : %.1lf%%", rate);

	return 0;
}