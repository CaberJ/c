#include <iostream>
using namespace std;
#include "point.h"
#include "struct.h"
#include "array.h"
#include "method.h"
#include "Circle.h"

int main() {

	// ����
	int arr1[4] = { 1,2,3,4 };
	cout << "��ǰ�����ǣ�" << arr1 << endl;
	cout << "arr1��С�ǣ�" << sizeof(arr1) / sizeof(arr1[0]) << endl;
	printArr1(arr1, sizeof(arr1) / sizeof(arr1[0]));
	printArr1(arr1, sizeof(arr1) / sizeof(arr1[0]));
	// ��ά����  
	// ���ֶ��巽ʽ
	int arr2[2][3];
	int arr3[2][3] = { {1,2,3},{4,5,6} };
	int arr4[2][3] = { 1,2,3,4,5,6 };
	int arr5[][3] = { 1,2,3,4,5,6 };

	cout << "��ά�����׵�ַint��" << (int)arr3 << endl;
	cout << "��ά�����׵�ַ��" << arr3 << endl;



	int a = 1;
	int b = 2;
	//swap(a, b);
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;

	swap1(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//swap2(&a, &b);
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;

	// ����ָ��   ָ��ָ���ֵ���ܸ�
	const int* p1 = &a;
	//*p1 = &b;  ����

	// ָ�볣��    ָ��ָ��ĵ�ַ���ܸ�
	int* const p2 = &a;
	//p2 = &b;    ����

	// const ����ָ��ͳ���
	const int* const p3 = &a;
	//p3 = &b;  ����
	//*p3 = b;  ����

	// ָ���������
	int c[] = { 1,2,3,4,5,6,7,8,9 };

	// p4 λ�����׸�Ԫ�صĵ�ַ
	int* p4 = c;
	for (int i = 0; i < 9; i++) {
		cout << "c[i]= " << *p4 << endl;
		p4++;
	}

	// �ṹ��
	cout << "�ṹ����Կ�ʼ������" << endl;

	struct student stu1 = { "����",18,"����" };
	// �ṹ�崴��ʱ��stuct�ؼ��ֿ���ʡ�ԣ�
	student stu2;
	stu2.address = "����";
	stu2.age = 20;
	stu2.address = "����";

	cout << "ѧ��������" << stu1.name << "��ѧ�����䣺" << stu1.age << "��ѧ����ַ��" << stu1.address << endl;

	// �ṹ������

	struct student stuArray[3] = { {"����",18,"����"} ,{"����",19,"����"} , {"����",20,"����"} };
	for (int i = 0; i < 3; i++)
	{
		cout << "ѧ��������" << stuArray[i].name << endl;
		cout << "ѧ�����䣺" << stuArray[i].age << endl;
		cout << "ѧ����ַ��" << stuArray[i].address << endl;
	}

	// �ṹ��ָ��
	student stu4;
	struct student* stuP1 = &stu4;
	stuP1->name = "caber";
	stuP1->age = 19;
	stuP1->address = "�Ϻ�";
	cout << "ѧ��������" << stuP1->name << "��ѧ�����䣺" << stuP1->age << "��ѧ����ַ��" << stuP1->address << endl;

	// �ṹ��Ƕ��
	teacher tea1 = { 1,"���" };
	stuP1->teacher = tea1;
	cout << "ѧ��������" << stuP1->name
		<< "��ѧ�����䣺" << stuP1->age
		<< "��ѧ����ַ��" << stuP1->address
		<< "����ʦ��ţ�" << stuP1->teacher.id
		<< "����ʦ������" << stuP1->teacher.name << endl;

	// �ṹ����Ϊ��������
	// ֵ����
	printStudentTeacher(stu4);
	// ���ô���
	printStudentTeacherP(&stu4);
	// ���ô����޸Ĳ���ʵ��
	changeTeacherName(&stu4);
	cout << "��ʦ�������޸�" << endl;
	printStudentTeacher(&stu4);

	// �ṹ����ʹ��const 
	// stu4.score = 99.5; ����


	// ���������ڴ�ռ� new�ؼ���
	// int* p = new int(2);  ��������������һ��
	int* p = new int;
	*p = 2;
	cout << "c=" << p << endl;
	cout << "c=" << *p << endl;
	delete p;
	cout << "c=" << p << endl; // û��ֵ
	//cout << "c=" << *p << endl;// ��ַΪ��������ᱨ�����ǻᵼ�³�����ֹ
	cout << "���Գ���" << endl;
	int* arrp = new int[10];

	for (int i = 0; i < 10; i++)
	{
		arrp[i] = i;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arrp[i] << endl;
	}
	delete[] arrp;
	// ���Ժ���
	cout << "sum ����ǣ�" << sum(1) << endl;
	cout << "sum ����ǣ�" << sum(1,2,3) << endl;
	cout << "sum1 ����ǣ�" << sum1(1, 2) << endl;
	cout << "sum1 ����ǣ�" << sum1(1, 2, 3) << endl;
	cout << "sum2 ����ǣ�" << sum2(1, 6) << endl;		//�����10�� �ڶ�����������Ч ��ռλ����� ��������������Ĭ��ֵ
	cout << "sum2 ����ǣ�" << sum2(1, 6, 3) << endl;  //�����4�� �ڶ�����������Ч ��ռλ����� 
	cout << "add ����ǣ�" << add(1, 2) << endl;		
	cout << "add ����ǣ�" << add(1, 2, 3) << endl;  
	int number = 1;
	cout << "inc(number) ����ǣ�" << inc(number) << endl;
	cout << "inc(1) ����ǣ�" << inc(1) << endl;

	// ��
	Circle c1;
	c1.r = 10;
	cout << "�ܳ��ǣ�" << c1.getPerimeter() << endl;
	cout << "����ǣ�" << c1.getArea() << endl;


	return 0;
}