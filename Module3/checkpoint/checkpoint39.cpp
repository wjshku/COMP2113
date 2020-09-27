#include<iostream>
using namespace std;
int main(){
	double average =0,i=0;
	int times = 0;
	while(times>=0){ 
		cin>>i;
		if(i==-1) break;
		average=average+i;
		times++;
	}
	average/=times;
	cout<<average;
}
