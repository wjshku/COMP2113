#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
map<string, int> book;
string command, name; int number;
while (cin >> command >> name) {
if (command == "Add") {
cin >> number;
book[name] = number;
}
else {
if (book.count(name) > 0) {
cout << book[name];
}
else { cout << "Name not found" << endl; }
}
}
}
