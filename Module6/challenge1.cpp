#include<iostream>
using namespace std;
int main(){
	int input,division[50]={},temp = 2;
	cin>>input;
	while(input!=1){
		if(input%temp==0){
			input /= temp;
			division[temp]++;
		}else{
			temp++;
		}
	}
	for(int i=0;i<50;i++){
		if(division[i]!=0){
			cout<<division[i]<<" "<<i<<endl;
		}
	}
}

