//pointer 기본 연습문제
#include <stdio.h>

int main(void)
{
	double d = 3.4;
	double* pnum = &d;

	*pnum = 1.1;

	printf("%.1f\n", d);
	printf("%p\n", &d);
	printf("%p\n", pnum);
	printf("%p\n", &pnum);
	printf("%.1f\n", *pnum);

	return 0;
}