//배열의 개념 연습문제
#include <stdio.h>
int main(void)
{
	// 1
	int i = 0;
	int x[10] = {};
	printf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n", x[0], x[1],x[2],x[3],x[4],x[5],x[6],x[7],x[8],x[9]);
	// 2
	for (i = 0; i < 10; i++) {
		x[i] = i + 1;
		printf("x[%d]의 값은 %d\n",i, x[i]);
	}
	// 3
	int sum = 0;
	for (i = 0; i < 10; i++) {
		sum += x[i];
	}
	printf("%d", sum);
	return 0;
}