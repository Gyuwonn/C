// 202344041 1-B 심규원
#include <stdio.h>
int main(void)
{
    int a, b;
    
    for(a=2;a<10;a++) // a는 2, 9까지 반복, a 1씩 증가
    {
        for(b=1;b<10;b++) // b는 1, 9까지 반복, b 1씩 증가
        {
            printf(" %d x %d = %d\n", a, b, a*b); // 출력
        }
        printf("\n");
    }
    return 0;
}