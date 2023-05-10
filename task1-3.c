// 반복을 이용한 팩토리얼 구하기
#include <stdio.h>
int main(void)
{
    long fact = 1; // 정수 값을 전부 곱해서 계산해야하기 때문에 1로 fact 값을 설정해야하고
    // 팩토리얼의 값은 생각보다 커질 수 있으니 int 보다 자료형의 크기가 큰 long 으로 정의
    int i, n; // 변수 i, n
    printf("정수를 입력하시오: ");
    scanf("%d", &n); // n 값 입력
    
    for(i = 1; i <= n; i++) // i = 1 로 시작, i <= n 까지 반복, i 는 1씩 증가
    {
        fact = fact * i; // fact 에 i 를 곱한 결과를 다시 fact 에 저장하며 반복하여 계산
    }

    printf("%d!은 %d입니다.\n", n, fact); // 결과 출력

    return 0;
}