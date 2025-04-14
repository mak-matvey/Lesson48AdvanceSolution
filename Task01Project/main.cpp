#include "logic.h"
#include <iostream>

using namespace std;

int main(void)
{
    int n, m;

    cout << "Input size of matrix (n m): ";
    cin >> n >> m;

    if (n <= 0 || m <= 0)
    {
        cout << "Invalid matrix size!" << endl;
        return 0;
    }

    int** matrix = new int* [n];
    for (int i = 0; i < n; i++)
        matrix[i] = new int[m];

    cout << "Input elements of your matrix:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Number of columns with no zero elements: "
        << count_nonzero_columns(matrix, n, m) << endl;

    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
}