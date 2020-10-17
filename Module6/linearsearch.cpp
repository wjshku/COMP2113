#include<iostream>
using namespace std;
int linearsearch(int a[],int key,int start){
	for(int i = start;i < 50;i++){
		if(a[i]==key){
			return i;
		}
	}
	return -1;
}

int main(){
	int a[12]={1,2,3,4,5,6,1,2,3,4,5,6};
	int x = linearsearch(a,2,0);
	cout<<x<<endl;
	while(x!=-1){
		x = linearsearch(a,2,x+1);
		cout<<x<<endl;
	}
}

