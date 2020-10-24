#include<iostream>
#include<string>
#include<fstream>
#include<cctype>

using namespace std;
struct words{
	string word;
	int counts = 0;
};

int main(){
	words list[50];
	ifstream fin;
	string word;
	int num = 0, inornot;
	fin.open("countword.txt");
	if(fin.fail()){
		cout<<"Error";
		return 0;
	}
	while(fin>>word){
		//if(!ispunct()))
		inornot = 0;
		for(int i = word.length()-1; i>=0;i--){
			if(!isalpha(word[i])){
				word.erase(i,1);
			}
		}
		//cout<<word<<endl;
		for(int i = 0;i<num;i++){
			if(list[i].word==word){
				list[i].counts++;
				inornot = 1;
			}
		}
			if(inornot==0){
				list[num].word = word;
				list[num].counts = 1;
				num++;
			}
	}
	for(int i = 0;i<num;i++){
		cout<<list[i].word<<": "<<list[i].counts<<endl;
	}
}	
