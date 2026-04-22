#include <Windows.h>
#include <iostream>
#include <string>
#include "logic.h"
using namespace std;

string convert(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m);
void print_test(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m, double expected, string test_name);