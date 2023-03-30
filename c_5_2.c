#include <stdio.h>
int main(void)
{
    char ch;
    printf("문자를 입력하시오:");
    scanf("%d", &ch);

    if(ch>=65 && ch<=90)
    {
        printf("%d는 대문자입니다.\n", ch);
    }
    else if(ch>=97 && ch<=122)
    {
        printf("%d는 소문자입니다.\n", ch);
    }
    else if(ch>=48 && ch<=57)
    {
        printf("%d는 숫자입니다.\n", ch);
    }
    else
    {
        printf("%d는 기타문자입니다.\n", ch);
    }

    return 0;
}