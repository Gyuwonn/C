#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>

void disp_car(int car_number, int distance) // 자동차가 주행한 거리만큼 * 를 화면에 표시한다.
{
    int i; // i 변수 선언

    printf("CAR #%d", car_number); // 자동차 번호 출력
    for( i = 0; i < distance/10; i++ ) // 기준 i 값은 0부터 시작, i는 주행 거리의 / 10 보다 작으며, 1씩 증가함
        printf("*"); // * 출력
    printf("\n");
}

int main(void) // 메인함수 출력
{
    int i;
    int car1_dist=0, car2_dist=0; // 변수값 초기화

    srand( (unsigned) time (NULL)); // srand()는 난수 발생기의 시드 설정, unsigned는 음수 제한, time null 은 난수 생성에 쓰임
    
    for( i = 0; i < 20; i++ ) // i 는 0부터 시작하고, 20보다 작으며, 1씩 증가함
    {
        system("cls"); // 화면을 지운다.
        car1_dist += rand() % 100; //  rand() 를 이용하여 난수를 발생, 난수의 범위는 % 연산자를 사용하여 0에서 99로 제한
        car2_dist += rand() % 100; // ↑
        disp_car(1, car1_dist); // disp_car 에 1 입력, car1_dist 출력
        disp_car(2, car2_dist); // disp_car 에 2 입력, car2_dist 출력
        Sleep(1000); // 1초 동안 실행을 지연시킨다.
    }
    return 0;
}