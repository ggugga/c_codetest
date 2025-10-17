//do~while 제어문 연습문제 
#include <stdio.h>

int main(void){

int age = 0;
do
{
	printf("나이를 입력하세요: ");
	scanf_s("%d", &age);
} while (age < 1 || age > 120);

return 0;
}