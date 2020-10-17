#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  double d;
  long l;

  i = atoi("1340");
  printf("The string \"1340\" converted to int is %d\n", i);
  printf("The converted value minus 111 is %d\n", i-111);

  d = atof("23.9");
  printf("The string \"23.9\" converted to double is %.3f\n", d);
  printf("The converted value divided by 3 is %.3f\n", d / 3);

  return 0;
}
