#include <stdio.h>
#include <stdlib.h> // RAND_MAX 난수의 최대값 저장

int main(void)
{
    int initial_money = 50; // 초기 금액
    int goal = 250; // 목표 금액
    int i;
    int wins = 0; // 성공값 초기화

    srand((unsigned)time(NULL));
    for(i = 0; i < 100; i++) // i = 0 시작, 100 번 반복, i 는 1 씩 증가
    {
        int cash = initial_money; // cash 함수는 초기금액을 출력하는 initial_money 를 대신하여 값을 받음
        while(cash > 0 && cash < goal) // cash 가 0 보다 많고, goal 보다 적을때까지 (조건이 둘 다 참일때까지)
        {
            if((double)rand()/RAND_MAX < 0.5) cash++; // 식의 결과가 0.5 보다 작으면, cash 1 증가
            else cash--; // 이외의 경우는 cash 1 감소
        }
        if(cash == goal) wins++; // cash 값과 goal 값이 동일하면 wins 1 증가
    }
    printf("초기 금액 $%d \n", initial_money); // 초기 금액 출력
    printf("목표 금액 $%d \n", goal); // 목표 금액 출력
    printf("100번 중에서 %d번 성공\n", wins); // 성공횟수 출력
    return 0;
}