#include <stdio.h>

void printMenu() // 프로그램을 실행하면 표시되는 문구
{
    printf("==========================\n");
    printf(" 'c' 섭씨온도에서 화씨온도로 변환\n");
    printf(" 'f' 화씨온도에서 섭씨온도로 변환\n");
    printf(" 'q' 종료\n");
    printf("==========================\n");
}

double C2F(double c_temp) // double 로 실수값 표현, c_temp 변수 선언
{
    return 9.0 / 5.0 * c_temp + 32; // 9 ÷ 5 x %d(˚C) + 32 = ˚F (화씨 변환식)
}

double F2C(double f_temp) // f_temp 변수 선언
{
    return (f_temp - 32.0) * 5.0 / 9.0; // (˚F - 32) x 5 ÷ 9 (섭씨 변환식)
}

int main(void) // 메인함수
{
    char choice; // char 형으로 choice 선언
    double temp; // temp 선언

    while(1)
    {
        printMenu(); // printMenu 호출
        printf("메뉴에서 선택하세요: ");
        choice = getchar();
        if (choice == 'q') break; // 'q' 를 입력한 경우, 반복문 탈출
        else if (choice == 'c') // 'c' 를 입력한 경우
        {
            printf("섭씨온도: ");
            scanf("%lf", &temp); // 입력받는 섭씨온도값을 tmep 에 저장
            printf("화씨온도 : %lf\n\n", C2F(temp)); // C2F 함수에서 계산한 결과를 출력
        }
        else if (choice == 'f') // 'f' 를 입력한 경우
        {
            printf("화씨온도: "); 
            scanf("%lf", &temp); // 입력받는 화씨온도값을 tmep 에 저장
            printf("섭씨온도: %lf \n\n", F2C(temp)); // F2C 함수에서 계산한 결과를 출력
        }
        getchar();  // 엔터키 문자를 삭제하기 위하여 필요
    }
    return 0;
}
