#include<iostream>
using namespace std;
int main(){
	int input=1,inputs[6]={};
	while(input!=0){
		cin>>input;
		if(input<=6&&input>=1){
			inputs[input-1]++;
		}
	}
	for(int i=0;i<6;i++){
		cout<<inputs[i]<<endl;
	}
}
		
