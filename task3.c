// 202344041 1-B 심규원
#include <stdio.h>
int main(void)
{
    int a, b, C, D, gcd;

    printf(":");
    scanf("%d %d", &a, &b);

    if(a < b)
        C = a;
    else
        C = b;
    for(D=1;D<=C;D++) // D는 기준점(C)보다 작거나 같으며 반복하여 검사
    {
        if(a%D==0 && b%D==0) // D와 나누었을때 0이 되는 값
        {
            gcd = D;
        }
    }
    printf("GCD : %d", gcd);
    return 0;
}