//for 제어문 연습문제2
#include <stdio.h>

int main(void)
{
    int i = 0;
    int j = 0;
    
    for(j=0;j < 5; j++)
    {
        for (i=0;i <= j;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    j = 0;
    for (j=0;j < 4;j++)
    {
        for(i=3; i >= j;--i)
        {
            printf("*");
        }
        printf("\n");
       
    }
    int count = 0;

    for (j=0; j < 5; j++)
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

    return 0;
}


    