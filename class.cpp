#include "class.h"

double Circle::getArea() {
	return r * r * PI;
}

double Circle::getPerimeter() {
	return 2 * r * PI;
}

void Person::print() {
	cout << "�����ǣ�" << p_name << endl;
	cout << "�����ǣ�" << p_age << endl;

}


Person::Person() {
	cout << "Ĭ���޲ι��캯��" << endl;
}

Person::~Person() {
	cout << "Ĭ����������" << endl;

}


Person::Person(string name, int age) {
	cout << "�вι���" << endl;
	p_name = name;
	p_age = age;

}

Person::Person( int age) {
	cout << "name�вι���" << endl;
	p_age = age;

}

Person::Person(const Person& p) {
	cout << "��������" << endl;
	p_name = p.p_name;
	p_age = p.p_age;
	
}

