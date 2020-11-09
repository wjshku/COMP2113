#include<iostream>
#include "d2boh.h"
using namespace std;

int main(){
	int input, outputb[10]={},outputo[10]={};
	char outputh[10]={};
	cout<<"Enter a positive integer in the range [1, 100]: ";
	cin>>input;

	int start = 0;

	decimal_to_binary(input,outputb);
	decimal_to_octal(input,outputo);
	decimal_to_hexadecimal(input,outputh);
	cout<<"Binary of the given number = ";
	for(int i = 0;i<10;i++){
	        if(outputb[i]!=0){
			start++;
		}	
		if(start > 0){
			cout<<outputb[i];
		}
	}
	start = 0;
	cout<<endl;
	cout<<"Octal of the given number = ";
	for(int i = 0;i<10;i++){
	       if(outputo[i]!=0){
                        start++;
                }
                if(start > 0){
                        cout<<outputo[i];
                }
	}
	start = 0;
        cout<<endl;
	cout<<"Hexadecimal of the given number = ";
      	for(int i = 0;i<10;i++){
		//if(outputh[i]!='0'){
                  //      start++;
                //}
                //if(start > 0){
                        cout<<outputh[i];
                //}
	}
	start = 0;
        cout<<endl;
	return 0;
}

