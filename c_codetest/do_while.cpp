//do~while ��� �������� 
#include <stdio.h>

int main(void){

int age = 0;
scanf_s("%d", &age);

do
{
	printf("���̸� �ٽ� �Է��ϼ���: ");
	scanf_s("%d", &age);
} while (age > 0 && age < 121);

return 0;
}