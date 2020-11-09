#include<iostream>
using namespace std;

int main(){
	int SIZE,
	    temp,
	    index = 0,
	    max = 0;
	cin>>SIZE;
	int *set = new int[SIZE];
	for(int i = 0; i < SIZE; i++){
		cin>>set[i];
		if(set[index]==set[i]) max++;
	}
	for(int i = 0; i < SIZE; i++){
		temp = 0;
		for(int j = i; j < SIZE; j++){
			if(set[j]==set[i]) temp++;
		}
		if(max < temp){
			max = temp;
			index = i;
		}
	}
	cout<<"The mode of the set is "<<set[index];
	delete[] set;
}

