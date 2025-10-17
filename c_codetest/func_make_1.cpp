//연습문제
#include <stdio.h>

int calc(int cmd,int a, int b)
{
    if (cmd == 1) {
        printf("%d", a+b);
    }
    else if (cmd == 2) {
        printf("%d", a - b);
    }
    else if (cmd == 3) {
        printf("%d", a * b);
    }
    else if (cmd == 4) {
        if (b == 0)
        {
            printf("error\n");
            return -1;
        }
        printf("%d", a / b);
    }
    else {
        printf("cmd의 값을 1~4 사이로 고르세요");
    }
 
}

int main(void)
{
    int cmd = 0;
    int a = 0;
    int b = 0;
    scanf_s("%d %d %d",&cmd, &a, &b);
    calc(cmd, a, b);

    return 0;
}