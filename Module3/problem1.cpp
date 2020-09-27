#include<iostream>
#include<string>
using namespace std;
int main(){
	int lines = 13;
	int i,j;
	int repeat = 10;
	string type1 = "******************";
	string type2 = "*                *";
	string type3 = "* HH   HH     II *";
	string type4 = "* HHHHHHH     II *";
	for(i =0;i<lines;i++){
		if(i==0||i==12)
			cout<<type1;
		else if(i==1||i==11)
			cout<<type2;
		else if(i==6)
			cout<<type4;
		else
			cout<<type3;
		cout<<endl;
	};
return 0;
}
