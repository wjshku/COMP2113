#include <stdio.h>

int main()
{
  int x, y, z;

  printf("Enter first integer:\n");
  scanf("%d", &x);
  printf("Enter second integer:\n");
  scanf("%d", &y);
  z = x + y;
  printf("Sum is %d\n", z);

  return 0;
}
