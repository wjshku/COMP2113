#include<iostream>
#include<iomanip>
using namespace std;
void modifyArray( int b[], int sizeOfArray )
{
    // multiply each array element by 2
    for ( int k = 0; k < sizeOfArray; ++k )
        b[ k ] *= 2;
}
int main()
{
    const int arraySize = 5; // size of array a
    int a[ arraySize ] = { 0, 1, 2, 3, 4 }; // initialize array a

    cout << "Effects of passing entire array:"
         << "\nThe values of the original array are:\n";

    // output original array elements
    for ( int i = 0; i < arraySize; ++i )
        cout << setw( 3 ) << a[ i ];

    cout << endl;

    // pass array a to modifyArray
    modifyArray( a, arraySize );
    cout << "The values of the modified array are:\n";

   // output modified array elements
    for ( int j = 0; j < arraySize; ++j )
        cout << setw( 3 ) << a[ j ];

    return 0;
}
