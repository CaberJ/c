#include "struct.h"
#include <iostream>



void printStudentTeacher(student stu) {
	cout << "学生姓名：" << stu.name
		<< "，学生年龄：" << stu.age
		<< "，学生地址：" << stu.address
		<< "，教师编号：" << stu.teacher.id
		<< "，教师姓名：" << stu.teacher.name << endl;
}
void printStudentTeacherP(student* stu) {
	cout << "学生姓名：" << stu->name
		<< "，学生年龄：" << stu->age
		<< "，学生地址：" << stu->address
		<< "，教师编号：" << stu->teacher.id
		<< "，教师姓名：" << stu->teacher.name << endl;
}
void changeTeacherName(student* stu) {
	stu->teacher.name = "杜甫";
}

void printStudentTeacher(const student* stu) {

	// stu->name = "caber"; 错误
	cout << "学生姓名：" << stu->name
		<< "，学生年龄：" << stu->age
		<< "，学生地址：" << stu->address
		<< "，学生分数：" << stu->score
		<< "，教师编号：" << stu->teacher.id
		<< "，教师姓名：" << stu->teacher.name << endl;
}
