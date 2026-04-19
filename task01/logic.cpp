#include "logic.h"

int find_max(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {

	int max = matrix[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (max < matrix[i][j]) {
				max = matrix[i][j];
			}
		}
	}

	return max;
}

int find_min(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {
	int min = matrix[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{

			if (min > matrix[i][j]) {
				min = matrix[i][j];
			}
		}
	}

	return min;
}