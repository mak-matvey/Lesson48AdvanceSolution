#include "logic.h"

int count_nonzero_columns(int** matrix, int n, int m)
{
	if (matrix == nullptr)
	{
		return 0;
	}

	int* count_zero = new int;
	*count_zero = 0;
	int result = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			*count_zero += matrix[i][j] == 0 ? 1 : 0;
		}
		result += *count_zero > 0 ? 0 : 1;
		*count_zero = 0;
	}

	delete count_zero;

	return result;
}