// 202344041 1-B 심규원
#include <stdio.h>
int main(void)
{
    int a, b, c=1; // C값 초기화

    printf(":");
    scanf("%d", &a);

    for(b=1;b<=a;b++) // a에서 입력한 값까지 반복
    {
        c*=5; // 결과값에 5의 배수값 설정
    }
        printf("5의 %d 승 : %d", a, c);

        return 0;
}