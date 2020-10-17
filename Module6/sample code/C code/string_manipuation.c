#include <stdio.h>
#include <string.h>

int main()
{
  char x[30] = "ENGG1340 computer programming";
  char y[30], z[10];
  char s1[20] = "Keep calm ";
  char s2[20] = "and code ";
  char s3[40] = "";

  strcpy(y, x);
  printf("%s\n%s\n", x, y);

  strncpy(z, x, 8);
  printf("%s\n%s\n", z, y);

  printf("%s\n", s1);
  strcat(s1, s2);
  printf("%s\n", s1);
  strncat(s3, s2, 4);
  printf("%s\n", s3);
  strcat(s3, s1);
  printf("%s\n", s3);

  printf("%d\n", strcmp(x, y));
  printf("%d\n", strcmp(s1, s3));
  printf("%d\n\n", strcmp(s1, x));

  printf("length of x = %d\n", strlen(x));

  return 0;
}
