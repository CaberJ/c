#include "array.h"
#include <iostream>
using namespace std;

void printArr1(int arr[], int size) {
	// �β�arr[] Ϊ�������Ԫ�ص�ַ
	cout << "��ǰ�����ڴ�ռ���ǣ�" << sizeof(arr) << endl;  // 8����Ϊ�˴�arr��һ����ַ��Ĭ��Ϊ�����һ��Ԫ�صĵ�ַ
	cout << "��ǰ�����ǣ�" << *arr << endl; //1  ͨ��ȡַ��ȡ�������һ��Ԫ�ص�ֵ
	for (int i = 0; i <size; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}

	// ���������ڵ�ֵ�����޸�
	arr[0] = 10;
}

