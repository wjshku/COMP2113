#include <iostream>
#include <iomanip>
using namespace std;


void swap(int &, int &);
void sort(int [], int);
void print_array(const int[], int);

int main()
{
    const int arraySize = 6;  // size of array
    int a[ arraySize ] = {-2, 7, 0, 23, 2048, -46};    // declare array a

    cout << "Original array:\n";
    print_array( a, arraySize );

    sort( a, arraySize );

    cout << "Sorted array:\n";
    print_array( a, arraySize );

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


// sort values in array[] in ascending order by selection sort
void sort(int array[], int sizeOfArray )
{
	int i, j, idx;
	int min;

	for ( i = 0; i < sizeOfArray; ++i )
	{
		min = array[i];
		idx = i;
		for ( j = i + 1; j < sizeOfArray; ++j )
		{
			if ( array[j] < min )
			{
				min = array[j];
				idx = j;
			}
		}
		if ( idx != i )
			swap( array[i], array[idx] ); 	// swap values
	}
}

void swap(int &a, int &b)
{
     int tmp = a;
     a = b;
     b = tmp;
     return;
}

