#include <iostream>
using namespace std;

// ### Implement birthday() here ###

// ###

int birthday(int &myAge){
	myAge ++;
}

int main(){
    int myAge;
    cin >> myAge;
    birthday(myAge);
    cout << "My age after birthday is " << myAge;
}
