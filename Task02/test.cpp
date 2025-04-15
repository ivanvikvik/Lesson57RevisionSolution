#include "test.h"

// Данный список тестов проверяет функцию is_power_of_four на различных входных данных,
// включая положительные и отрицательные числа, нулевое значение, 
// минимальное и максимальное значения int, а также числа, которые 
// являются и не являются степенями четверки.


// Equivalence classes / Классы эквивалентности

// 4^2 = 16
void test01() {
	int number = 16;
	bool expected = true;
	print_test(number, expected, "test01");
}

// 4^3 = 64
void test02() {
	int number = 64;
	bool expected = true;
	print_test(number, expected, "test02");
}

// 4^4 = 256
void test03() {
	int number = 256;
	bool expected = true;
	print_test(number, expected, "test03");
}

// 4^5 = 1024
void test04() {
	int number = 1024;
	bool expected = true;
	print_test(number, expected, "test04");
}

// prime number (простое число)
void test05() {
	int number = 2;
	bool expected = false;
	print_test(number, expected, "test05");
}

// power of two, but not four (cтепень двойки, но не четверки )
void test06() {
	int number = 8;
	bool expected = false;
	print_test(number, expected, "test06");
}

// random number (случайное число)
void test07() {
	int number = 10;
	bool expected = false;
	print_test(number, expected, "test07");
}

// another random number (другое случайное число)
void test08() {
	int number = 200;
	bool expected = false;
	print_test(number, expected, "test08");
}


// Boundary values / Граничныя значения

// 4^0 = 1 (минимальная степень)
void test09() {
	int number = 1;
	bool expected = true;
	print_test(number, expected, "test09");
}

// 4^1 = 4 (базовая степень)
void test10() {
	int number = 4;
	bool expected = true;
	print_test(number, expected, "test10");
}

// zero is not a power of four (ноль не является степенью четвёрки)
void test11() {
	int number = 0;
	bool expected = false;
	print_test(number, expected, "test11");
}

// negative number (отрицательное число)
void test12() {
	int number = -4;
	bool expected = false;
	print_test(number, expected, "test12");
}

// max int type number (максимальное значение типа int)
void test13() {
	int number = 2'147'483'647;
	bool expected = false;
	print_test(number, expected, "test13");
}

// min int type number (минимальное значение типа int)
void test14() {
	int number = -2'147'483'648;
	bool expected = false;
	print_test(number, expected, "test14");
}
