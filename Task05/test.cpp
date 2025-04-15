#include "test.h"

// Данный список тестов проверяет функцию sum_absolute_values_of_negative_elements
// и охватывает классы эквивалентности и граничные значения. Они включают крайние 
// случаи, некорректный размер и проверку правильности расчётов.


// Equivalence classes / Классы эквивалентности

// base case (базовый случай - есть отрицательные и положительные элементы)
void test01() {
	int array[]{ 1, -2, -3, 4, -5 };
	int size = 5;
	int expected = 10;
	print_test(array, size, expected, "test01");
}

// all negative elements (все отрицательные элементы) 
void test02() {
	int array[]{ -1, -2, -3 };
	int size = 3;
	int expected = 6;
	print_test(array, size, expected, "test02");
}

// all positive elements (все положительные эдементы)
void test03() {
	int array[]{ 1, 2, 3 };
	int size = 3;
	int expected = 0;
	print_test(array, size, expected, "test03");
}

// all zero elements (все нулевые элементы)
void test04() {
	int array[]{ 0, 0, 0 };
	int size = 3;
	int expected = 0;
	print_test(array, size, expected, "test04");
}

// only one middle negative element is in array 
// (один отрицательный элемент - элемент по середине)
void test05() {
	int array[]{ 1, -2, 3 };
	int size = 3;
	int expected = 2;
	print_test(array, size, expected, "test05");
}

// only one first negative element is in array
// (один отрицательный элемент - первый элемент)
void test06() {
	int array[]{ -1, 2, 3 };
	int size = 3;
	int expected = 1;
	print_test(array, size, expected, "test06");
}

// only one last negative element is in array
// (один отрицательный элемент - последний элемент)
void test07() {
	int array[]{ 1, 2, -3 };
	int size = 3;
	int expected = 3;
	print_test(array, size, expected, "test07");
}

// only one first positive element is in array 
// (все отрицательные элементы и один положительный - первый элемент)
void test08() {
	int array[]{ 1, -2, -3, -4, -5 };
	int size = 5;
	int expected = 14;
	print_test(array, size, expected, "test08");
}

// only one last positive element is in array 
// (все отрицательные элементы и один положительный - последний элемент)
void test09() {
	int array[]{ -1, -2, -3, -4, 5 };
	int size = 5;
	int expected = 10;
	print_test(array, size, expected, "test09");
}

// only one middle positive element is in array 
// (все отрицательные элементы и один положительный - элемент по середине)
void test10() {
	int array[]{ -1, -2, 3, -4, -5 };
	int size = 5;
	int expected = 12;
	print_test(array, size, expected, "test10");
}

// all elements are equal in magnitude (все элементы одинаковы по абсолютному значению)
void test11() {
	int array[]{ 5, -5, 5, -5 };
	int size = 4;
	int expected = 10;
	print_test(array, size, expected, "test11");
}


// Boundary values / Граничныя значения

// one negative element in array (только один элемент - отрицательный элемент)
void test12() {
	int array[]{ -7 };
	int size = 1;
	int expected = 7;
	print_test(array, size, expected, "test12");
}

// one positive element is in array (только один элемент - положительный элемент)
void test13() {
	int array[]{ 7 };
	int size = 1;
	int expected = 0;
	print_test(array, size, expected, "test13");
}

// one zero element is in array (только один элемент - нулевой элемент)
void test14() {
	int array[]{ 0 };
	int size = 1;
	int expected = 0;
	print_test(array, size, expected, "test14");
}

// wrong negative size (отрицательный размер)
void test15() {
	int array[]{ 0 };
	int size = -1;
	int expected = 0;
	print_test(array, size, expected, "test15");
}

// wrong zero size (нулевой размер)
void test16() {
	int array[]{ 0 };
	int size = 0;
	int expected = 0;
	print_test(array, size, expected, "test16");
}

// wrong array (массив не задан)
void test17() {
	int* array = nullptr;
	int size = 1;
	int expected = 0;
	print_test(array, size, expected, "test17");
}

// int-extreme elements (массив содержит минимальный и максимальный возможные значения int)
void test18() {
	int array[] {-100, 100, INT_MAX, INT_MIN};
	int size = 4;
	int expected = (-INT_MIN + 100);
	print_test(array, size, expected, "test18");
}