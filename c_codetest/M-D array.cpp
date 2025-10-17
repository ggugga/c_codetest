//다차원 배열
#include <stdio.h>

int main(void) {
    int scores[2][3][2];
    int a_sum = 0;
    int a_avg = 0;
    int b_sum = 0;
    int b_avg = 0;

    // [반 개수][학생 수][과목 수]
    //1. 반 개수
    for (int y = 0; y < 2; y++) {

        printf("\n--- %d반 점수 입력 ---\n", y + 1);

        // 2. 학생 루프 (x1 = 학생 인덱스)
        for (int x1 = 0; x1 < 3; x1++) {

            printf("%d반 %d번 학생:\n", y + 1, x1 + 1);

            // 3. 국어 점수 입력 (과목 인덱스 0)
            printf("국어: ");
            // scores[반][학생][국어]
            scanf_s("%d", &scores[y][x1][0]);

            // 4. 영어 점수 입력 (과목 인덱스 1)
            printf("영어: ");
            // scores[반][학생][영어]
            scanf_s("%d", &scores[y][x1][1]);
        }
    }
    //(1) 각 과목별로 총점과 평균
    a_sum = scores[0][0][0] + scores[0][1][0] + scores[0][2][0];
    a_avg = (scores[0][0][0] + scores[0][1][0] + scores[0][2][0]) / 3;
    b_sum = scores[1][0][0] + scores[1][1][0] + scores[1][2][0];
    b_avg = (scores[1][0][0] + scores[1][1][0] + scores[1][2][0]) / 3;
    printf("1반 국어 총점, 평균: %d, %d\n", a_sum, a_avg);
    printf("2반 국어 총점, 평균: %d, %d\n", b_sum, b_avg);
    a_sum = 0;
    a_avg = 0;
    b_sum = 0;
    b_avg = 0;

    a_sum = scores[0][0][1] + scores[0][1][1] + scores[0][2][1];
    a_avg = (scores[0][0][1] + scores[0][1][1] + scores[0][2][1]) / 3;
    b_sum = scores[1][0][1] + scores[1][1][1] + scores[1][2][1];
    b_avg = (scores[1][0][1] + scores[1][1][1] + scores[1][2][1]) / 3;
    printf("1반 영어 총점, 평균: %d, %d\n", a_sum, a_avg);
    printf("2반 영어 총점, 평균: %d, %d\n", b_sum, b_avg);

    //(2) 학급별 전체 총점과 평균
    a_sum = 0;
    a_avg = 0;
    b_sum = 0;
    b_avg = 0;
    a_sum = scores[0][0][0] + scores[0][1][0] + scores[0][2][0] + scores[0][0][1] + scores[0][1][1] + scores[0][2][1];
    a_avg = (scores[0][0][0] + scores[0][1][0] + scores[0][2][0] + scores[0][0][1] + scores[0][1][1] + scores[0][2][1]) / 6;
    printf("1반 전체 총점, 평균: %d, %d\n", a_sum, a_avg);
    b_sum = scores[1][0][0] + scores[1][1][0] + scores[1][2][0] + scores[1][0][1] + scores[1][1][1] + scores[1][2][1];
    b_avg = (scores[1][0][0] + scores[1][1][0] + scores[1][2][0] + scores[1][0][1] + scores[1][1][1] + scores[1][2][1]) / 6;
    printf("2반 전체 총점, 평균: %d, %d\n", b_sum, b_avg);
    
    return 0;
}