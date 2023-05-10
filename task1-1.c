// while 문을 이용한 구구단 출력 프로그램
#include <stdio.h>
int main(void)
{
    int n; // 변수 n 선언
    int i = 1; // 변수 i 선언과 i 에 1을 저장

    printf("출력하고 싶은 단: "); // n 값
    scanf("%d", &n); // 출력할 단 입력
    while (i <= 9) // i ( n(1~9) x 1~9 )
    {
        printf("%d x %d = %d \n", n, i, n*i); // n 과 i 를 곱한 값 출력
        i++; // 반복될수록 i 가 1씩 증가
    }
    return 0; // 프로그램 종료
}