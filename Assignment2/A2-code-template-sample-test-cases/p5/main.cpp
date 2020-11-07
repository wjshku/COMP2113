#include<iostream>
#include "d2boh.h"
using namespace std;

int main(){
	int input, outputb[10]={},outputo[10]={};
	char outputh[10]={};
	cout<<"Enter a positive integer in the range [1, 100]: ";
	cin>>input;
	decimal_to_binary(input,outputb);
	decimal_to_octal(input,outputo);
	decimal_to_hexadecimal(input,outputh);
	cout<<"Binary of the given number = ";
	for(int i = 0;i<10;i++) cout<<outputb[i];
	cout<<endl;
	cout<<"Octal of the given number = ";
	for(int i = 0;i<10;i++) cout<<outputo[i];
        cout<<endl;
	cout<<"Hexadecimal of the given number = ";
      	for(int i = 0;i<10;i++) cout<<outputh[i];
        cout<<endl;
	return 0;
}

