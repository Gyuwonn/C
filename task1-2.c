#include <stdio.h>
int main(void)
{
    int n; // 변수 n 선언

    printf("===========================\n");
    printf("    n       n의 제곱 \n");
    printf("==========================\n");
    
    n = 1; // n 에 1 을 저장
    while (n <= 10) // n 이 10 보다 작거나 같을때까지 반복
    {
        printf("%5d   %5d\n", n, n*n); // n 제곱 출력
        // * %5d: 정수를 5자리의 필드 안에 십진수 형태로 출력하는것을 의미함
        n++; // n 이 1 씩 증가
    }
    return 0; // 프로그램 종료
}