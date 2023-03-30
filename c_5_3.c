#include <stdio.h>
int main(void)
{
    int a,b;
    printf("입력:");
    scanf("%d %d", &a,&b);

    if(a>b)
    {
        printf(">");
    }
    else if(a<b)
    {
        printf("<");
    }
    else
    {
        printf("==");
    }
    return 0;
}
