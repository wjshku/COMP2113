#include<iostream>
using namespace std;
int main(){
	double x[2][2][3] = { { {3, 4, 2}, {0, -3, 9} }, { {13, 4, 56}, {5, 9, 3}}};
	int max = x[0][0][0];
	int min = max;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<3;k++){
				if(max<x[i][j][k]) max = x[i][j][k];
				else if(min>x[i][j][k]) min = x[i][j][k];
			}
		}
	}
	cout<<"min "<<min<<endl;
	cout<<"max "<<max<<endl;
}

