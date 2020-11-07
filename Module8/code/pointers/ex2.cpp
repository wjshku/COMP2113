#include<iostream>
using namespace std;

void addOneref(int &num){
	num++;
}

void addOnepoi(int *p){
	(*p)++;
}

int main(){
	int num = 0;
	addOneref(num);
	cout<<num<<endl;
	addOnepoi(&num);
	cout<<num<<endl;
}
