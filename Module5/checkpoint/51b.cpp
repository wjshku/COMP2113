#include <iostream>
using namespace std;

void a(){
	a = 8;
	void b(){
		b = 9;
		void c(){
			c = 10;
		}
	}
}

int main(){
	b();
	return 0;
}
