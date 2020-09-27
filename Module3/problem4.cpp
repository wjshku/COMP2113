#include<iostream>
using namespace std;
int main(){
	int a,b,quotient,remainder;
	cout<<"Please input two integers: ";
	cin>>a>>b;
	remainder = a%b;
	quotient = a/b;
	cout<<"quotient = "<<quotient<<" and remainder = "<<remainder;
}
