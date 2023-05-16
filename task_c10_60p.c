// 동전 던지기 게임
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int coin_toss(void);

int main(void)
{
    int toss; // 반복문에서 횟수를 의미하는 변수
    int heads = 0; // heads 변수값 초기화
    int tails = 0; // tails 변수값 초기화
    srand((unsigned)time(NULL)); // srand() 난수 발생기 시드 설정

    for(toss = 0; toss < 100; toss++) // 기준점 toss 0 부터 시작, 100 번 반복, 1 씩 증가
    {
        if(coin_toss() == 1) // coin_toss 함수 계산에서 같은 값이 나올 경우를 방지한 식
            heads++; // head 1 증가
        else
            tails++; // tails 1 증가
        
        printf("동전의 앞면: %d\n", heads);
        printf("동전의 뒷면: %d\n", tails);
        return 0; 
    }
}

    int coin_toss(void)
    {
        int head = rand() % 2; // 랜덤값 % 2
        return head; 
    }