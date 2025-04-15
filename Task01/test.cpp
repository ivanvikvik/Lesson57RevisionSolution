#include "test.h"

// Данный список тестов проверяет функцию count_even_digits на различных входных данных,
// включая положительные и отрицательные числа, числа с разными комбинациями 
// четных и нечетных цифр, а также крайние/граничные значения.


// Equivalence classes / Классы эквивалентности

// base case (смешанное число с четными и нечетными цифрами)
void test01() {
	long long number = 1'234'567'890;
	int expected = 5;
	print_test(number, expected, "test01");
}

// only odd digits (только нечётные цифры)
void test02() {
	long long number = -13'579;
	int expected = 0;
	print_test(number, expected, "test02");
}

// only even digits (только чётные цифры)
void test03() {
	long long number = -24'680;
	int expected = 5;
	print_test(number, expected, "test03");
}

// all digits are the same, even (все цифры одинаковые чётные)
void test04() {
	long long number = 22'222;
	int expected = 5;
	print_test(number, expected, "test04");
}

// all digits are the same, odd (все цифры одинаковые нечётные)
void test05() {
	long long number = 11'111;
	int expected = 0;
	print_test(number, expected, "test05");
}

// number is with even and odd digits (чередующиеся четные и нечетные цифры)
void test06() {
	long long number = 121'212;
	int expected = 3;
	print_test(number, expected, "test06");
}


// Boundary values / Граничныя значения

// zero (ноль - чётное число)
void test07() {
	long long number = 0;
	int expected = 1;
	print_test(number, expected, "test07");
}

// one even digit (одно чётное число)
void test08() {
	long long number = 2;
	int expected = 1;
	print_test(number, expected, "test08");
}

// one odd digit (одно нечётное число)
void test09() {
	long long number = 1;
	int expected = 0;
	print_test(number, expected, "test09");
}

// max long long type number (максимальное значение типа long long)
void test10() {
	long long number = 9'223'372'036'854'775'807LL;
	int expected = 9;
	print_test(number, expected, "test10");
}

// min long long type number (минимальное значение типа long long)
void test11() {
	long long number = -1 * 9'223'372'036'854'775'808LL;
	int expected = 10;
	print_test(number, expected, "test11");
}