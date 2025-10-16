#include <stdio.h>

int main(void)
{
    int a = 0; 
    //int b = 0;
    //int c = 0;
    int sum = 0;
    int oddsum = 0;
    /*
    while (a != -1)
    {
        scanf_s("%d", &a);

        if (a > 0 && a % 2 == 0) {
            b += a;
        }
        else if (a > 0 && a % 2 == 1) {
            c += a;
        }
        */
    while (1)
    {
     scanf_s("%d", &a);
    if (a == -1)
        break;

    if (a > 0 && a % 2 == 0)
        sum = sum + a;
    else if (a > 0 && a % 2 == 1)
        oddsum = oddsum + a;
    continue;
        
    }
    printf("홀수의 합은 %d\n", oddsum);
    printf("짝수의 합은 %d\n", sum);
    return 0;
}