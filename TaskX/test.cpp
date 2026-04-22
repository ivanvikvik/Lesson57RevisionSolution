#include "test.h"

// wrong size
void test01() {
	int n = -3, m = 3;
	string expected = "Error.";

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};

	print_test(matrix, n, m, expected, "test01");
}

// wrong size
void test02() {
	int n = 3, m = -3;
	string expected = "Error.";

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};

	print_test(matrix, n, m, expected, "test02");
}

// wrong size
void test03() {
	int n = 0, m = 3;
	string expected = "Error.";

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};

	print_test(matrix, n, m, expected, "test03");
}

// wrong size
void test04() {
	int n = 3, m = 0;
	string expected = "Error.";

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};

	print_test(matrix, n, m, expected, "test04");
}

//// matrix == null 
//void test05() {
//	int n = 3, m = 3;
//	string expected = "Error.";
//
//	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};
//	
//	print_test(matrix, n, m, expected, "test05");
//}

// matrix with one element 
void test06() {
	int n = 1, m = 1;
	string expected = "1";

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{ {1} };

	print_test(matrix, n, m, expected, "test06");
}

// matrix == horizontal vector with one local minimum
void test07() {
	int n = 1, m = 3;
	string expected = "1";

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{ {3, 2, 1} };

	print_test(matrix, n, m, expected, "test07");

}

// matrix == horizontal vector with one local minimum
void test08() {
	int n = 1, m = 3;
	string expected = "1";

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{ {1, 2, 3} };

	print_test(matrix, n, m, expected, "test08");
}

// matrix == horizontal vector with two local minimum
void test09() {
	int n = 1, m = 3;
	string expected = "3 2";

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{ { 3, 5, 2} };

	print_test(matrix, n, m, expected, "test09");
}

// matrix == horizontal vector with one local minimum
void test10() {
	int n = 1, m = 3;
	string expected = "1";

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{ {2, 1, 3} };

	print_test(matrix, n, m, expected, "test10");
}

// matrix == horizontal vector with two local minimum
void test11() {
	int n = 1, m = 4;
	string expected = "1 2";

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{ {1, 7, 2, 5} };

	print_test(matrix, n, m, expected, "test11");
}

// matrix == vertical vector with one local minimum 
void test12() {
	int n = 3, m = 1;
	string expected = "1";

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{
		{3},
		{2},
		{1}
	};

	print_test(matrix, n, m, expected, "test12");
}

// matrix == vertical vector with one local minimum 
void test13() {
	int n = 3, m = 1;
	string expected = "1";

	int** matrix = new int* [n];
	matrix[0] = new int[m] {1};
	matrix[1] = new int[m] {2};
	matrix[2] = new int[m] {3};

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{
		{3},
		{2},
		{1}
	};

	print_test(matrix, n, m, expected, "test013");

}

// matrix == vertical vector with two local minimum 
void test14() {
	int n = 3, m = 1;
	int i_expected = 3, j_expected = 1;

	int** matrix = new int* [n];
	matrix[0] = new int[m] {1};
	matrix[1] = new int[m] {2};
	matrix[2] = new int[m] {-5};

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};

	print_test(matrix, n, m, expected, "test14");

}

// matrix == vertical vector with one local minimum 
void test15() {
	int n = 3, m = 1;
	int i_expected = 2, j_expected = 1;

	int** matrix = new int* [n];
	matrix[0] = new int[m] {3};
	matrix[1] = new int[m] {1};
	matrix[2] = new int[m] {2};

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};

	print_test(matrix, n, m, expected, "test15");

}

// matrix == vertical vector with two local minimum 
void test16() {
	int n = 4, m = 1;
	int i_expected = 3, j_expected = 1;

	int** matrix = new int* [n];
	matrix[0] = new int[m] {-4};
	matrix[1] = new int[m] {3};
	matrix[2] = new int[m] {1};
	matrix[3] = new int[m] {2};

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};

	print_test(matrix, n, m, expected, "test16");

}

