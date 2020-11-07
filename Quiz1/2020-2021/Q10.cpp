#include <iostream>
using namespace std;
int f1(int n, int r) {
 //Implement your function here.
	double result = 1;
	for(int i=0;i<r;i++){
		result = result * (n-r+i+1)/(i+1);
	}
	return result;
}
int main()
{
 int n,r;
 cin>>n;
 cin>>r;
 cout<<f1(n,r)<<endl;
}
