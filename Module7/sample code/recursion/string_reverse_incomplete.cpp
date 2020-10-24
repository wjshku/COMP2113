#include<iostream>
#include<string>
using namespace std;
void reverse(string &input){
	int leng = input.length();
	char temp;
	for(int i = 0;i<leng/2;i++){
		temp = input[i];
		input[i] = input[leng-1-i];
		input[leng-1-i] = temp;
	}
}
string reverserecur(string input){
	int leng = input.length();
	if(leng==1) return input;
	return input[leng-1]+reverserecur(input.substr(0,leng-1));
}

int main(){
	string input;
	cin>>input;
	//reverse(input);
	cout<<reverserecur(input);
}
