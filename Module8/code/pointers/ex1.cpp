#include<iostream>
using namespace std;

int * returnpointer(int input[],int size){
	int max = 0;
	for(int i = 0; i < size; i++){
		if(input[max]<input[i]){
			max = i;
		}
	}
	return &input[max];
}

int main(){
	int input[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<returnpointer(input,10);
}

