#include<iostream>
using namespace std;

int main(){
	int a,b,divisor1,divisor2;
	cout<<"a: ";cin>>a;
	cout<<"b: ";cin>>b;
	cout<<"Divisor 1: ";cin>>divisor1;
	cout<<"Divisor 2: ";cin>>divisor2;
	cout<<"M "<<divisor1<<" "<<divisor2<<endl;
	for(a;a<b;a++){
		int result1 = a%divisor1,result2 = a%divisor2;
		cout<<a<<" ";
		if (result1== 0){cout<<"1 ";}else cout<<"0 ";
		if (result2== 0) cout<<"1"<<endl; else cout<<"0"<<endl;
	}
}
