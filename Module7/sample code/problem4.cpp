#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include <cstdlib>
using namespace std;
int main(){
	ifstream fin;
	string filename,line,word,file = "";
	int words = 0;
	cin >> filename;
	fin.open(filename.c_str());
	if (fin.fail()) {
		cout << "Error in file opening!"
			<< endl;
  		exit(1);
	}
	while(getline(fin,line)){
		file += " "+line;
	}
	istringstream line_in(file);
	while(line_in>>word){
		//cout<<word<<endl;
		if(words%2==1)cout<<word<<" ";
		words++;
	}

}



