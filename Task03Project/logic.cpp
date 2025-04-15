#include "logic.h"

int get_number_of_row_with_longest_serie_of_ident_elements(int** matrix, int n, int m)
{
    if (matrix == nullptr || n <= 0 || m <= 0)
        return 0;

    int max_row = -1;

    int* max_series = new int;
    *max_series = 0;

    for (int i = 0; i < n; i++)
    {
        int current_series = 1;

        int row_max_series = 1;

        for (int j = 1; j < m; j++)
        {
            if (matrix[i][j] == matrix[i][j - 1])
            {
                current_series++;
                if (current_series > row_max_series)
                    row_max_series = current_series;
            }
            else
            {
                current_series = 1;
            }
        }

        if (row_max_series > *max_series)
        {
            *max_series = row_max_series;
            max_row = i;
        }
    }
    
    delete max_series;

    return max_row;
}