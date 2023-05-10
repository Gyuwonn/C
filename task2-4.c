#include <stdio.h>
#include <stdlib.h> // rand()의 원형 정의

int main(void) // 메인함수 선언
{
    for (int i = 0; i < 6; i++) // 변수를 6개까지 호출
        printf("%d ", 1+(rand()%45)); // 호출할때마다 난수 생성, 생성되는 수의 범위를 1에서 45까지 한정
    printf("\n"); // 줄띄움
    return 0;
}