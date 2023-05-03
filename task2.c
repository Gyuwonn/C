// 202344041 1-B 심규원
#include <stdio.h>
int main(void)
{
    int a = 2; // a값 선언 (구구단의 2단부터 시작)
    while(a < 10) // 9단까지 반복
    {   
        int b = 1; // b값 선언 (1부터 차례대로 곱)
        while(b <= 9) // 9번까지 곱하기
        {
            printf(" %d x %d = %d\n ", a,b,a*b); // 출력
            b++; // b값 증가
        }
        printf("\n");
        a++; // 다음 단 시작
    }
    return 0;
}