#include<iostream>
#include<string>
using namespace std;
int main(){
	char convert = 'A'-'a', output;
	string input;
	cout<<"LET'S CONVERT!";
	cin>>input;
	for(char i: input){
		output = i-convert;
		cout<<output;
	}
	return 0;
}
