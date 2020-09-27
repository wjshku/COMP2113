#include<iostream>
#include<string>
using namespace std;
void inputname(){
string first;
cout << "what's your name?";
cin >>first;
cout<<first;
}
void ifstatement(){
        int a,b;
	cout<<",please enter two numbers from 1 to 10: ";
	cin>>a>>b;
	if(a+b>8)
		cout<<"a+b="<<a+b;
	else
		cout<<"a+b is too small";
}
void countdown(){
	for(int count=10;count>0;count--)
		cout<<count;
}
int main(){
countdown();
}

