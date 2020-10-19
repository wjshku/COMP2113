#include<iostream>
#include<string>
using namespace std;
int main(){
	string oristr,from,to;
	getline(cin,oristr);
	cin>>from;
	cin>>to;
	while(oristr.find(from)!=-1){
		oristr = oristr.replace(oristr.find(from),from.length(),to);
	}
	cout<<oristr;
}
