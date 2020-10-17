#include <iostream>
#include <string>
using namespace std;

int main()
{

    string firstName = "Alan";
	string name = firstName + " Turing";
	string str1 = "It is sunny. ";
	string str2 = "";
	string str3 = "C++ programming.";
	string str4 = firstName + " is taking " + str3;

	cout << str1.empty() << endl;
	cout << str2.empty() << endl;
  str3.erase(11,4);
 	cout << str3 << endl;
	cout << firstName.length() << endl;
	cout << name.length() << endl;
	cout << str4 << endl;

  return 0;
}
