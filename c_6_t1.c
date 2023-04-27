#include <stdio.h>
int main(void)
{
  double money = 1.0;

  for(int i = 2; i <= 30; i++)
  {
    money *= 2.0;
    printf("%d일날 현재 급액=%lf\n",i, money);
  }
  return 0;
}