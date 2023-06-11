#pragma once
using namespace std;
#include <string>
#include <iostream>

const double PI = 3.14;
class Circle
{
public:
	int r;

	double getPerimeter();
	double getArea();
};

class Person 
{
private :
	string p_name;
	int p_age;

public:
	void print(); 

	Person();

	~Person();


	Person(string name, int age);

	Person(int age);

	Person(const Person &p);
	
};

