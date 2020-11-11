#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(void)
{
     // to prevent sequence repetition between runs     
     srand(time(NULL));  

  
     for(int i = 1; i <=10; i++)     // looping to print 10 numbers
     {
           cout<< 10 + rand() % 46<<endl;   // formula for numbers 
     }

     return 0;
}
