#include<iostream>
using namespace std;
void print_2d_array( const int a[][5], int numRows)
{
    // print out array contents
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < 5; ++j)
            cout << a[i][j] << ' ';
        cout << endl;        // start new line for each row
    }
}
int main()
{
    const int nRows = 3;
    const int nCols = 5;

    int array2D[nRows][nCols];
    int i, j;

    // assign initial values
    for (i = 0; i < nRows; ++i)
        for (j = 0; j < nCols; ++j)
            array2D[i][j] = nCols*i + j;

    print_2d_array( array2D, nRows );

    return 0;
}
