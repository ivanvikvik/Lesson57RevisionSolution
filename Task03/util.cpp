#include "util.h"

void print_test(long long number, bool expected, string test_name) {
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	bool actual = is_digits_count_odd(number);
	bool result = actual == expected;

	SetConsoleTextAttribute(h, (0 | 15));

	cout << test_name << " --> ";

	string msg;

	if (result) {
		msg = "PASS(green)                                              ";
		// background  color
		SetConsoleTextAttribute(h, ((2 << 4) | 15));
	}
	else {
		msg = "FAIL(red)                                                ";
		SetConsoleTextAttribute(h, ((4 << 4) | 15));
	}

	cout << msg << endl;


	SetConsoleTextAttribute(h, (0 | 15));

	if (!result) {
		cout << "Number: " << number << endl;
		cout << "Is the count of number digits odd: expected = " << (expected ? "yes" : "no")
			<< ", but actual = " << (actual ? "yes" : "no") << endl;
	}
		
	SetConsoleTextAttribute(h, (0 | 14));
	cout << "--------------------------------------------------------------------" << endl;
	SetConsoleTextAttribute(h, (0 | 15));
}