#include<iostream>
using namespace std;

int main(){
	double weight,height;
	cin>>weight>>height;
	cout<<"Your BMI = "<<weight/height/height<<endl;
	cout<<"BMI VALUES"<<endl<<"Underweight: less than 18.5"<<endl<<"Normal: between 18.5 and 24.9"<<endl<<"Overweight: between 25 and 29.9"<<endl<<"Obese: 30 or greater";
}
