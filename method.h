#pragma once
using namespace std;

// �����β�Ĭ��ֵ

int sum(int a, int b = 0, int c = 0);

// �����β�ռλ��

int sum1(int a, int ,int c = 0);

int sum2(int a, int = 0, int c = 9);


// ��������

int add(int a, int b);
int add(int a, int b, int c);

// ��������  ����
int inc(  int &b);
int inc( const int &b);