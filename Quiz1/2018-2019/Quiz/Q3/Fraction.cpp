#include <iostream>
#include <sstream>
using namespace std;

#include "Fraction.h"

Fraction HALF( 1, 2 ); //create a global variable HALF = 1/2

Fraction::Fraction(){
  //it does nothing
}

Fraction::Fraction( int num, int den ){
  numerator = num; denominator = den;
}

int gcd( int x, int y ){
  //Finding the greatest common divisor of x and y
  if( y==0 ) return x;
  return gcd( y, x%y );
}

Fraction operator+( const Fraction& a, const Fraction& b ){
  int num = a.numerator * b.denominator + b.numerator * a.denominator;
  int den = a.denominator * b.denominator;
  int g = gcd( num, den );
  Fraction c( num/g, den/g );
  return c;
}

string Fraction::print() const{
  stringstream ss;
  ss << numerator << '/' << denominator;
  return ss.str();
}

