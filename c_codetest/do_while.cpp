//do~while ��� �������� 
#include <stdio.h>

int main(void){

int age = 0;
do
{
	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &age);
} while (age < 1 || age > 120);

return 0;
}