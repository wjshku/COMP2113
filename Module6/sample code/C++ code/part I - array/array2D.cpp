#include <iostream>
#include <iomanip>
using namespace std;



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

    // print out array contents
    for (i = 0; i < nRows; ++i)
    {
        for (j = 0; j < nCols; ++j)
            cout << setw(3) << array2D[i][j] << ' ';
        cout << endl;        // start new line for each row
    }

    return 0;
}

