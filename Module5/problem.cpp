#include <iostream>
using namespace std;

double average(double a, int b){
	return (a+b)/2;
}

bool perfectnumber(int x){
	int i, sum=0;
	for(i=1;i<=(x/2);i++){
		if(x%i==0) sum += i;
	}
	if(sum == x) return 1;
	else return 0;
}

void diamond(int line){
	int i,j,space,dia;
	for(i = 1;i<=line;i++){
		for(j = 0;j < line-i;j++){
			cout<<" ";
		}
		for(j = 0;j < 2*i - 1;j++){
                        cout<<"*";
                }
		cout<<endl;
	}
	for(i = line-1;i>0;i--){
                for(j = 0;j < line-i;j++){
                        cout<<" ";
                }
                for(j = 0;j < 2*i - 1;j++){
                        cout<<"*";
                }
		cout<<endl;
        }

}

int main(){
	int line;
	diamond(4);
} 
