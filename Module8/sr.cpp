#include<iostream>
using namespace std;

int main(){
	int * aptr;
	int n;
	int a[5] = {1,2,3,4,5};
	aptr = a;
	n = *aptr;
	cout<<a<<" "<<aptr<<" "<<a+1<<" "<<aptr+1;
}
