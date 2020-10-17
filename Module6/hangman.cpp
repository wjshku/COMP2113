#include<iostream>
#include<string>
using namespace std;
void replaceall(string &,string &,char);
int main(){
	string line0 = "	|",
	       line1 = "	0",
	       line2 = "       /|\\",
	       line3 = "       / \\",
	       word = "wangjunshi",
	       display = "__________";
	char guess;
	int wrongtimes = 0;
	while(display!=word){
		cout<<"Word:\n"<<display<<endl<<line0<<endl;
		//line1
		if(wrongtimes>0)cout<<line1; 
		cout<<endl;
		//line2
		if(wrongtimes>1)cout<<line2.substr(0,6+wrongtimes);
		cout<<endl;
		//line3
		if(wrongtimes>4)cout<<line3.substr(0,4+wrongtimes);
		cout<<endl;
		cout<<"Guess a letter: ";
		cin>>guess;
		if(word.find(guess)==-1)wrongtimes++;
		else{
			replaceall(word,display,guess);
		}
		if(wrongtimes>6){
			cout<<endl<<"You lose";
			break;
		}
	}
	if(wrongtimes<=6)cout<<"You win!";
	
}
void replaceall(string &word,string &display,char to){
	string sub = word;
	while(sub.find(to)!=-1){
		display[sub.rfind(to)]=to;
		//sub[sub.find(to)]='_';
		sub = word.substr(0,sub.rfind(to));
	}
}
