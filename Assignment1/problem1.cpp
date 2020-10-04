#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float x,total;
	int degree,a;
	int i=0;
	cin>>x;
	cin>>degree;
	cin>>a;
	total = a; 
	while(i<2*degree){
		if(degree==0){break;}
		if(i%2==0){
			total *= x;
			cin>>a;
		}
		else{
			total += a;
		}
		i++;
		//cout<<total<<" "<<a<<" "<<i<<endl;
	}
	cout<<fixed<<setprecision(6)<<total<<endl;
}
