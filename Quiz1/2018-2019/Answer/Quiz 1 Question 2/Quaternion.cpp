#include "Quaternion.h"
#include <iostream>
#include <iomanip> // For controlling output precision to 1 decimal place by using cout << fixed << setprecision(1) <<  
using namespace std;


Quaternion::Quaternion(){
    x = 0;
    i = 0;
    j = 0;
    k = 0;
}

Quaternion::Quaternion(double a, double b, double c, double d){
    x = a;
    i = b;
    j = c;
    k = d;
}

ostream& operator << (ostream & cout, const Quaternion & a){
    cout << fixed << setprecision(1) << a.x << "+" << a.i << "i+" << a.j << "j+" << a.k << "k";
    return cout;
}

Quaternion operator + (const Quaternion & a, const Quaternion & b){
    Quaternion temp = Quaternion(a.x+b.x,a.i+b.i,a.j+b.j,a.k+b.k);
    return temp;
}

Quaternion operator ++ (Quaternion & a, int useless){
    Quaternion original = a;
    a = Quaternion(a.x+1,a.i+1,a.j+1,a.k+1);
    return original;
}








