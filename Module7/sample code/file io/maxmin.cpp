#include<iostream>
#include<fstream>

using namespace std;
int main(){
	ifstream numbers;
	int number,max,min;
	numbers.open("numbers.txt");
	if(numbers.fail()){
		cout<<"Fail!!!";
		return 0;
	}
	numbers>>number;
	max = number;
	min = number;
	while(numbers>>number){
		if(number>max) max = number;
		else if (number<min) min = number;
	}
	cout<<"max "<<max<<endl;
	cout<<"min "<<min<<endl;
}
	
