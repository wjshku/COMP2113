// d2boh.cpp

#include <iostream>
#include "d2boh.h"
using namespace std;

int decimal_to_binary(int input, int output[10]) {
	// To be implemented
	int remainer,level = 0;

	while((input/2) > 0){
	       	remainer = input % 2;
	       	input = input / 2;
		output[9 - level] = remainer;
		level++;
	}
	remainer = input % 2;
        input = input / 2;

        output[9 - level] = remainer;
	
}

int decimal_to_octal(int input, int output[10]) {
	// To be implemented
	int remainer,level = 0;

        while((input/2) > 0){
                remainer = input % 8;
		input = input / 8;

                output[9 - level] = remainer;
                level++;
        }
	remainer = input % 8;
        input = input / 8;

        output[9 - level] = remainer;


}

int decimal_to_hexadecimal(int input, char output[10]) {
	// To be implemented
	int remainer,level = 0;

        while((input/2) > 0){
                
                remainer = input % 16;
		input = input / 16;

		if(remainer<10){
			output[9 - level] = remainer - 1 + '1';
		}else{
			output[9 - level] = remainer - 10 + 'A';
		}
                level++;
        }
	remainer = input % 16;
        input = input / 16;
        if(remainer<10){
		output[9 - level] = remainer - 1 + '1';
	}else{
		output[9 - level] = remainer - 10 + 'A';
        }


}
