#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void print(vector<string> list){
	vector<string>::iterator itr;
	cout<<"Items: ";
	for(itr = list.begin(); itr != list.end(); itr++){
		cout<<(*itr);
		if(itr+1 != list.end())
			cout<<", ";
	}
	cout<<endl;
}

int main(){
	vector<string> list;
	vector<string>::iterator itr;
	int findornot = 0;
	print(list);
	list.push_back("eggs");
	list.push_back("milk");
	list.push_back("sugar");
	list.push_back("chocolate");
	list.push_back("flour");
	print(list);
	list.pop_back();
	print(list);
	list.push_back("coffee");
	print(list);
	for(itr = list.begin(); itr != list.end(); itr++){
		if(*itr == "sugar"){
			*itr = "honey";
			break;
		}
	}
	print(list);
	for(itr = list.begin(); itr != list.end(); itr++){
		if(*itr == "milk"){
			findornot = 1;
		}
		if(findornot == 1){
			*itr = *(itr+1);
		}
	}
	list.pop_back();
	print(list);
}
