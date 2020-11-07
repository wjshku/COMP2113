#ifndef Quaternion_h
#define Quaternion_h
#include <iostream>

using namespace std;

class Quaternion{
    public:
    Quaternion();
    Quaternion(double a, double b, double c, double d);
    friend ostream& operator << (ostream & cout, const Quaternion & a);
    friend Quaternion operator + (const Quaternion & a, const Quaternion & b);
    friend Quaternion operator ++ (Quaternion & a, int useless);
    private:
    double x, i, j, k;
};






#endif