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
    
    cout << "Number of row with longest serie of " <<
        "indetical elements: " <<
        get_number_of_row_with_longest_serie_of_ident_elements
        (matrix, n, m) << endl;

    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
}