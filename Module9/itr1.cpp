#include<iostream>
#include<list>
using namespace std;

int main(){
	list<int> input;
	for(int i = 0; i<10; i++){
		input.push_back(i);
	}

	list<int>::iterator itr;
	for(itr = input.begin(); itr != input.end(); itr++){
		cout<< *itr+1 << endl;
	}
}
