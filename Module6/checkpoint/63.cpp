#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int numarr[15] = {}, input;
	cin >> input;
	if(input>=15){
		for(int i=0;i<15;i++){
			numarr[i] = i*i;
		}
	}else if(input<15&&input>=10){
		for(int i=0;i<input;i++){
			numarr[i] = i*i;
		}
	}else{
		for(int i=0;i<input;i++){
                        numarr[i] = i*i;
                }
		for(int i=input+5;i<15;i++){
                        numarr[i] = pow(3,i);
                }
	}
	for(int i=0;i<15;i++) cout<<numarr[i]<<" ";
}
