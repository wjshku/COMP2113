#include <iostream> 
using namespace std;
 
int main()
{
  int answer = 0;
  int trials = 0;
  while (answer != 4) {
    cout << "2 * 2 = ";
    cin >> answer;
    trials++;
  }

  cout << "Correct!" << endl;
  cout << "You have tried "<<trials<<" times!";
  return 0; 
}
