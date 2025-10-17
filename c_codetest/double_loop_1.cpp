//중첩된 반복문 
//연습문제 1

#include <stdio.h>

int main(void)
{
    int i = 0;
    int j = 0;
    while (j < 5)
    {
        i = 0;
        while (i <= j)
        {
            printf("*");
            ++i;
        }
        printf("\n");
        ++j;
    }
    j = 0;
    while (j < 4)
    {
        i = 3;
        while (i >= j)
        {
            printf("*");
            --i;
        }
        printf("\n");
        ++j;
    }
    return 0;
}