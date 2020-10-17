#include <stdio.h>
#include <ctype.h>

int main()
{
  char a;

  a = '7';
  printf("%c%s%s\n", a, isdigit(a) ? " is " : " is not ", "a digit" );
  a = '$';
  printf("%c%s%s\n", a, isdigit(a) ? " is " : " is not ", "a digit" );

  a = 'B';
  printf("%c%s%s\n", a, isalpha(a) ? " is " : " is not ", "a letter" );
  a = 'b';
  printf("%c%s%s\n", a, isalpha(a) ? " is " : " is not ", "a letter" );
  a = '4';
  printf("%c%s%s\n", a, isalpha(a) ? " is " : " is not ", "a letter" );

  a = 'Z';
  printf("%c%s%s\n", a, islower(a) ? " is " : " is not ", "a lowercase letter" );
  a = 'z';
  printf("%c%s%s\n", a, isalpha(a) ? " is " : " is not ", "a lowercase letter" );
  a = '5';
  printf("%c%s%s\n", a, isalpha(a) ? " is " : " is not ", "a lowercase letter" );

  a = 'M';
  printf("%c%s%s\n", a, islower(a) ? " is " : " is not ", "an uppercase letter" );
  a = 'm';
  printf("%c%s%s\n", a, isalpha(a) ? " is " : " is not ", "an uppercase letter" );
  a = '#';
  printf("%c%s%s\n", a, isalpha(a) ? " is " : " is not ", "an uppercase letter" );

  return 0;
}
