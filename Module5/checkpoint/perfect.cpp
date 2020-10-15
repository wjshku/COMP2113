#include <iostream>
using namespace std;

const int N = 1000;

bool isPerfect(int num){
	int sum = 0;
	for(int i = 1; i < num; i++){
		if(num%i==0) sum += i;
	}
	return(num==sum);
}

int main()
{
	cout << "For the integers from 1 to " << N << ":\n";

	for (int j = 2; j <= N; ++j)
		if (isPerfect(j))
			cout << j << " is perfect\n";

	cout << endl;

	return 0;
}
