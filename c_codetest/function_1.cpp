//�Լ��� ���� ��������
#include <stdio.h>
int i = 0;
int j = 0;

void func1(void)
{
    for (j = 0; j < 5; j++)
    {
        for (i = 0; i <= j; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    j = 0;
    for (j = 0; j < 4; j++)
    {
        for (i = 3; i >= j; --i)
        {
            printf("*");
        }
        printf("\n");

    }
}
void func2(void)
{
    int count = 0;

    for (j = 0; j < 5; j++)
    {
        for (i = 0; i < 4 - j; i++)
        {
            printf(" ");
        }

        for (count = 0; count < (2 * j + 1); count++)
        {
            printf("*");
        }
        printf("\n");
    }
    int k = 3;
    for (j = 0; j < 5; ++j)
    {
        for (i = 0; i <= j; ++i)
        {
            printf(" ");
        }
        count = 0;
        for (count = 0; count < (2 * k + 1); count++)
        {
            printf("*");
        }
        --k;
        printf("\n");

    }
}


int main(void) {
    while(1){
    int a;
    scanf_s("%d", &a);
    if (a == 1) {
        func1();
    }
    else if (a == 2) {
        func2();
    }
    else {
        printf("1 Ȥ�� 2�� ���� �Է����ּ���  ");
        }
    }
        return 0;
}