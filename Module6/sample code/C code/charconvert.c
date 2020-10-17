#include <stdio.h>
#include <ctype.h>

int main()
{
  char a;

  a = 'e';
  printf("%c converted to uppercase is %c\n", a, toupper(a));
  a = 'S';
  printf("%c converted to uppercase is %c\n", a, toupper(a));
  a = '%';
  printf("%c converted to uppercase is %c\n", a, toupper(a));
  a = '9';
  printf("%c converted to uppercase is %c\n", a, toupper(a));

  a = 'w';
  printf("%c converted to lowercase is %c\n", a, tolower(a));
  a = 'R';
  printf("%c converted to lowercase is %c\n", a, tolower(a));
  a = '&';
  printf("%c converted to lowercase is %c\n", a, tolower(a));
  a = '2';
  printf("%c converted to lowercase is %c\n", a, tolower(a));

  return 0;
}
