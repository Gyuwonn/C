#include <stdio.h>

int max(int x, int y) // x, y 선언
{
    if (x > y) // x 가 y 보다 크면
        return x; // x 값
    else // y 가 x 보다 크면
        return y; // y 값
}

int main(void) // 메인함수 선언
{
    int x, y, larger; // x , y , larger(큰 값 저장하는 변수)

    printf("정수 2개를 입력하시오: "); // ↓
    scanf("%d %d", &x, &y); // x 와 y 값을 사용자로부터 받음

    larger = max(x, y); // max 함수 안의 식을 통하여 더 큰 값을 불러옴
    printf("더 큰 값은 %d입니다.\n", larger); // larger 값 출력
    return 0;
}