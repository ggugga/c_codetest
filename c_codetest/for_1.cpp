//for ��� ��������1
#include <stdio.h>

int main()
{

	int n = 0;
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			sum1 += i; 
		}
		else {
			sum2 += i; 
		}
	}
	printf("¦���� ��: %d, Ȧ���� �� %d\n", sum1, sum2);

	return 0;
}