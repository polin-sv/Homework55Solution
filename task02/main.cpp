#include "util.h"

int main() {
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE];
	int n;

	cout << "input size of matrix: ";
	cin >> n;

	init(matrix, n, n, 0, 10);
	cout << "matrix:\n";
	cout << convert_to_string(matrix, n, n) << endl;

	int sum = sum_main_elements(matrix, n);
	cout << "sum is " << to_string(sum) << endl;

	sum = sum_addition_elements(matrix, n);
	cout << "sum is " << to_string(sum);

	return 0;
}