// matrix 2x2 with one local minimum
void test17() {
	int n = 2, m = 2;
	int i_expected = 1, j_expected = 2;

	int** matrix = new int* [n];
	matrix[0] = new int[m] {2, 1};
	matrix[1] = new int[m] {3, 4};

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};

	print_test(matrix, n, m, expected, "test17");

}

// matrix 2x2 with one local minimum
void test18() {
	int n = 2, m = 2;
	int i_expected = 1, j_expected = 1;

	int** matrix = new int* [n];
	matrix[0] = new int[m] {1, 2};
	matrix[1] = new int[m] {3, 4};

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};

	print_test(matrix, n, m, expected, "test18");

}

// matrix 2x2 with one local minimum
void test19() {
	int n = 2, m = 2;
	int i_expected = 2, j_expected = 1;

	int** matrix = new int* [n];
	matrix[0] = new int[m] {3, 4};
	matrix[1] = new int[m] {1, 2};

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};

	print_test(matrix, n, m, expected, "test19");

}

// matrix 2x2 with one local minimum
void test20() {
	int n = 2, m = 2;
	int i_expected = 2, j_expected = 2;

	int** matrix = new int* [n];
	matrix[0] = new int[m] {3, 4};
	matrix[1] = new int[m] {2, 1};

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};

	print_test(matrix, n, m, expected, "test20");

}

// matrix 2x2 with two local minimum
void test21() {
	int n = 2, m = 2;
	int i_expected = 2, j_expected = 1;

	int** matrix = new int* [n];
	matrix[0] = new int[m] {2, 1};
	matrix[1] = new int[m] {1, 4};

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};

	print_test(matrix, n, m, expected, "test21");

}

// matrix 2x2 with two local minimum
void test22() {
	int n = 2, m = 2;
	int i_expected = 2, j_expected = 2;

	int** matrix = new int* [n];
	matrix[0] = new int[m] {1, 2};
	matrix[1] = new int[m] {3, 1};

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};

	print_test(matrix, n, m, expected, "test22");

}

// matrix 4x4 with one local minimum
void test23() {
	int n = 4, m = 4;
	int i_expected = 3, j_expected = 2;

	int** matrix = new int* [n];
	matrix[0] = new int[m] {2, 2, 2, 2};
	matrix[1] = new int[m] {2, 2, 2, 2};
	matrix[2] = new int[m] {2, 1, 2, 2};
	matrix[3] = new int[m] {2, 2, 2, 2};

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};

	print_test(matrix, n, m, expected, "test23");

}

// matrix 4x4 with two local minimum
void test24() {
	int n = 4, m = 4;
	int i_expected = 3, j_expected = 2;

	int** matrix = new int* [n];
	matrix[0] = new int[m] {2, 2, 2, 2};
	matrix[1] = new int[m] {2, 2, 1, 2};
	matrix[2] = new int[m] {2, 1, 2, 2};
	matrix[3] = new int[m] {2, 2, 2, 2};

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};

	print_test(matrix, n, m, expected, "test24");

}

// matrix 4x4 with two local minimum
void test25() {
	int n = 4, m = 4;
	int i_expected = 3, j_expected = 3;

	int** matrix = new int* [n];
	matrix[0] = new int[m] {2, 2, 2, 2};
	matrix[1] = new int[m] {2, 1, 2, 2};
	matrix[2] = new int[m] {2, 2, 1, 2};
	matrix[3] = new int[m] {2, 2, 2, 2};

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};

	print_test(matrix, n, m, expected, "test25");

}

// matrix 4x4 with two local minimum
void test26() {
	int n = 4, m = 4;
	int i_expected = 4, j_expected = 3;

	int** matrix = new int* [n];
	matrix[0] = new int[m] {2, 2, 2, 2};
	matrix[1] = new int[m] {2, 1, 2, 2};
	matrix[2] = new int[m] {2, 2, 2, 2};
	matrix[3] = new int[m] {2, 2, 1, 2};

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};

	print_test(matrix, n, m, expected, "test26");

}