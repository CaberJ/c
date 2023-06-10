#include "method.h"
#include <iostream>
using namespace std;

int sum(int a, int b , int c) {
	return a + b + c;
}

int sum1(int a, int, int c) {
	return a + c;
}

int sum2(int a, int, int c) {
	return a + c;
}

int add(int a, int b) {
	return a + b;
}
int add(int a, int b, int c) {
	return a + b +c;
}
int inc(int& b) {

	cout << "int& 结果是:" << ++b << endl;
	return b;
}
int inc(const int& b) {
	cout << "const int& 结果是:" << b << endl;
	return b;
}