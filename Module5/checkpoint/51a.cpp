#include<iostream>
using namespace std;
double multiplication(double a, double b){
	int result;
	result = a * b;
	return result;
}
int main(){
	double result;
	result = multiplication(2.5, 1.5);
	cout << result << endl;
	return 0;
}
