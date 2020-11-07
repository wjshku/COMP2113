// You can use this file to write your own client program
// This file will be executed by the "run" button in VPL
// This file will be ignored by the "evaluate" button in VPL

#include "Quaternion.h"
#include <iostream>
using namespace std;

int main(){   
    Quaternion q1;
    Quaternion q2(1,2,3,4);
    Quaternion q3(1.5,2.5,3.5,4.5);
    Quaternion q4(1.55,2.55,3.55,4.55);
    cout << q1 << endl;
    cout << q2 << endl;
    cout << q3 << endl;
    cout << q4 << endl;
    cout << q1++ << q1 << endl;
    cout << q2+q2 << endl;
    return 0;
}    
