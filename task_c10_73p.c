// 삼각 함수 라이브러리
#include <math.h> // 수학함수를 포함하는 라이브러리
#include <stdio.h>

int main(void)
{
    double pi = 3.1415926535; // double 형으로 pi 변수 선언
    double x, y; // double 형으로 x, y 선언

    x = pi / 2; // x 는 pi ÷ 2
    y = sin(x); // y = 빗변 분의 밑변 * x
    printf("sin(%f) = %f\n", x, y); // x 의 원래값, 계산된값(y) 출력
    y = cos(x); // y = 빗변 분의 높이 * x
    printf("cos(%f) = %f\n", x, y); // x 의 원래값, 계산된값(y) 출력
}