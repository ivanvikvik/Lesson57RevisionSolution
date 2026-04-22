#include "util.h"

string convert(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {
	string s = "";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			s += to_string(matrix[i][j]) + " ";
		}
		s += "\n";
	}

	return s;
}

void print_test(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m, double expected, string test_name) {
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	if (n > 0 && m > 0 && matrix != nullptr) {
		cout << "Current Matrix:\n" << convert(matrix, n, m);
	}
	
	double actual = calculate_arithmetical_mean_of_nonzero_elements(matrix, n, m);
	bool result = actual == expected;

	SetConsoleTextAttribute(h, (0 | 15));
	cout << test_name << " --> ";

	string msg;

	if (result) {
		msg = "PASS(green)";
		// background  color
		SetConsoleTextAttribute(h, (((2 << 4) | 15)));
	}
	else {
		msg = "FAIL(red)";
		SetConsoleTextAttribute(h, ((4 << 4) | 15));
	}

	cout << msg << endl;
	SetConsoleTextAttribute(h, (0 | 15));

	if (!result) {
		cout << "Result arithmetical mean: expected = " << expected
			<< ", but actual = " << actual << endl;
	}

	SetConsoleTextAttribute(h, (0 | 14));
	cout << "-----------------------------------------" << endl;
	SetConsoleTextAttribute(h, (0 | 15));
	//CloseHandle(h);
}