#include<iostream>
#include<string>
using namespace std;
int main(){
	string oristr,from,to,first,last;
	getline(cin,oristr);
	cin>>from;
	cin>>to;
	int start = 0;
	while(oristr.substr(start,oristr.length()-start).find(from)!=-1){
		first = oristr.substr(0,start);
		last = oristr.substr(start,oristr.length()-start).replace(oristr.substr(start,oristr.length()-start).find(from),from.length(),to);
		oristr = first + last;
		start = start + oristr.substr(start,oristr.length()-start).find(to)+to.length();

	}
	cout<<oristr;
}
