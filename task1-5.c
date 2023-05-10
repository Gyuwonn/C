#include <stdio.h>
#define SEED_MONEY 1000000
int main(void)
{
    int year = 0, money = SEED_MONEY; // year 값 초기화, money 값은 SEED_MONEY 에서 가져옴

    while(1)
    {
        year++; // year 1 증가
        money = money * (1+0.30); // money 에 (1+0.30) 을 곱한 값을 다시 money 에 저장하며 반복
        if( money > 10*SEED_MONEY ) // 원금의 10 배가 되면
            break; // break 문이 실행되며 반복 루프를 탈출한다
    }
    printf("%d년\n", year);
    return 0;
}