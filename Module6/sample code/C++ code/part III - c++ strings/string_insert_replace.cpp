#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1 = "Cloudy and warm.";
	string s2 = "Angel is taking programming.";
	string t1 = " very";
	string t2 = "Nelson";

  s1.insert(10, t1);
  s2.replace(0, 5, t2);

	cout << s1 << endl;
	cout << s2 << endl;

  return 0;
}
