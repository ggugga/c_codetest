//do~while 제어문 연습문제 
#include <stdio.h>

int main(void){

int age = 0;
scanf_s("%d", &age);

do
{
	printf("나이를 다시 입력하세요: ");
	scanf_s("%d", &age);
} while (age > 0 && age < 121);

return 0;
}