#include <iostream>
#include <string>
#include <map>
using namespace std;
class Record {
public:
string name;
int number;
};

bool operator<(const Record& a, const Record& b){
	return a.name < b.name;
}

int main() {
map<Record, int> book;
string command; Record r;
while (cin >> command >> r.name) {
	if (command == "Add") {
		cin >> r.number;
		book[r] = r.number;
	}
	else {
		if (book.count[r] > 0) {
			cout << book[r];
		}
	else { cout << "Name not found" << endl; }
	}
}
}

