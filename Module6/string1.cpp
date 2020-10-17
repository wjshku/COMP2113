#include<iostream>
#include<string>
using namespace std;
void replaceAll(string &input, string from, string to){
	int fromlen = from.length(),inputlen = input.length(),tolen = to.length();
	int place = inputlen-1;
	string sub;
	while(true){
		//sub = input.substr(0,place);
		place = input.rfind(from);
		if(place == -1) break;
		input = input.replace(place,from.length(),to);
	}
}
		
int main(){
	string input = "I study in HKU and I love HKU";
	string from = "HKU";
	string to = "HongKongU";
	replaceAll(input,from,to);
	cout<<input<<endl;
	//cout<<input.replace(input.rfind(from),from.length(),to);
}

//find rfind substr insert erase
