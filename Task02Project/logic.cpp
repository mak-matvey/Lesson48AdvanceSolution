#include "logic.h"

int find_biggest_occuring_more_than_once(int** matrix, int n, int m)
{
    if (matrix == nullptr)
    {
        return 0;
    }

    int maxRepeated = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int* current = new int;
            *current = matrix[i][j];

            bool* duplicate_found = new bool;
            *duplicate_found = false;

            for (int k = i; k < n && !*duplicate_found; k++)
            {
                int* start_l = new int;
                *start_l = (k == i) ? j + 1 : 0;

                for (int l = *start_l; l < m; l++)
                {
                    if (matrix[k][l] == *current)
                    {
                        *duplicate_found = true;
                        if (*current > maxRepeated)
                        {
                            maxRepeated = *current;
                        }
                        break;

                        delete current;
                        delete duplicate_found;
                        delete start_l;
                    }
                }
            }
        }
    }

    return maxRepeated;
}