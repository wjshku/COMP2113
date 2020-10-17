#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    string s;
	string str;

	s = "It is cloudy and warm.";

	cout << '\"' << s.substr(0, 5) << '\"' << endl;
	cout << '\"' << s.substr(6, 6) << '\"' << endl;
 	cout << '\"' << s.substr(6, 16) << '\"' << endl;
	cout << '\"' << s.substr(17, 10) << '\"' << endl;
	cout << '\"' << s.substr(3, 6) << '\"' << endl;
	str = s.substr(0, 8);
	cout << '\"' << str << '\"' << endl;
	str = s.substr(2, 10);
	cout << '\"' << str << '\"' << endl;


    return 0;
}
