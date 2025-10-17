// 연습문제
#include <stdio.h>

int n_sum(int n)
{	
	if (n == 0) return 0;
	
	return n + n_sum(n - 1);
}

int main(void)
{
	int n = 0;
	scanf_s("%d", &n);
	int ret = n_sum(n);
	printf("%d\n", ret);
	return 0;
}

