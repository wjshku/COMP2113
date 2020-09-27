#include<iostream>
using namespace std;

int main(){
	int a = 5,b = 6;
	a = (b++) + 3;
	cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
	int c = 2*a+(++b);
        cout<<"a: "<<a<<endl<<"b: "<<b<<endl<<"c: "<<c<<endl;
	b = 2*(++c)-(a++);
       	cout<<"a: "<<a<<endl<<"b: "<<b<<endl<<"c: "<<c<<endl;

}
