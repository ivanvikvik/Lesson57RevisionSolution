//#include "test.h"
//
//// wrong size
//void test01() {
//	int n = -3, m = 3;
//	int expected = 0;
//
//	int** matrix = nullptr;
//
//	print_test(matrix, n, m, expected, "test01");
//}
//
//// wrong size
//void test02() {
//	int n = 3, m = -3;
//	int expected = 0;
//
//	int** matrix = nullptr;
//
//	print_test(matrix, n, m, expected, "test02");
//}
//
//// wrong size
//void test03() {
//	int n = 0, m = 3;
//	int expected = 0;
//
//	int** matrix = nullptr;
//
//	print_test(matrix, n, m, expected, "test03");
//}
//
//// wrong size
//void test04() {
//	int n = 3, m = 0;
//	int expected = 0;
//
//	int** matrix = nullptr;
//
//	print_test(matrix, n, m, expected, "test04");
//}
//
//// matrix == null 
//void test05() {
//	int n = 3, m = 3;
//	int expected = 0;
//
//	int** matrix = nullptr;
//
//	print_test(matrix, n, m, expected, "test05");
//}
//
//// matrix with one element 
//void test06() {
//	int n = 1, m = 1;
//	int expected = 0;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {1};
//
//	print_test(matrix, n, m, expected, "test06");
//
//	delete[] matrix[0];
//	delete[] matrix;
//}
//
//// matrix == horizontal vector with one local maximum
//void test07() {
//	int n = 1, m = 3;
//	int expected = 3;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {3, 2, 1};
//
//	print_test(matrix, n, m, expected, "test07");
//
//	delete[] matrix[0];
//	delete[] matrix;
//}
//
//// matrix == horizontal vector with one local maximum
//void test08() {
//	int n = 1, m = 3;
//	int expected = 3;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {1, 2, 3};
//
//	print_test(matrix, n, m, expected, "test08");
//
//	delete[] matrix[0];
//	delete[] matrix;
//}
//
//// matrix == horizontal vector with one local maximum
//void test09() {
//	int n = 1, m = 3;
//	int expected = 3;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {2, 3, 1};
//
//	print_test(matrix, n, m, expected, "test09");
//
//	delete[] matrix[0];
//	delete[] matrix;
//}
//
//// matrix == horizontal vector with two local maximum
//void test10() {
//	int n = 1, m = 3;
//	int expected = 2;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {2, 1, 3};
//
//	print_test(matrix, n, m, expected, "test10");
//
//	delete[] matrix[0];
//	delete[] matrix;
//}
//
//// matrix == horizontal vector with two local maximum
//void test11() {
//	int n = 1, m = 4;
//	int expected = 2;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {1, 2, 1, 3};
//
//	print_test(matrix, n, m, expected, "test11");
//
//	delete[] matrix[0];
//	delete[] matrix;
//}
//
//// matrix == horizontal vector with two local maximum
//void test12() {
//	int n = 1, m = 5;
//	int expected = 2;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {1, 2, 1, 3, 1};
//
//	print_test(matrix, n, m, expected, "test12");
//
//	delete[] matrix[0];
//	delete[] matrix;
//}
//
//// matrix == horizontal vector with two local maximum
//void test13() {
//	int n = 1, m = 5;
//	int expected = 3;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {5, 1, 3, 1, 7};
//
//	print_test(matrix, n, m, expected, "test13");
//
//	delete[] matrix[0];
//	delete[] matrix;
//}
//
//// matrix == vertical vector with one local maximum 
//void test14() {
//	int n = 3, m = 1;
//	int expected = 3;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {3};
//	matrix[1] = new int[m] {2};
//	matrix[2] = new int[m] {1};
//
//	print_test(matrix, n, m, expected, "test14");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix == vertical vector with one local maximum 
//void test15() {
//	int n = 3, m = 1;
//	int expected = 3;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {1};
//	matrix[1] = new int[m] {2};
//	matrix[2] = new int[m] {3};
//
//	print_test(matrix, n, m, expected, "test15");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix == vertical vector with two local maximum 
//void test16() {
//	int n = 3, m = 1;
//	int expected = 3;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {1};
//	matrix[1] = new int[m] {3};
//	matrix[2] = new int[m] {2};
//
//	print_test(matrix, n, m, expected, "test16");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix == vertical vector with two local maximum 
//void test17() {
//	int n = 3, m = 1;
//	int expected = 2;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {3};
//	matrix[1] = new int[m] {1};
//	matrix[2] = new int[m] {2};
//
//	print_test(matrix, n, m, expected,  "test17");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix == vertical vector with two local maximum 
//void test18() {
//	int n = 4, m = 1;
//	int expected = 2;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {1};
//	matrix[1] = new int[m] {3};
//	matrix[2] = new int[m] {1};
//	matrix[3] = new int[m] {2};
//
//	print_test(matrix, n, m, expected,  "test18");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//
//	delete[] matrix;
//}
//
//// matrix == vertical vector with three local maximum 
//void test19() {
//	int n = 5, m = 1;
//	int expected = 2;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {1};
//	matrix[1] = new int[m] {2};
//	matrix[2] = new int[m] {1};
//	matrix[3] = new int[m] {3};
//	matrix[4] = new int[m] {1};
//
//	print_test(matrix, n, m, expected, "test19");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix == vertical vector with three local maximum 
//void test20() {
//	int n = 5, m = 1;
//	int expected = 2;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {3};
//	matrix[1] = new int[m] {1};
//	matrix[2] = new int[m] {2};
//	matrix[3] = new int[m] {1};
//	matrix[4] = new int[m] {5};
//
//	print_test(matrix, n, m, expected, "test20");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix 2x2 with two local maximum
//void test21() {
//	int n = 2, m = 2;
//	int expected = 2;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {2, 1};
//	matrix[1] = new int[m] {1, 3};
//
//	print_test(matrix, n, m, expected,  "test21");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix 2x2 with two local maximum
//void test22() {
//	int n = 2, m = 2;
//	int expected = 2;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {1, 3};
//	matrix[1] = new int[m] {2, 1};
//
//	print_test(matrix, n, m, expected,  "test22");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix 2x2 with one local maximum
//void test23() {
//	int n = 2, m = 2;
//	int expected = 3;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {1, 2};
//	matrix[1] = new int[m] {2, 3};
//
//	print_test(matrix, n, m, expected,  "test23");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix 2x2 with one local maximum
//void test24() {
//	int n = 2, m = 2;
//	int expected = 3;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {3, 2};
//	matrix[1] = new int[m] {2, 1};
//
//	print_test(matrix, n, m, expected,  "test24");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix 2x2 with one local maximum
//void test25() {
//	int n = 2, m = 2;
//	int expected = 3;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {2, 3};
//	matrix[1] = new int[m] {1, 2};
//
//	print_test(matrix, n, m, expected,  "test25");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix 2x2 with one local maximum
//void test26() {
//	int n = 2, m = 2;
//	int expected = 3;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {2, 1};
//	matrix[1] = new int[m] {3, 2};
//
//	print_test(matrix, n, m, expected,  "test26");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix 4x4 with one local maximum
//void test27() {
//	int n = 4, m = 4;
//	int expected = 3;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {2, 2, 2, 2};
//	matrix[1] = new int[m] {2, 2, 2, 2};
//	matrix[2] = new int[m] {2, 3, 2, 2};
//	matrix[3] = new int[m] {2, 2, 2, 2};
//
//	print_test(matrix, n, m, expected,  "test27");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix 4x4 with two local maximum
//void test28() {
//	int n = 4, m = 4;
//	int expected = 3;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {2, 2, 2, 2};
//	matrix[1] = new int[m] {2, 2, 4, 2};
//	matrix[2] = new int[m] {2, 3, 2, 2};
//	matrix[3] = new int[m] {2, 2, 2, 2};
//
//	print_test(matrix, n, m, expected,  "test28");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix 4x4 with two local maximum
//void test29() {
//	int n = 4, m = 4;
//	int expected = 3;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {2, 2, 2, 2};
//	matrix[1] = new int[m] {2, 3, 2, 2};
//	matrix[2] = new int[m] {2, 2, 4, 2};
//	matrix[3] = new int[m] {2, 2, 2, 2};
//
//	print_test(matrix, n, m, expected,  "test29");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix 4x4 with some local maximum
//void test30() {
//	int n = 4, m = 4;
//	int expected = 3;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {4, 2, 5, 2};
//	matrix[1] = new int[m] {2, 6, 2, 7};
//	matrix[2] = new int[m] {8, 2, 3, 2};
//	matrix[3] = new int[m] {2, 9, 2, 10};
//
//	print_test(matrix, n, m, expected,  "test30");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}