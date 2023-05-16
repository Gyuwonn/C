// 공학용 계산기 프로그램 작성
#include <stdio.h>
#include <math.h>

int menu(void)
{
    int n;
    printf("1. 팩토리얼\n");
    printf("2. 싸인\n");
    printf("3. 로그(base 10)\n");
    printf("4. 제곱근\n");
    printf("5. 순열(nPr)\n");
    printf("6. 조합(nCr)\n");
    printf("7. 종료\n");
    printf("선택해주세요: ");
    scanf("%d", &n);
    return n;
}

void factorial() // 팩토리얼
{
    long long n, result=1, i;
    printf("정수를 입력하시오: ");
    scanf("%lld", &n); // n 에 입력값 저장
    for (i = 1; i <= n; i++) // 기준점 i = 1 부터 시작, i 가 n 보다 작거나 같아질때까지 반복, i 는 1 씩 증가
    {
        result = result * i; // result 에 result(1) * i 값을 저장, 반복
    }
    printf("결과 = %lld\n\n", result); // ↑ result 값 출력
}

void sine () // 싸인
{
    double a, result;
    printf("각도를 입력하시오: ");
    scanf("%lf", &a); // 지역변수 a 를 통해 입력받은 각도값 저장
    result = sin(a); // result 에 싸인(a) 저장
    printf("결과 = %lf\n\n", result); // ↑ result 값 출력
}

void longBase10() // 로그
{
    double a, result;
    printf("실수값을 입력하시오: ");
    scanf("%lf", &a); // 실수값 입력
    if (a <= 0.0) // a 의 값이 0.0 보다 작거나 같으면 아래 문장 출력
    {
        printf("오류\n");
    }
    else
        result = log10(a); // result 에 log10(a) 값을 저장
        printf("결과 = %lf\n\n", result); // result 출력
}

void root()
{
    double a, b;
    printf("정수를 입력하시오: ");
    scanf("%lf", &a); // 정수값 입력
    b = sqrt(a); // sqrt 함수를 사용하여 구해지는 결과값을 b 에 저장
    printf("제곱근: %lf\n", b); // b 출력
}

int main(void)
{
    while (1) // 무한루프
    {
        switch (menu()) // 상단의 메뉴 함수 호출
        {
            case 1: // 1 번
                factorial(); // 팩토리얼
                break; 
            case 2: // 2 번
                sine(); // 싸인
                break;
            case 3: // 3 번
                longBase10(); // 로그
                break;
            case 4: // 4 번
                root(); // 제곱근
                break;
            case 7: // 7 번
                printf("종료합니다.\n"); // 프로그램 종료
                return 0;
            default: // else
                printf("잘못된 선택입니다.\n"); // 문자출력
                break;
        }
    }
}