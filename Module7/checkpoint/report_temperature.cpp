#include <iostream>
#include <string>
#include<fstream>
#include<iomanip>
using namespace std;


int main() {
	ifstream temp;
	ofstream write;
	string date;
	double temperature,avg;
	temp.open("temperature.txt");
	write.open("average.txt");
	while(temp>>date){
		avg = 0;
		for(int i=0;i<24;i++){
			temp>>temperature;
			avg += temperature;
		}
		cout<<fixed<<setprecision(1)<<date<<" "<<avg/24<<endl;
		write<<fixed<<setprecision(1)<<date<<" "<<avg/24<<endl;
	}
	temp.close();
	return 0;
}
