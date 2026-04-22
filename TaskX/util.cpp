//#include "util.h"
//
//string convert(int** matrix, int n, int m) {
//	string s = "";
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			s += to_string(matrix[i][j]) + " ";
//		}
//		s += "\n";
//	}
//
//	return s;
//}
//
//void print_test(int** matrix, int n, int m, int i_expected, int j_expected, string test_name) {
//	HANDLE h;
//	h = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	if (n > 0 && m > 0 && matrix != nullptr) {
//		cout << "Current Matrix:\n" << convert(matrix, n, m);
//	}
//
//	int i_actual = 0, j_actual = 0;
//	get_last_local_minimum(matrix, n, m, &i_actual, &j_actual);
//	bool result = i_actual == i_expected && j_actual == j_expected;
//
//	SetConsoleTextAttribute(h, (0 | 15));
//	cout << test_name << " --> ";
//
//	string msg;
//
//	if (result) {
//		msg = "PASS(green)";
//		// background  color
//		SetConsoleTextAttribute(h, (((2 << 4) | 15)));
//	}
//	else {
//		msg = "FAIL(red)";
//		SetConsoleTextAttribute(h, ((4 << 4) | 15));
//	}
//
//	cout << msg << endl;
//	SetConsoleTextAttribute(h, (0 | 15));
//
//	if (!result && i_expected != 0 && j_expected != 0 && i_actual != 0 && j_actual != 0) {
//		cout << "Result last local minimum: " << "expected = matrix["
//			<< i_expected << ";" << j_expected << "] - " << matrix[i_expected - 1][j_expected - 1]
//			<< ", but actual = matrix[" << i_actual << ";" << j_actual << "] - "
//			<< matrix[i_actual - 1][j_actual - 1] << endl;
//	}
//
//	SetConsoleTextAttribute(h, (0 | 14));
//	cout << "-----------------------------------------" << endl;
//	SetConsoleTextAttribute(h, (0 | 15));
//	//CloseHandle(h);
//}