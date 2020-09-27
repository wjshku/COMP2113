#include<iostream>
using namespace std;
int main(){
        int i,total;
        for(i=20;i>0;--i){
		if((i%2)==0) continue;
		total+=i;
		cout<<i<<endl;	
	}
	cout<<"Total is: "<<total;
        return 0;
}
