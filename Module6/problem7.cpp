#include<iostream>
using namespace std;
int charToInt(char a){
	return a -'0';
}
void erase(char origin[],int pos,int len){
	int length = sizeof(origin)/sizeof(origin[0]);
	for(int i=0;i < length-pos-len;i++){
		origin[pos-1+i]=origin[pos+len-1+i];
	}
	origin[length-len-1]='\0';
}
int main(){
	char a[]={'a','b','1','0','4','\0'};
	cout<<a<<endl;
	erase(a,2,1);
	cout<<a;
}
	
