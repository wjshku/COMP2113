#include<iostream>
using namespace std;
int main(){
	int temp,small;
	int a[10] = {23,456,24,90,13,3,1,35,6,8};
	for(int i = 0; i < 9; i++){
		for(int j = i + 1; j<10;j++){
			if(j == i+1){
				temp = a[i+1];
			}
			if(temp>a[j]){
				temp = a[j];
				small = j;
			}
		}
		cout<<"exchange"<<temp<<" "<<a[small]<<" "<<a[i]<<endl;
		if(a[i]>temp){
			a[small] = a[i];
			a[i] = temp;
		}
	}
	for(int i = 0; i <10; i++){
		cout<<a[i]<<endl;
	}
}
		
		
