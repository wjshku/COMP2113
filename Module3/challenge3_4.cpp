#include<iostream>
using namespace std;
int main() {
	int input,i;
	double average;
	for (i=0;i<5;i++){
		cout<<"Number "<<i<<" : ";
		cin>>input;
		average += input;
	}
	average /= 5;
	cout<<"Average is: "<<average;
	int number;
	cout<<"Please input a 3-digit number: ";
	cin>>number;
	cout<<number%10<<number/10%10<<number/100;
}
