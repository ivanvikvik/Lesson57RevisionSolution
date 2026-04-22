#include <Windows.h>
#include <iostream>
#include <string>
#include "logic.h"
using namespace std;

string convert(int matrix[DEFAUL_SIZE][DEFAUL_SIZE], int n, int m);
void print_test(int matrix[DEFAUL_SIZE][DEFAUL_SIZE], int n, int m, int expected, string test_name);