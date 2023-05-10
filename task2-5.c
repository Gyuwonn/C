#include <stdio.h>

int get_integer(void) // get integer 함수 선언
{
    int n; // n 변수 선언

    printf("정수를 입력하시오: ");
    scanf("%d", &n); // n 값 사용자로부터 입력받기
    return n;
}

int is_prime(int n) // is_prime 함수 선언
{
    int i; // i 변수 선언

    for (i = 2; i < n; i++) // i 는 2 로 시작하고, 변수 n 보다 작으며, 1씩 증가된다.
    {
        if (n%i == 0) // n 과 i 를 나누었을 때 나머지가 0 이라면
        return 0; // main 함수의 else 문장 출력
    }
    return 1; // if 의 경우가 아니라면 main 함수의 if 로 검사
}

int main(void) // 메인함수 선언
{
    int n;
    n = get_integer(); // n 값을 get_integer 함수에 대입

    if (is_prime(n) == 1) // is_prime의 나머지가 1이라면
        printf("%d은 소수입니다.\n", n); // 출력되는 문장
    else // 다른 경우일 때
        printf ("%d은 소수가 아닙니다.\n", n); // 출력되는 문장
        return 0;
}