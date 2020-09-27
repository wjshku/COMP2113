#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting ="Hi",  name = "ENGG1340";
  cout << greeting << " " << name << endl;
  greeting = "Good morning";
  cout << greeting <<" " << name << endl;
  char c = 'Y';
  c = c-'A'+'a';
  cout<<"1:"<<c<<endl;
  c = c + 1;
  cout<<"2:"<<c<<endl;
  return 0;
}

