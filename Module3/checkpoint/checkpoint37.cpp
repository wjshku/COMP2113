#include<iostream>
using namespace std;

int main(){
	int a,num;
	cin>>num;
	a = num/(10000);
	cout<<a<<",";
	a = (num%=10000)/1000;
        cout<<a<<",";
	a = (num%=1000)/100;
        cout<<a<<",";
	a = (num%=100)/10;
        cout<<a<<",";
	a = (num%=10);
        cout<<a;
}
