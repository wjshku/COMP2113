#include <iostream>
#include <iomanip>
using namespace std;

int linearSearch( const int [], int, int );
void print_array( const int[], int );

int main()
{
    const int arraySize = 10;  // size of array
    int a[ arraySize ];         // declare array a
    int searchKey;              // value to locate in array a

    // fill in some data to array
    for ( int i = 0; i < arraySize; ++i )
        a[i] = 2 * i;

    print_array( a, arraySize );

    cout << "Enter an integer to search: ";
    cin >> searchKey;

    // try to locate searchKey in a
    int element = linearSearch( a, arraySize, searchKey );

    // display search results
    if ( element != -1 )
        cout << "Value found in element " << element << endl;
    else
        cout << "Value not found" << endl;

    return 0;
}

void print_array( const int array[], int sizeOfArray )
{
    for ( int i = 0; i < sizeOfArray; ++i )
        cout << "[" << setw(2) << i << "] ";
    cout << endl;

    for ( int i = 0; i < sizeOfArray; ++i )
        cout << setw(3) << array[i] << "  ";
    cout << endl;
}


// linear search of key value in array[]
// return the index of first occurrence of key in array[]
// return -1 if key is not found in array[]
int linearSearch( const int array[], int sizeOfArray, int key )
{
    for ( int j = 0; j < sizeOfArray; ++j )
        if ( array[ j ] == key ) // if found,
            return j; // return location of key
    return -1; // key not found
}
