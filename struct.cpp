#include "struct.h"
#include <iostream>



void printStudentTeacher(student stu) {
	cout << "ѧ��������" << stu.name
		<< "��ѧ�����䣺" << stu.age
		<< "��ѧ����ַ��" << stu.address
		<< "����ʦ��ţ�" << stu.teacher.id
		<< "����ʦ������" << stu.teacher.name << endl;
}
void printStudentTeacherP(student* stu) {
	cout << "ѧ��������" << stu->name
		<< "��ѧ�����䣺" << stu->age
		<< "��ѧ����ַ��" << stu->address
		<< "����ʦ��ţ�" << stu->teacher.id
		<< "����ʦ������" << stu->teacher.name << endl;
}
void changeTeacherName(student* stu) {
	stu->teacher.name = "�Ÿ�";
}

void printStudentTeacher(const student* stu) {

	// stu->name = "caber"; ����
	cout << "ѧ��������" << stu->name
		<< "��ѧ�����䣺" << stu->age
		<< "��ѧ����ַ��" << stu->address
		<< "��ѧ��������" << stu->score
		<< "����ʦ��ţ�" << stu->teacher.id
		<< "����ʦ������" << stu->teacher.name << endl;
}
