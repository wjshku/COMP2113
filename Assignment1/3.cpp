#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	int n,i,j;
	double x,k,taylor,sint;
	cin>>x>>n;
	double cmathsin = sin(x);
	cout<<"sin(x) by cmath: "<<fixed<<setprecision(15)<<cmathsin<<endl;
	cout<<"Taylor series approximation:"<<endl;
	for(i=0;i<=n;i++){
	sint = 0;
	for(j=0;j<=i;j++){
	taylor=1;
	//sin denote the final value of sin(x)
	//taylor is each addition
	for (k=1;k<=2*j+1;k++){
	taylor /= k;
	taylor *= x;
	//cout<<"k:"<<k<<endl<<"tay:"<<taylor<<endl;
	}
	//cout<<"tay:"<<taylor<<endl;
	if(j%2==0)sint += taylor;
	else sint -= taylor;
	//cout<<"sint "<<sint<<endl;
	}
	cout<<i<<" "<<sint<<endl;
	}
	
}

