#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "Outside it is cloudy and warm.";
	string t = "cloudy";

	cout << s.find("is") << endl;
	cout << s.find('s') << endl;
	cout << s.find(t) << endl;
	cout << s.find('i', 6) << endl;
	cout << s.find('o') << endl;
	if (s.find ("the") == -1)
	cout << "not found" << endl;
	if (s.find ("the") == string::npos)
	cout << "not found" << endl;

	return 0;
}
