#pragma once
using namespace std;

// 函数形参默认值

int sum(int a, int b = 0, int c = 0);

// 函数形参占位符

int sum1(int a, int ,int c = 0);

int sum2(int a, int = 0, int c = 9);


// 函数重载

int add(int a, int b);
int add(int a, int b, int c);

// 函数重载  引用
int inc(  int &b);
int inc( const int &b);