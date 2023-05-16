#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

int main(void)
{
    double height, distance, tree_height, degrees, radians; // 나무의 높이를 구하기 위해 존재하는 변수

    printf("나무와의 길이(단위는 미터): ");
    scanf("%lf", &distance); // ↑ distance 변수에 값 저장

    printf("측정자의 키(단위는 미터): ");
    scanf("%lf", &height); // ↑ height 변수에 값 저장

    printf("각도(단위는 도): ");
    scanf("%lf", &degrees); // ↑ degrees 변수에 값 저장

    radians = degrees * (3.141592 / 180.0); // 라디안 = 각도 * ( π / 180.0 )

    tree_height = tan(radians) * distance + height; // 나무의 높이 = 탄젠트(라디안) * 나무와의 길이 + 측정자의 키
    printf("나무의 높이(단위는 미터): %lf\n", tree_height);

    return 0;
}