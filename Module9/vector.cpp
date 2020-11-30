#include <iostream>
#include <string>
#include <vector>
//header file for vector
using namespace std;
int main() {
vector<string> names; //create an empty vector of string
vector<int> numbers;
string command, name; int number;
while (cin >> command >> name) {
if (command == "Add") {
cin >> number;
names.push_back(name); //add a string to the end
numbers.push_back(number);
}
else {
//command == "Search"
for (int i = 0; i < names.size(); i++)
if (names[i] == name)
//access the i-th string
cout << numbers[i];
}
}
}
