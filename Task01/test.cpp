#include "test.h"

// wrong size
void test01() {
	int n = -3, m = 3;
	double expected = -1;
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{ };
	print_test(matrix, n, m, expected, "test01");
}

// wrong size
void test02() {
	int n = 3, m = -3;
	double expected = -1;
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{ };
	print_test(matrix, n, m, expected, "test02");
}

// wrong size
void test03() {
	int n = 0, m = 3;
	double expected = -1;
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{ };
	print_test(matrix, n, m, expected, "test03");
}

// wrong size
void test04() {
	int n = 3, m = 0;
	double expected = -1;
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{ };
	print_test(matrix, n, m, expected, "test04");
}

//// matrix == null 
//void test05() {
//	int n = 3, m = 3;
//	double expected = -1;
//	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{ };
//	print_test(matrix, n, m, expected, "test05");
//}

// matrix with all positive elements
void test06() {
	int n = 2, m = 3;
	double expected = 5.0;

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{
		{1, 2, 3} ,
		{7, 8, 9}
	};

	print_test(matrix, n, m, expected, "test06");
}

// matrix with all negative elements
void test07() {
	int n = 2, m = 3;
	double expected = -5.0;

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{
		{ -1, -2, -3 },
		{ -7, -8, -9 }
	};

	print_test(matrix, n, m, expected, "test07");
}

// matrix with positive and some zero elements
void test08() {
	int n = 2, m = 2;
	double expected = 3.5;

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{
		{0, 3},
		{4, 0}
	};

	print_test(matrix, n, m, expected, "test08");
}

// matrix with negative and some zero elements
void test09() {
	int n = 2, m = 2;
	double expected = -3.5;

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{
		{0, -3},
		{-4, 0}
	};

	print_test(matrix, n, m, expected, "test09");

}

// matrix with all zero elements
void test10() {
	int n = 3, m = 3;
	double expected = 0.0;

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{
		{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0}
	};

	print_test(matrix, n, m, expected, "test10");

}

// matrix with all positive, negative and zero elements (base case)
void test11() {
	int n = 2, m = 3;
	double expected = -0.75;

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{
		{1, 0, -3},
		{0, 5, -6}
	};

	print_test(matrix, n, m, expected, "test11");

}

// matrix == horizontal vector
void test12() {
	int n = 1, m = 4;
	double expected = 2.0;

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{ {1, 2, 3, 0} };

	print_test(matrix, n, m, expected, "test12");
}

// matrix == vertical vector
void test13() {
	int n = 4, m = 1;
	double expected = 2.0;

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{
		{0},
		{1},
		{2},
		{3}
	};

	print_test(matrix, n, m, expected, "test13");
}

// matrix with only one element
void test14() {
	int n = 1, m = 1;
	double expected = 7.0;

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{ {7} };

	print_test(matrix, n, m, expected, "test14");
}

// basic case
void test15() {
	int n = 3, m = 4;
	double expected = 3.5;

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{
		{1, 0, 2, 2},
		{1, 3, 0, 6},
		{2, 1, 8, 9}
	};

	print_test(matrix, n, m, expected, "test15");
}
