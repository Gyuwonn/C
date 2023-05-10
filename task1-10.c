#include <stdio.h>
int main(void)
{
    int i, years; // (정수) 기준값, 기간
    double total, rate, investment; // (실수) 원리합계, 이율, 원금

    printf("원금: ");
    scanf("%lf", &investment); // 원금 입력
    printf("이율(%%): "); // % 출력하려면 %% 로 표시
    scanf("%lf", &rate); // 이율 입력
    printf("기간(년): "); 
    scanf("%d", &years); // 기간 입력

    printf("========================\n");
    printf("연도 원리금\n");
    printf("========================\n");
    total = investment; // total 에 investment 값을 불러옴
    rate /= 100.0; // 이율 = 이율 / 100.0
    for(i = 0; i < years; i++) // i = 0 시작, i < years 까지 반복, i 는 1 씩 증가
    {
        total = total * ( 1 + rate ); // 새로운 원리금 계산 < 원리합계 = 원금 * (1 + 이율) >
        printf("%2d     %10.1f\n", i+1, total); // 2자리의 필드 안에 기간 출력,
        // 10자리의 필드에 소수점 1 의 자리까지 표시되는 실수형으로 원리합계 출력
    }
    return 0;
}