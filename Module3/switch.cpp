#include<iostream>
using namespace std;
int main()
{
  int mark;
  cout <<"Enter the mark: ";
  cin >> mark;

  switch ( mark / 10 ) {
  case 0:
    cout << "The grade is F." << endl;
    break;
  case 1:
    cout << "The grade is F." << endl;
        break;
  case 2:  
    cout << "The grade is F." << endl;
    break;
  case 4: case 5: case 3:
    cout << "The grade is F." << endl;
    break;
  case 6:
    cout << "The grade is D." << endl;
    break;
  case 7:
    cout << "The grade is C." << endl;
    break;
  case 8:
    cout << "The grade is B." << endl;
    break;
  case 9: case 10:
    cout << "The grade is A." << endl;
    break;
  default:
	cout << "Invalid mark." << endl;
  }

  return 0;
}
