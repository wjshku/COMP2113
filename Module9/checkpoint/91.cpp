#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct record{
	string name;
	string major;
	int id;
};

int main(){
	vector<record> records;
	string command,
	       name,
	       major;
	int id,findornot = 0;
	record student;
	while(cin>>command){
		if(command == "Add"){
			cin>>name;
			cin>>major;
			cin>>id;
			student.name = name;
			student.major = major;
			student.id = id;
			records.push_back(student);
			cout<<"Added Successfully"<<endl;
		}else if(command == "Search"){
			cin>>name;
			cin>>major;
			for(int i = 0; i < records.size(); i++){
				if(records[i].name == name && records[i].major == major){
					cout<<"Student Number:"<<records[i].id<<endl;
					findornot = 1;
					break;
				}
			}
			if(findornot == 0){
				cout<<"No Record found"<<endl;
			}
			findornot = 0;
		}else if(command == "Quit"){
			cout<<"Bye"<<endl;
			break;
		}
	}
}
