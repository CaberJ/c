#include "array.h"
#include <iostream>
using namespace std;

void printArr1(int arr[], int size) {
	// 形参arr[] 为数组的首元素地址
	cout << "当前数组内存占用是：" << sizeof(arr) << endl;  // 8，因为此处arr是一个地址，默认为数组第一个元素的地址
	cout << "当前数组是：" << *arr << endl; //1  通过取址获取到数组第一个元素的值
	for (int i = 0; i <size; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}

	// 并且数组内的值可以修改
	arr[0] = 10;
}

