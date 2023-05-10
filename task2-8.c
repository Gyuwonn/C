#include <stdio.h>
#include <math.h>

int main(void)
{
    double result, value = 1.6; // result 와 value 값은 1.6 으로 동일

    result = floor(value);  // result 는 1.0 이다. (floor = 내림값)
    printf("%.1lf\n", result); // .1 로 소수점 1자리까지 표현
    result = ceil(value); // result 는 2.0 이다. (ceil = 올림값)
    printf("%.1lf\n", result);
    return 0;
}