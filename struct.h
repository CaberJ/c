#pragma once
#include <string>
using namespace std;
#ifndef STUCT_H
#define STUCT_H

struct teacher {
	// id �����޸�
	 int id ;
	string name;

};


struct student {
	string name;
	int age;
	string address;
	// const ���� ���������޸�
	const double score = 0.0;
	struct teacher teacher;

};
// ֵ����
void printStudentTeacher(student stu);
// ��ַ����
void printStudentTeacherP(student * stu);

void changeTeacherName(student* stu);

void printStudentTeacher(const student * stu);



#endif // !STUCT_H