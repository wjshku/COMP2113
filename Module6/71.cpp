#include <iostream>
#include <cctype>

using namespace std;

int main()
{
  char a;

  a = '7';
  cout << a << (isdigit(a) ? " is " : " is not ") << "a digit" << endl;
  a = '$';
  cout << a << (isdigit(a) ? " is " : " is not ") << "a digit" << endl;

  a = 'B';
  cout << a << (isalpha(a) ? " is " : " is not ") << "a letter" << endl;
  a = 'b';
  cout << a << (isalpha(a) ? " is " : " is not ") << "a letter" << endl;
  a = '4';
  cout << a << (isalpha(a) ? " is " : " is not ") << "a letter" << endl;

  a = 'Z';
  cout << a << (islower(a) ? " is " : " is not ") << "a lowercase letter" << endl;
  a = 'z';
  cout << a << (islower(a) ? " is " : " is not ") << "a lowercase letter" << endl;
  a = '5';
  cout << a << (islower(a) ? " is " : " is not ") << "a lowercase letter" << endl;

  a = 'M';
  cout << a << (isupper(a) ? " is " : " is not ") << "an uppercase letter" << endl;
  a = 'm';
  cout << a << (isupper(a) ? " is " : " is not ") << "an uppercase letter" << endl;
  a = '#';
  cout << a << (isupper(a) ? " is " : " is not ") << "an uppercase letter" << endl;

  return 0;
}
