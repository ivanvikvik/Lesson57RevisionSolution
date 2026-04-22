//#include "test.h"
//
//// wrong size
//void test01() {
//	int n = -3, m = 3;
//	int i_expected = 0, j_expected = 0;
//	
//	int** matrix = nullptr;
//	
//	print_test(matrix, n, m, i_expected, j_expected, "test01");
//}
//
//// wrong size
//void test02() {
//	int n = 3, m = -3;
//	int i_expected = 0, j_expected = 0;
//	
//	int** matrix = nullptr;
//	
//	print_test(matrix, n, m, i_expected, j_expected, "test02");
//}
//
//// wrong size
//void test03() {
//	int n = 0, m = 3;
//	int i_expected = 0, j_expected = 0;
//	
//	int** matrix = nullptr;
//	
//	print_test(matrix, n, m, i_expected, j_expected, "test03");
//}
//
//// wrong size
//void test04() {
//	int n = 3, m = 0;
//	int i_expected = 0, j_expected = 0;
//	
//	int** matrix = nullptr;
//	
//	print_test(matrix, n, m, i_expected, j_expected, "test04");
//}
//
//// matrix == null 
//void test05() {
//	int n = 3, m = 3;
//	int i_expected = 0, j_expected = 0;
//	
//	int** matrix = nullptr;
//	
//	print_test(matrix, n, m, i_expected, j_expected, "test05");
//}
//
//// matrix with one element 
//void test06() {
//	int n = 1, m = 1;
//	int i_expected = 0, j_expected = 0;
//	
//	int** matrix = new int*[n];
//	matrix[0] = new int[m] {1};
//	
//	print_test(matrix, n, m, i_expected, j_expected, "test06");
//	
//	delete[] matrix[0];
//	delete[] matrix;
//}
//
//// matrix == horizontal vector with one local minimum
//void test07() {
//	int n = 1, m = 3;
//	int i_expected = 1, j_expected = 3;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {3, 2, 1};
//
//	print_test(matrix, n, m, i_expected, j_expected, "test07");
//
//	delete[] matrix[0];
//	delete[] matrix;
//}
//
//// matrix == horizontal vector with one local minimum
//void test08() {
//	int n = 1, m = 3;
//	int i_expected = 1, j_expected = 1;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {1, 2, 3};
//
//	print_test(matrix, n, m, i_expected, j_expected, "test08");
//
//	delete[] matrix[0];
//	delete[] matrix;
//}
//
//// matrix == horizontal vector with two local minimum
//void test09() {
//	int n = 1, m = 3;
//	int i_expected = 1, j_expected = 3;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {-3, 2, 1};
//
//	print_test(matrix, n, m, i_expected, j_expected, "test09");
//
//	delete[] matrix[0];
//	delete[] matrix;
//}
//
//// matrix == horizontal vector with one local minimum
//void test10() {
//	int n = 1, m = 3;
//	int i_expected = 1, j_expected = 2;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {2, 1, 3};
//
//	print_test(matrix, n, m, i_expected, j_expected, "test10");
//
//	delete[] matrix[0];
//	delete[] matrix;
//}
//
//// matrix == horizontal vector with two local minimum
//void test11() {
//	int n = 1, m = 4;
//	int i_expected = 1, j_expected = 3;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {1, 2, 1, 3};
//
//	print_test(matrix, n, m, i_expected, j_expected, "test11");
//
//	delete[] matrix[0];
//	delete[] matrix;
//}
//
//// matrix == vertical vector with one local minimum 
//void test12() {
//	int n = 3, m = 1;
//	int i_expected = 3, j_expected = 1;
//	
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {3};
//	matrix[1] = new int[m] {2};
//	matrix[2] = new int[m] {1};
//
//	print_test(matrix, n, m, i_expected, j_expected, "test12");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix == vertical vector with one local minimum 
//void test13() {
//	int n = 3, m = 1;
//	int i_expected = 1, j_expected = 1;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {1};
//	matrix[1] = new int[m] {2};
//	matrix[2] = new int[m] {3};
//
//	print_test(matrix, n, m, i_expected, j_expected, "test13");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix == vertical vector with two local minimum 
//void test14() {
//	int n = 3, m = 1;
//	int i_expected = 3, j_expected = 1;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {1};
//	matrix[1] = new int[m] {2};
//	matrix[2] = new int[m] {-5};
//
//	print_test(matrix, n, m, i_expected, j_expected, "test14");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix == vertical vector with one local minimum 
//void test15() {
//	int n = 3, m = 1;
//	int i_expected = 2, j_expected = 1;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {3};
//	matrix[1] = new int[m] {1};
//	matrix[2] = new int[m] {2};
//
//	print_test(matrix, n, m, i_expected, j_expected, "test15");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix == vertical vector with two local minimum 
//void test16() {
//	int n = 4, m = 1;
//	int i_expected = 3, j_expected = 1;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {-4};
//	matrix[1] = new int[m] {3};
//	matrix[2] = new int[m] {1};
//	matrix[3] = new int[m] {2};
//
//	print_test(matrix, n, m, i_expected, j_expected, "test16");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix 2x2 with one local minimum
//void test17() {
//	int n = 2, m = 2;
//	int i_expected = 1, j_expected = 2;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {2, 1};
//	matrix[1] = new int[m] {3, 4};
//
//	print_test(matrix, n, m, i_expected, j_expected, "test17");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix 2x2 with one local minimum
//void test18() {
//	int n = 2, m = 2;
//	int i_expected = 1, j_expected = 1;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {1, 2};
//	matrix[1] = new int[m] {3, 4};
//
//	print_test(matrix, n, m, i_expected, j_expected, "test18");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix 2x2 with one local minimum
//void test19() {
//	int n = 2, m = 2;
//	int i_expected = 2, j_expected = 1;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {3, 4};
//	matrix[1] = new int[m] {1, 2};
//
//	print_test(matrix, n, m, i_expected, j_expected, "test19");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix 2x2 with one local minimum
//void test20() {
//	int n = 2, m = 2;
//	int i_expected = 2, j_expected = 2;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {3, 4};
//	matrix[1] = new int[m] {2, 1};
//
//	print_test(matrix, n, m, i_expected, j_expected, "test20");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix 2x2 with two local minimum
//void test21() {
//	int n = 2, m = 2;
//	int i_expected = 2, j_expected = 1;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {2, 1};
//	matrix[1] = new int[m] {1, 4};
//
//	print_test(matrix, n, m, i_expected, j_expected, "test21");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix 2x2 with two local minimum
//void test22() {
//	int n = 2, m = 2;
//	int i_expected = 2, j_expected = 2;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {1, 2};
//	matrix[1] = new int[m] {3, 1};
//
//	print_test(matrix, n, m, i_expected, j_expected, "test22");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix 4x4 with one local minimum
//void test23() {
//	int n = 4, m = 4;
//	int i_expected = 3, j_expected = 2;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {2, 2, 2, 2};
//	matrix[1] = new int[m] {2, 2, 2, 2};
//	matrix[2] = new int[m] {2, 1, 2, 2};
//	matrix[3] = new int[m] {2, 2, 2, 2};
//
//	print_test(matrix, n, m, i_expected, j_expected, "test23");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix 4x4 with two local minimum
//void test24() {
//	int n = 4, m = 4;
//	int i_expected = 3, j_expected = 2;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {2, 2, 2, 2};
//	matrix[1] = new int[m] {2, 2, 1, 2};
//	matrix[2] = new int[m] {2, 1, 2, 2};
//	matrix[3] = new int[m] {2, 2, 2, 2};
//
//	print_test(matrix, n, m, i_expected, j_expected, "test24");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix 4x4 with two local minimum
//void test25() {
//	int n = 4, m = 4;
//	int i_expected = 3, j_expected = 3;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {2, 2, 2, 2};
//	matrix[1] = new int[m] {2, 1, 2, 2};
//	matrix[2] = new int[m] {2, 2, 1, 2};
//	matrix[3] = new int[m] {2, 2, 2, 2};
//
//	print_test(matrix, n, m, i_expected, j_expected, "test25");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//
//// matrix 4x4 with two local minimum
//void test26() {
//	int n = 4, m = 4;
//	int i_expected = 4, j_expected = 3;
//
//	int** matrix = new int* [n];
//	matrix[0] = new int[m] {2, 2, 2, 2};
//	matrix[1] = new int[m] {2, 1, 2, 2};
//	matrix[2] = new int[m] {2, 2, 2, 2};
//	matrix[3] = new int[m] {2, 2, 1, 2};
//
//	print_test(matrix, n, m, i_expected, j_expected, "test26");
//
//	for (int i = 0; i < n; i++) {
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}