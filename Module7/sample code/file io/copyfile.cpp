#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;
int main(){
	string filename,line;
	ifstream input;
	ofstream output;
	cout<<"Please input a filename: ";
	cin>>filename;
	input.open(filename.c_str());
	output.open("newfile.txt",ios::app);
	if(input.fail()||output.fail()){
		cout<<"Error in file opening!";
		exit(1);
	}
	while(getline(input,line)){
		cout<<line<<endl;
		output<<line<<endl;
	}
	output.close();
}
