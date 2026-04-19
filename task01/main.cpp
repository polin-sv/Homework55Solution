#include "logic.h"

int main() {
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE];

	int n, m;
	cout << "input size of matrix: ";
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			matrix[i][j] = rand() % 100;
		}
	}
	string s = "";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			s += to_string(matrix[i][j]) + "\t";
		}
		s += "\n";
	}

	cout << "matrix:\n" << s << endl;

	cout << "max: " << find_max(matrix, n, m) << endl;
	cout << "min: " << find_min(matrix, n, m) << endl;

	return 0;
}