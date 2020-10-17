#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Please input a sentence: " << endl;
    getline(cin, s);
    cout << "s = \"" << s << "\"\n";


    cout << "Input 2 comma-separated phrases: " << endl;
	getline(cin, s, ',');
	cout << "1st phrase = \"" << s << "\"\n";

    return 0;
}
