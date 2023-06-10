#include "point.h"
using namespace std;
void swap0(int a, int b) {
	int tmp = a;
	a = b;
	tmp = b;
}

void swap1(int *a, int *b) {
	int  tmp = *a;
	*a = *b;
	*b = tmp;
}
void swap2(int *a, int *b) {
	int * tmp = a;
	a = b;
	b = tmp;
}
