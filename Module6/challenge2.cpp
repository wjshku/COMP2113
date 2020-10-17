#include<iostream>
using namespace std;
int main(){
	int cardint,number[14]={},pair=0;
	char cardchar;
	for(int i = 0; i<10;i++){
		cin>>cardchar>>cardint;
		number[cardint]++;
	}
	for(int i = 0;i<14;i++){
		pair += (number[i]/2);
	}
	cout<<pair<<" pairs";
}
