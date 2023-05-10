#include <stdio.h>

int get_integer() // get_integer 함수 선언
{
    int value; // value 선언
    printf("정수를 입력하시오: ");
    scanf("%d", &value); // value 안의 값을 사용자로부터 받음
    return value; // value 값으로 return
}

int add(int x, int y) // add 함수와, x / y 값 선언
{
    return x + y; // x 값과 y 값을 더함
}

int main(void) // 메인함수 선언
{
    int x = get_integer(); // get_integer scanf 를 통해 x 값을 입력받음
    int y = get_integer(); // get_integer scanf 를 통해 y 값을 입력받음

    int sum = add(x, y); // sum 변수 선언, add 함수 호출
    printf("두 수의 합은 %d 입니다. \n", sum); // x + y 값 출력
    return 0;
}