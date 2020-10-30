// Handling user commands

#include <iostream>
#include <string>
using namespace std;

struct course{
	string course;
	string name;
	string lecturer;
};

int main() {
	string input;
	course courses[200];
	int num=0;
	string course,name,lecturer;
	cin >> input;
	while (input != "exit") {
		if (input == "add"){
			num++;
			cin>>courses[num].course>>courses[num].name>>courses[num].lecturer;
			//cout<<courses[num].course<<courses[num].name<<courses[num].lecturer;
			// handle add commnad
		}
		if (input == "show") {
			// handle show commnad
			cin>>course;
			for(int i=0;i<=num;i++){
				//cout<<courses[i].name<<" "<<course<<endl;
				if(courses[i].course==course){
					cout<<"Name: "<<courses[i].name<<", Lecturer: "<<courses[i].lecturer<<endl;
				}
			}
		}
		cin >> input;
	}
	return 0;
}
