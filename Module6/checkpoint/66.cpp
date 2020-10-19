#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
	string input,output;
	int numalpha=0;
	getline(cin,input);
	output = input;
	for(int i = 0; i< input.length();i++){
		if(isalpha(input[i])){
			output[numalpha] = tolower(input[i]);
			numalpha++;
		}
	}
	output = output.substr(0,numalpha);
	for(int i = 0; i < output.length()/2;i++){
		if(output[i]!=output[output.length()-1-i]){
			//cout<<output<<endl;
			cout<<"The input string is not a palindrome.";
			return 0;
		}
	}
	//cout<<output<<endl;
	cout<<"The input string is a palindrome.";
}
