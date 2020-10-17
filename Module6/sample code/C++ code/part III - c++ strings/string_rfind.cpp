#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "Outside it is cloudy and warm.";
	string t = "cloudy";

	cout << s.rfind("is") << endl;
	cout << s.rfind('s') << endl;
 	cout << s.rfind(t) << endl;
	cout << s.rfind('i', 6) << endl;
	cout << s.rfind('o') << endl;
	if (s.rfind ("the") == -1)
		cout << "not found" << endl;
	if (s.rfind ("the") == string::npos)
		cout << "not found" << endl;

	return 0;
}
