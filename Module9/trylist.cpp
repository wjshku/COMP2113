#include<iostream>
#include<string>
#include<list>
using namespace std;

int main(){
	list<string> names;
	list<int> numbers;
	string command, name;
	int number;
	while(cin>>command>>name){
		if(command=="add"){
			cin>>number;
			names.push_back(name);
			numbers.push_back(number);
		}else if(command=="search"){
			for(int i = 0;i<names.size();i++){
				if(names.front() == name){
					cout<<numbers.front()<<endl;
				}else{
					cout<<"Not in the first one"<<endl;
				}
			}
		}else{
			cout<<"Please input a valid command"<<endl;
		}
	}
}	
