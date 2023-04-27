#include <stdio.h>
int main(void)
{
  int x, y, z;
  int a, b, c, d;

  x = 20;
  y = 10;

  a = x + y;
  b = x - y;
  c = x * y;
  d = x / y;

  printf("두 수의 합 : %d", a);
  printf("두 수의 차 : %d", b);
  printf("두 수의 곱 : %d", c);
  printf("두 수의 몫 : %d", d);

  return 0; 

}