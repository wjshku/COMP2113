#include<iostream>
using namespace std;
int main(){
	int sum=0,input[10];
	for(int i = 0;i<10;i++){
		cin>>input[i];
		sum += input[i];
	}
	for(int i = 0;i<10;i++){
	       cout<<input[9-i]<<endl;
	}
	cout<<sum;
}	
