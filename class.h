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

	~Person() {
		cout << "默认析构函数" << endl;
	};


	Person(string name, int age);

	Person(int age);

	Person(const Person& p);

	void setAge(int age);
	
};

class Student {
public:
	int s_age;
	int * s_height;

public:
	Student(int age,int height) {
		s_age = age;
		s_height = new int(height);
	}

	~Student() {
		cout << "Student 析构函数执行开始" << endl;
		if (s_height != NULL) {
			delete s_height;
			s_height = NULL;
		}
		cout << "Student 析构函数执行结束" << endl;
	}

	// 深拷贝
	Student(const Student & stu) {
		s_age = stu.s_age;
		// 如果不利用深拷贝在堆区创建新内存，则会出现堆内存重复释放的问题
		s_height = new int(*stu.s_height);
	}
};

class Phone {
private:
	int p_a;
	int p_b;
	int p_c;


public:

	//Phone(int a, int b, int c) {
	//
	//	p_a = a;
	//	p_b = b;
	//	p_c = c;
	//}
	Phone() {
		cout << "Phone 构造函数执行" << endl;
	}
	~Phone() {
		cout << "Phone 析构函数执行" << endl;
	}
	Phone(int a, int b, int c) :p_a(a), p_b(b), p_c(c) {
		cout << "Phone 简化构造函数执行" << endl;
	}
	void show() {
		cout << "a：" << p_a << ",b：" << p_b << ",c：" << p_c << endl;
	}
	
};

// 对象作为对象属性
class Teacher {
private:
	string t_name;
	Phone t_pho;
public:
	void show() {
		cout << "t_name：" << t_name << ",t_phone："  <<  endl;
		t_pho.show();
	}

	Teacher(string name, Phone pho) :t_name(name), t_pho(pho) {
		cout << "Teacher 简化构造函数执行" << endl;
	}
	~Teacher() {
		cout << "Teacher 析构函数执行" << endl;
	}

	Teacher(string name, int a, int b, int c): t_name(name),t_pho(Phone(a, b, c)) {
		cout << "Teacher 简化构造函数执行" << endl;
	}

	/*Teacher(string name, int a, int b, int c) : t_name(name) {
		Phone pho(a, b, c);
		t_pho = pho;
	}

	Teacher(string name, int a, int b, int c) {
		t_name = name;
		Phone pho(a, b, c);
		t_pho = pho;
	}*/

};

// 静态
class Tea {

private:
	string t_name;
	string t_color;

	// 静态成员变量
	static int t_a;

public:

	// 静态成员变量
	static int t_b;

	int getA() {
		return t_a;
	}

	void setA(int a) {
		t_a = a;
	}

	Tea(string name, string color) :t_name(name), t_color(color) {
	}

	// 静态成员函数
	static void drink();
};


// this指针使用
class Hand {
private:
	int size;
public:
	
	void addSize(int size);

	int getSize();

	Hand addHandSize(Hand hand);
	Hand& addHandSize1(Hand hand);
	Hand& addHandSize2(Hand & hand);

	Hand(int size):size(size) {}

	Hand(const Hand & hand);
};

// 空指针调用成员函数
class Clazz1 {

public:
	int age;

	void showClazzName();
	void show();
};

//  常函数，  常对象
class Clazz2 {

private:
	int a;
	int b;
	mutable	int d;

public:
	Clazz2() {
		a = 0;
		b = 0;
		int c = 0;
		d = 0;
	}
	void show1() {

		// this 相当于  ClassType * const point   指针常量
		// 空指针可以调用成员函数，此时 空指针相当于  Class Type* const point = NULL


		this->a = 1;
		cout << "a =  " << a << ",b =  " << b <<  ",d =  " << d << endl;
	
	}

	// 常函数
	void show2() const {
		// this  指针本质是一个指针常量，this 指向的地址，也就是对象本身的地址不能改，但是对象的值可以改
		// 如果想让this 指针指向的值（内容）也不能改，需要使用常函数
		// 相当于 const ClassType * const point 


		//this->a = 1;   错误  常函数不能修改成员属性
		this->d = 1;   // 成员属性 d 被 mutable关键字修饰，可以在常函数中修改
		cout << "a =  " << a << ",b =  " << b << ",d =  " << d << endl;
	}
	

};



