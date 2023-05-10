#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t start, end; // time_t 는 unsigned long 과 동일하다.
    start = time(NULL); // time(NULL) = 현재 시간을 반환하는 함수
    printf("10초가 되면 엔터키를 누르세요\n");
    while(1)
    {
        if(getchar()) // 문자를 받는 함수
            break; // 반복문 탈출
    }
    printf("종료되었습니다.\n");
    end = time(NULL); // enter 를 누른 시점에 종료
    printf("경과된 시간은 %ld 초입니다. \n", end - start); // enter 를 누르기까지 걸린 출력
    return 0;
}