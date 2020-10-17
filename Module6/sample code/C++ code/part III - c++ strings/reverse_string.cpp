#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text;
	string rev;

	cin >> text;
	int length = text.length();		// length of input text

	for (int i = length-1; i >= 0; --i)
	{
		rev += text[i];
	}

	cout << "The reverse of " << text << " is " << rev << endl;
	return 0;
}
