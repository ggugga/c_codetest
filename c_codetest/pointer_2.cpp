//포인터와 사칙연산 연습문제

#include <stdio.h>

int main(void)
{

int x[5] = { 1,2,3,4,5 };

int* p = &x[0];

printf("%d\n", *p); 
printf("%d\n", *(p+1));
printf("%d\n", *(p + 2));
printf("%d\n", *(p + 3));
printf("%d\n", *(p + 4));

return 0;

}