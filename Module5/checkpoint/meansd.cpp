#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double mean(double x1,double x2,double x3,double x4,double x5){
	return (x1+x2+x3+x4+x5)/5;
}

double sd(double x1,double x2,double x3,double x4,double x5,double xmean){
	double sd = sqrt((pow(x1-xmean,2)+pow(x2-xmean,2)+pow(x3-xmean,2)+pow(x4-xmean,2)+pow(x5-xmean,2))/5);
	return sd;
}

int main(){
	double x1,x2,x3,x4,x5,xmean,xsd;
	cin>>x1>>x2>>x3>>x4>>x5;
	xmean = mean(x1,x2,x3,x4,x5);
	xsd = sd(x1,x2,x3,x4,x5,xmean);
	cout<<fixed<<setprecision(2)<<"Mean = "<<xmean<<endl;
	cout<<fixed<<setprecision(2)<<"Standard deviation = "<<xsd<<endl;
}
