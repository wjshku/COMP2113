#include<iostream>
using namespace std;
void pastearray(int a[],int b[],int size){
	for(int i = 0; i < size; i++){
		b[i] = a[i];
	}
}
int main(){
        const int size = 5;
	int a[size] = {1,2,3,4,5},b[size];
	pastearray(a,b,size);
	for(int i = 0; i < size; i++){
                cout<<b[i]<<endl;
        }
}
