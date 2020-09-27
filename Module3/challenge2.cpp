#include<iostream>
using namespace std;
int main() {
	//for(int i =0;i<4;i++){
		int a = 4,b=3,c=2;
	a += b += c;
	cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
	                 a = 4,b=3,c=2;
        a *= b *= c;
        cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
	                 a = 4,b=3,c=2;
        a += b %= c;
        cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
	                 a = 4,b=3,c=2;
        (a += b) *= c;
        cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;

	//}
	return 0;
}
