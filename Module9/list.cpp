#include <iostream>
#include <string>
#include <list>
using namespace std;
int main() {
list<string> names;
//create a list of strings
list<int> numbers;
string command, name; int number;
while (cin >> command >> name) {
if (command == "Add") {
cin >> number;
names.push_back(name); //insert a string to the end
numbers.push_back(number);
}
else {
for (int i = 0; i < names.size(); i++) {
if (names.front() == name)
cout << numbers.front(); //access first string
else {
names.push_back(names.front());
names.pop_front();
numbers.push_back(numbers.front());
numbers.pop_front();
}
}
}}}
