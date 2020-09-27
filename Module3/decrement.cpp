#include <iostream> 
using namespace std;
 
int main(){
	int x=0,total=0,n;
	cout<<"Enter the number of values to be added: ";
	cin>>n;
	while(n >= 0){
	cout << "next number? ";
	cin >> x;
	total += x;
	cout<<"Total is "<<total;
	n--;
	}
return 0;
}
