#include <stdio.h>
int main(void)
{
    int x, y; // 변수 x, y

    for(y = 1; y <= 5; y++) // 외부 반복문, y = 1 로 시작 / y 는 5 까지 출력 / 1씩 증가
    {
        for(x = 0; x < y; x++) // 내부 반복문, x = 0 으로 시작 / y 번 반복되며 / 1씩 증가
        {
            printf("*");
        }
        printf("\n"); // 내부 반복문이 종료될 때마다 실행
    }
    return 0;
}