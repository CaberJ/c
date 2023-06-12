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