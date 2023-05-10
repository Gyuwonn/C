#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int x, y, answer, i;
    srand((unsigned)time(NULL));

    for (i = 0; i < 10; i++) // i = 0 시작 , 9 번 실행 , i 는 1 씩 증가
    {
        x = rand() % 10; // x = 랜덤값 % 10
        y = rand() % 10; // y = 랜덤값 % 10
        printf("%d + %d = ", x, y); // x 와 y 값을 덧셈식으로 출력
        scanf("%d", &answer); // 덧셈식의 정답을 입력
        if (x + y == answer) // 입력한 값이 정답일 경우
            printf("맞았습니다.\n"); // 출력되는 문장
        else
            printf("틀렸습니다.\n"); // 입력한 값이 오답일 경우 출력되는 문장
    }
    return 0;
}