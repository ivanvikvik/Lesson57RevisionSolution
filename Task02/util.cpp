#include "util.h"

string convert(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	string s = "";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			s += to_string(matrix[i][j]) + " ";
		}
		s += "\n";
	}

	return s;
}

void print_test(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int expected, string test_name) {
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	if (n > 0 && matrix != nullptr) {
		cout << "Current Matrix:\n" << convert(matrix, n);
	}

	int actual = sum_main_and_second_diagonales_elements(matrix, n);
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
		cout << "Result sum: expected = " << expected
			<< ", but actual = " << actual << endl;
	}

	SetConsoleTextAttribute(h, (0 | 14));
	cout << "-----------------------------------------" << endl;
	SetConsoleTextAttribute(h, (0 | 15));
	//CloseHandle(h);
}