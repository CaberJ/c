#include "class.h"

double Circle::getArea() {
	return r * r * PI;
}

double Circle::getPerimeter() {
	return 2 * r * PI;
}

void Person::print() {
	cout << "姓名是：" << p_name << endl;
	cout << "年龄是：" << p_age << endl;

}


Person::Person() {
	cout << "默认无参构造函数" << endl;
}



Person::Person(string name, int age) {
	cout << "有参构造" << endl;
	p_name = name;
	p_age = age;

}

Person::Person( int age) {
	cout << "name有参构造" << endl;
	p_age = age;

}

Person::Person(const Person& p) {
	cout << "拷贝构造" << endl;
	p_name = p.p_name;
	p_age = p.p_age;
	
}
void Person::setAge(int age) {
	p_age = age;
}


int Tea::t_a = 1;
int Tea::t_b = 2;

void Tea::drink() {
	cout << "我在喝茶： a="<<t_a<<",b="<< t_b << endl;
}

void Hand::addSize(int size) {
	this->size += size;
}

int Hand::getSize() {
	return this->size;
}

Hand Hand::addHandSize(Hand hand) {
	this->size += hand.getSize();
	cout << "当前对象地址是：" << (int*)this <<"，size是："<< this->size << endl;
	return *this;
}

Hand& Hand::addHandSize1(Hand hand) {
	this->size += hand.getSize();
	cout << "当前对象地址是：" << (int*)this << "，size是：" << this->size << endl;
	return *this;
}
Hand& Hand::addHandSize2(Hand & hand) {
	this->size += hand.getSize();
	cout << "当前对象地址是：" << (int*)this << "，size是：" << this->size << endl;
	return *this;
}


Hand::Hand(const Hand& hand) {
	cout << "Hand 拷贝函数执行" << endl;
	size = hand.size;
}

void Clazz1::showClazzName() {
	cout << "我是Clazz1" << endl;
}

void Clazz1::show() {
	if (this == NULL) {
		return;
	}
	cout << "年领是：" << age << endl;
}

void Clazz3::showAge() {
	cout << "Clazz3 age是：" << age << endl;
}

void Clazz4::showPrivate1() {
	cout << "友元类-访问私有属性：cla3 age = " << cla3.age << ",name" << cla3.name << endl;
}

void Clazz4::showPrivate2(Clazz3 & cla) {
	cla.age = 10;
	cout << "友元类-访问私有属性：cla3 age = " << cla.age << ",name" << cla.name << endl;
}	


void Clazz5::clazz5Fun(Clazz3& cla) {
	cout << "友元成员函数-访问私有属性：cla3 age = " << cla.age << ",name" << cla.name << endl;
}

