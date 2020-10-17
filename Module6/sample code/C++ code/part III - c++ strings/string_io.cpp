#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word1, word2, word3;
    cout << "Please input a sentence: " << endl;

    cin >> word1 >> word2 >> word3;

    cout << "Word 1 = \"" << word1 << "\"\n"
         << "Word 2 = \"" << word2 << "\"\n"
         << "Word 3 = \"" << word3 << "\"\n";
    return 0;
}
