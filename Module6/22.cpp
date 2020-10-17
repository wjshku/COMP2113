#include<stdlib.h>
#include<iostream>
using namespace std;
int main(){
	srand(time(NULL));
	int frequency[7] = {};
	int times;
	int dice;
	cin>>times;
	for(int i = 0;i < times;i++){
		dice = rand()%6 + 1;
		frequency[dice] ++;
	}
	for(int i = 0;i<7;i++)
		cout<<frequency[i];
}


