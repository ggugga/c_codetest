//������ �迭
#include <stdio.h>

int main(void) {
    int scores[2][3][2];
    int a_sum = 0;
    int a_avg = 0;
    int b_sum = 0;
    int b_avg = 0;

    // [�� ����][�л� ��][���� ��]
    //1. �� ����
    for (int y = 0; y < 2; y++) {

        printf("\n--- %d�� ���� �Է� ---\n", y + 1);

        // 2. �л� ���� (x1 = �л� �ε���)
        for (int x1 = 0; x1 < 3; x1++) {

            printf("%d�� %d�� �л�:\n", y + 1, x1 + 1);

            // 3. ���� ���� �Է� (���� �ε��� 0)
            printf("����: ");
            // scores[��][�л�][����]
            scanf_s("%d", &scores[y][x1][0]);

            // 4. ���� ���� �Է� (���� �ε��� 1)
            printf("����: ");
            // scores[��][�л�][����]
            scanf_s("%d", &scores[y][x1][1]);
        }
    }
    //(1) �� ���񺰷� ������ ���
    a_sum = scores[0][0][0] + scores[0][1][0] + scores[0][2][0];
    a_avg = (scores[0][0][0] + scores[0][1][0] + scores[0][2][0]) / 3;
    b_sum = scores[1][0][0] + scores[1][1][0] + scores[1][2][0];
    b_avg = (scores[1][0][0] + scores[1][1][0] + scores[1][2][0]) / 3;
    printf("1�� ���� ����, ���: %d, %d\n", a_sum, a_avg);
    printf("2�� ���� ����, ���: %d, %d\n", b_sum, b_avg);
    a_sum = 0;
    a_avg = 0;
    b_sum = 0;
    b_avg = 0;

    a_sum = scores[0][0][1] + scores[0][1][1] + scores[0][2][1];
    a_avg = (scores[0][0][1] + scores[0][1][1] + scores[0][2][1]) / 3;
    b_sum = scores[1][0][1] + scores[1][1][1] + scores[1][2][1];
    b_avg = (scores[1][0][1] + scores[1][1][1] + scores[1][2][1]) / 3;
    printf("1�� ���� ����, ���: %d, %d\n", a_sum, a_avg);
    printf("2�� ���� ����, ���: %d, %d\n", b_sum, b_avg);

    //(2) �б޺� ��ü ������ ���
    a_sum = 0;
    a_avg = 0;
    b_sum = 0;
    b_avg = 0;
    a_sum = scores[0][0][0] + scores[0][1][0] + scores[0][2][0] + scores[0][0][1] + scores[0][1][1] + scores[0][2][1];
    a_avg = (scores[0][0][0] + scores[0][1][0] + scores[0][2][0] + scores[0][0][1] + scores[0][1][1] + scores[0][2][1]) / 6;
    printf("1�� ��ü ����, ���: %d, %d\n", a_sum, a_avg);
    b_sum = scores[1][0][0] + scores[1][1][0] + scores[1][2][0] + scores[1][0][1] + scores[1][1][1] + scores[1][2][1];
    b_avg = (scores[1][0][0] + scores[1][1][0] + scores[1][2][0] + scores[1][0][1] + scores[1][1][1] + scores[1][2][1]) / 6;
    printf("2�� ��ü ����, ���: %d, %d\n", b_sum, b_avg);
    
    return 0;
}