#include <iostream>
#include <math.h>
using namespace std;

int reverse(int N) {
    // Several missing statements
    // digits stores the digits of input
    // time stores the number of digits

   	int digits[15], time = 0, temp;
	if(N < 0){
	       	temp = -N;
	}else{
		temp = N;
	}
	while(temp > 0){
		digits[time] = temp % 10;
		temp /= 10;
		time++;
	}
	for(int i = 0; i<time; i++){
		temp += digits[i] * pow(10,time-i-1);
	}
	if(N < 0) temp = -temp;
	return temp;

}

int main() {
    int N;
    cout << "Please input an integer: ";
    cin >> N;
    cout << "Result: " << reverse(N) << endl;
    return 0;
}
