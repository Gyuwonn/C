#include <stdio.h>

int factorial(int n) // factorial 함수와 n 변수 선언
{
    int i, result = 1; // i 와 result 변수를 설정하고 result 값엔 1을 넣어줌

    for (i = 1; i <= n; i++) // 반복문에서 기준점 i는 1로 시작하고, 비교값 n 보다는 작거나 같을때까지 작동되며, 반복문이 실행될때마다 i가 1씩 증가된다.
        result *= i;  // result = result * i
        return result; // result 값으로 return

}

    int main(void) // 메인함수 선언
    {
        int n; // main 안의 n 변수 선언
        printf("알고 싶은 팩토리얼의 값은? "); // ↓
        scanf("%d", &n); // 사용자로부터 입력받는 값
        printf("%d!의 값은 %d입니다. \n", n, factorial(n)); // main 함수의 n 값과 factorial의 n 이 반복문을 거쳐 나온 값을 출력
        return 0; // 종료
    }