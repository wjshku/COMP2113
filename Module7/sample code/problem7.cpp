#include<iostream>
#include<string>
using namespace std;

struct Entry{
	string Firstname;
	string Lastname;
	char dorm;
	int age;
};

int main(){
	Entry inputarr[400],temp;
	int i = 0,min,index;
	while(cin>>inputarr[i].Firstname){
		cin>>inputarr[i].Lastname>>inputarr[i].dorm>>inputarr[i].age;
		i++;
	}
	for(int n = 0;n<i;n++){
		min = inputarr[n].age;
		index = n;
		for(int m = n;m<i;m++){
			if(min > inputarr[m].age){
				min = inputarr[m].age;
				index = m;
			}
		}
		if(index!=n){
			temp = inputarr[n];
			inputarr[n] = inputarr[index];
			inputarr[index] = temp;
		}
	}
	for(int n = 0;n<i;n++){
		cout<<inputarr[n].Lastname<<inputarr[n].dorm<<inputarr[n].age;
		cout<<endl;
	}
}
