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
void Person::setAge(int age) {
	p_age = age;
}


int Tea::t_a = 1;
int Tea::t_b = 2;

void Tea::drink() {
	cout << "���ںȲ裺 a="<<t_a<<",b="<< t_b << endl;
}

void Hand::addSize(int size) {
	this->size += size;
}

int Hand::getSize() {
	return this->size;
}

Hand Hand::addHandSize(Hand hand) {
	this->size += hand.getSize();
	cout << "��ǰ�����ַ�ǣ�" << (int*)this <<"��size�ǣ�"<< this->size << endl;
	return *this;
}

Hand& Hand::addHandSize1(Hand hand) {
	this->size += hand.getSize();
	cout << "��ǰ�����ַ�ǣ�" << (int*)this << "��size�ǣ�" << this->size << endl;
	return *this;
}
Hand& Hand::addHandSize2(Hand & hand) {
	this->size += hand.getSize();
	cout << "��ǰ�����ַ�ǣ�" << (int*)this << "��size�ǣ�" << this->size << endl;
	return *this;
}


Hand::Hand(const Hand& hand) {
	cout << "Hand ��������ִ��" << endl;
	size = hand.size;
}

void Clazz1::showClazzName() {
	cout << "����Clazz1" << endl;
}

void Clazz1::show() {
	if (this == NULL) {
		return;
	}
	cout << "�����ǣ�" << age << endl;
}

void Clazz3::showAge() {
	cout << "Clazz3 age�ǣ�" << age << endl;
}

void Clazz4::showPrivate1() {
	cout << "��Ԫ��-����˽�����ԣ�cla3 age = " << cla3.age << ",name" << cla3.name << endl;
}

void Clazz4::showPrivate2(Clazz3 & cla) {
	cla.age = 10;
	cout << "��Ԫ��-����˽�����ԣ�cla3 age = " << cla.age << ",name" << cla.name << endl;
}	


void Clazz5::clazz5Fun(Clazz3& cla) {
	cout << "��Ԫ��Ա����-����˽�����ԣ�cla3 age = " << cla.age << ",name" << cla.name << endl;
}

