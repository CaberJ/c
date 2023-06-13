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
		cout << "Ĭ����������" << endl;
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
		cout << "Student ��������ִ�п�ʼ" << endl;
		if (s_height != NULL) {
			delete s_height;
			s_height = NULL;
		}
		cout << "Student ��������ִ�н���" << endl;
	}

	// ���
	Student(const Student & stu) {
		s_age = stu.s_age;
		// �������������ڶ����������ڴ棬�����ֶ��ڴ��ظ��ͷŵ�����
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
		cout << "Phone ���캯��ִ��" << endl;
	}
	~Phone() {
		cout << "Phone ��������ִ��" << endl;
	}
	Phone(int a, int b, int c) :p_a(a), p_b(b), p_c(c) {
		cout << "Phone �򻯹��캯��ִ��" << endl;
	}
	void show() {
		cout << "a��" << p_a << ",b��" << p_b << ",c��" << p_c << endl;
	}
	
};

// ������Ϊ��������
class Teacher {
private:
	string t_name;
	Phone t_pho;
public:
	void show() {
		cout << "t_name��" << t_name << ",t_phone��"  <<  endl;
		t_pho.show();
	}

	Teacher(string name, Phone pho) :t_name(name), t_pho(pho) {
		cout << "Teacher �򻯹��캯��ִ��" << endl;
	}
	~Teacher() {
		cout << "Teacher ��������ִ��" << endl;
	}

	Teacher(string name, int a, int b, int c): t_name(name),t_pho(Phone(a, b, c)) {
		cout << "Teacher �򻯹��캯��ִ��" << endl;
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

// ��̬
class Tea {

private:
	string t_name;
	string t_color;

	// ��̬��Ա����
	static int t_a;

public:

	// ��̬��Ա����
	static int t_b;

	int getA() {
		return t_a;
	}

	void setA(int a) {
		t_a = a;
	}

	Tea(string name, string color) :t_name(name), t_color(color) {
	}

	// ��̬��Ա����
	static void drink();
};


// thisָ��ʹ��
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

// ��ָ����ó�Ա����
class Clazz1 {

public:
	int age;

	void showClazzName();
	void show();
};

//  ��������  ������
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

		// this �൱��  ClassType * const point   ָ�볣��
		// ��ָ����Ե��ó�Ա��������ʱ ��ָ���൱��  Class Type* const point = NULL


		this->a = 1;
		cout << "a =  " << a << ",b =  " << b <<  ",d =  " << d << endl;
	
	}

	// ������
	void show2() const {
		// this  ָ�뱾����һ��ָ�볣����this ָ��ĵ�ַ��Ҳ���Ƕ�����ĵ�ַ���ܸģ����Ƕ����ֵ���Ը�
		// �������this ָ��ָ���ֵ�����ݣ�Ҳ���ܸģ���Ҫʹ�ó�����
		// �൱�� const ClassType * const point 


		//this->a = 1;   ����  �����������޸ĳ�Ա����
		this->d = 1;   // ��Ա���� d �� mutable�ؼ������Σ������ڳ��������޸�
		cout << "a =  " << a << ",b =  " << b << ",d =  " << d << endl;
	}
	

};



