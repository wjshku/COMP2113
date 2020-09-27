#include<iostream>
#include <math.h> 
using namespace std;

int main(){
	int a,i,num,temp;
	cin>>num;
	for(i=5;i>0;i--){
		temp = pow(10,i);
		a = (num%=(temp))/(temp/10);
		cout<<a<<",";
	}
}
