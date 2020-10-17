#include<iostream>
using namespace std;
int main(){
	const int range = 10;
	int a[range]={};
	for(int i=1;i<range;i++){
		if(!a[i]){
			for(int j = i+1;j<range;j++){
				if((j+1)%(i+1)==0){
					a[j]=1;
				}
			}
		}
	}
	for(int k = 0;k<range;k++){
		if(a[k]==0){
		cout<<k+1<<endl;
		}
	}
}
