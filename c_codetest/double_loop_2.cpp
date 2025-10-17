#include <stdio.h>

int main(void)
{
    int i = 0;
    int j = 0;
    int count = 0;

    while (j < 5)
    {
        i = 0;
        while (i < 4-j)
        {
            printf(" ");
            ++i;
        }
        count = 0;
        while (count < (2 * j + 1))
        {
            printf("*");
            count++;
        }
        printf("\n");
        ++j;
    }

    j = 0;
    int k = 3;
    while (j < 5)
    {
        i = 0;
        while (i <= j)
        {
            printf(" ");
            ++i;
        }
        count = 0;
        while (count < (2 * k + 1))
        {
            printf("*");
            count++;
        }
        --k;
        printf("\n");
        ++j;
        } 
    return 0;
}