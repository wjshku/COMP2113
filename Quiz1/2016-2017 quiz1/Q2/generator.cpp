#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
using namespace std; 
int main()
{
  	random_device rd;
	mt19937 gen(rd());
	int mean,sd;
	cin >> mean >> sd; //integer
	normal_distribution<> d(mean,sd);
	cout << round(d(gen)) << endl;
}
