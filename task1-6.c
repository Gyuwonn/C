// break 를 이용하여 무한 루프를 탈출
#include <stdio.h>
#include <math.h>

int main(void)
{
    double v; // double(실수) 변수 v

    while(1) // 1 은 항상 참이므로 while(1) 은 무한루프
    {
        printf("실수값을 입력하시오: ");
        scanf("%lf", &v); // 실수값 v 에 입력

        if( v < 0.0 ) // 변수 v 가 0.0 보다 작으면 제곱근을 구할 수 없어서 break 문을 실행
            break;

        printf("%f의 제곱근은 %f입니다.\n", v, sqrt(v)); // sqrt() 함수는 double 형 실수를 받아서 제곱근을 계산하는 라이브러리 함수
    }
    return 0;
}