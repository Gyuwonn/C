#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int coin_toss(void);
int main(void)
{
    int toss; // toss 변수 선언
    int heads = 0; // heads 변수값 초기화
    int tails = 0; // tails 변수값 초기화
    srand((unsigned)time(NULL)); // srand() 난수 발생기 시드 설정

for ( toss = 0; toss < 100; toss++ ) // 기준점 toss, 0부터 시작, 100 보다 작으며 1씩 증가
{
    if(coin_toss() == 1) // coin_toss 함수 계산에서 같은 값이 나올 경우를 방지한 식
        heads++; // head 증가 (동전의 앞면)
    else
        tails++; // tails 증가 (동전의 뒷면)
}

printf("동전의 앞면: %d \n", heads); // 출력
printf("동전의 뒷면: %d \n", tails);
return 0;
}

int coin_toss(void)
{
    int head = rand() % 2; // 랜덤값 ÷ 2
    return head;
}