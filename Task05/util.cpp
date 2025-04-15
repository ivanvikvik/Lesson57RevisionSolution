#include "util.h"

string convert(int* array, int size) {
	string s = "";
	for (int i = 0; i < size; i++)
	{
		s += to_string(*(array + i)) + " ";
	}
	return s;
}

void print_test(int* array, int size, int expected, const string& test_name) {
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	int actual = sum_absolute_values_of_negative_elements(array, size);
	bool result = actual == expected;

	SetConsoleTextAttribute(h, (0 | 15));

	cout << test_name << " --> ";

	string msg;

	if (result) {
		msg = "PASS(green)                   ";
		// background  color
		SetConsoleTextAttribute(h, ((2 << 4) | 15));
	}
	else {
		msg = "FAIL(red)                     ";
		SetConsoleTextAttribute(h, ((4 << 4) | 15));
	}

	cout << msg << endl;

	SetConsoleTextAttribute(h, (0 | 15));

	if (!result && size > 0 && array != nullptr) {
		cout << "Array: " << convert(array, size) << endl;
		cout << "Result sum: expected = " << expected
			<< ", but actual = " << actual << endl;
	}

	SetConsoleTextAttribute(h, (0 | 14));
	cout << "-----------------------------------------" << endl;
	SetConsoleTextAttribute(h, (0 | 15));
}