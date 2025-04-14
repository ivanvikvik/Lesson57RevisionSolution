#include "util.h"

void print_test(int index, long long expected, const string& test_name) {
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	long long actual = get_tribonacci_number(index);
	bool result = actual == expected;

	SetConsoleTextAttribute(h, (0 | 15));

	cout << test_name << " --> ";

	string msg;

	if (result) {
		msg = "PASS(green)                                    ";
		// background  color
		SetConsoleTextAttribute(h, ((2 << 4) | 15));
	}
	else {
		msg = "FAIL(red)                                      ";
		SetConsoleTextAttribute(h, ((4 << 4) | 15));
	}

	cout << msg << endl;

	SetConsoleTextAttribute(h, (0 | 15));

	if (!result) {
		cout << "Index: " << index << endl;
		cout << "Tribonacci number: expected = " << expected
			<< ", but actual = " << actual << endl;
	}
			
	SetConsoleTextAttribute(h, (0 | 14));
	cout << "----------------------------------------------------------" << endl;
	SetConsoleTextAttribute(h, (0 | 15));
}