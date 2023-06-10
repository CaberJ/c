#pragma once
#include <string>
using namespace std;
#ifndef STUCT_H
#define STUCT_H

struct teacher {
	// id 不可修改
	 int id ;
	string name;

};


struct student {
	string name;
	int age;
	string address;
	// const 修饰 分数不可修改
	const double score = 0.0;
	struct teacher teacher;

};
// 值传递
void printStudentTeacher(student stu);
// 地址传递
void printStudentTeacherP(student * stu);

void changeTeacherName(student* stu);

void printStudentTeacher(const student * stu);



#endif // !STUCT_H