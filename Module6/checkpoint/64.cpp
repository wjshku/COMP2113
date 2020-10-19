#include<iostream>
using namespace std;
int main(){
	double number,mean,var,input[20];
	cin>>number;
	for(int i=0; i<number; i++){
		cin>>input[i];
		mean += input[i];

	}
	mean /= number;
	for(int i=0; i<number; i++){
		var += input[i]*input[i]/number;
	}
	var -= mean*mean;
	cout<<"Variance = "<< var;
}
