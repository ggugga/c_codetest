// 연습문제
#include <stdio.h>


int factorial(int n)
{
	int s = n;
	for (int i = 1; 0 < n-i; i++)
	{
		s *= (n-i);
	}
	return s;
}

int main(void)
{
	int n = 0;
	scanf_s("%d", &n);
	int ret = factorial(n);
	printf("%d\n", ret);
	return 0;
}