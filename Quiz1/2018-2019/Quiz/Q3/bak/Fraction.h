#ifndef FRACTION_H
#define FRACTION_H

#include <string>
using namespace std;

class Fraction{
public:
  Fraction();
  Fraction( int num, int den );
  friend Fraction operator+( const Fraction& a, const Fraction& b );
  string print() const;

private:
  int numerator, denominator;
};

Fraction operator+( const Fraction& a, const Fraction& b );
extern Fraction HALF;

#endif
