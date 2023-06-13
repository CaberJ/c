#include <iostream>
using namespace std;
#include "point.h"
#include "struct.h"
#include "array.h"
#include "method.h"
#include "class.h"

// ����������

void swap(int&, int&);
void swap1(int, int);
void test1();
void test2(Person p);
Person test3();
void test4();
void test5();
void test6();
void test7();
void test8();
void test9();
void test10();
void test11();
void test12();

int main() {

	// ���
	cout << "Hello World!\n" << endl;
	// ��������
	int a = 1;
	int b = 2;

	// ����ָ��
	int * ap;
	ap = &a;

	int * bp;
	bp = &b;

	// �����ָ������д洢�ĵ�ַ
	cout << "ָ������洢�ĵ�ַ��" << ap << endl;
	// ���ָ���ֵ
	cout << "ָ���ֵ:" << *ap << endl;

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

	// ��������  
	//  ���ۣ� c++ Ĭ��Ϊֵ���ݣ� ʹ�����ÿ��Խ��������ø�Ϊ���ô���
	swap1(a, b);
	cout << "δʹ�����ý���a=" << a << endl;
	cout << "δʹ�����ý���b=" << b << endl;
	
	int& ar = a;
	cout << "�������ã�" << ar << endl;
	swap(a, b);
	cout << "ʹ�����ý���a=" << a << endl;
	cout << "ʹ�����ý���b=" << b << endl;

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

	// ָ���������
	int c[] = { 1,2,3,4,5,6,7,8,9 };

	// p4 Ϊ�����׸�Ԫ�صĵ�ַ
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
	// ������������
	test1();
	
	
	// ���Կ�������
	// ���ֹ��췽ʽ��д��
	// Ĭ���ṩ�޲ι��죬������������������
	// ��ʵ������ͨ���죬�򲻻��ṩ�޲ι��죬���ǻ��ṩĬ�ϵĿ�������
	// ��ʵ���˿������죬�򲻻��ṩ�������캯��
	// Ĭ�Ͽ���������ǳ����
	//ǳ��¡������һ���¶����¶�������Ժ�ԭ��������ȫ��ͬ�����ڷǻ����������ԣ���ָ��ԭ��������ָ��Ķ�����ڴ��ַ��
	//���¡������һ���¶������������õ���������Ҳ�ᱻ��¡������ָ��ԭ�ж����ַ��
	Person per1; // Ĭ���޲ι���
	Person per2("����", 18); // ����
	Person per3 = Person("����", 18);  // ż����
	Person per4 = 22;   //  ����
	per3.print();
	Person per5(per3);
	per5.print();
	// ֵ���ݷ�ʽ������������ֵ
	cout << "------------------------------" << endl;
	cout << "��ַ�ǣ�" << &per2 << endl;
	test2(per2);
	cout << "----------------test3--------------" << endl;
	Person per7 = test3();
	cout << "----------------test4--------------" << endl;
	test4();
	cout << "--------------test5----------------" << endl;
	 // vs2022 ���ﲻ����ÿ������룬�����ϰ汾��
	test5();
	cout << "------------------------------" << endl;
	// ���   ǳ����
	Person per8("���", 12);
	Person per9(per8);

	per9.setAge(1);
	per8.print();
	per9.print();

	cout << (int*)&per8 << endl;
	cout << (int*)&per9 << endl;
	cout << "-------------���   ǳ����-----------------" << endl;
	// ���ʱ�ڶ��������˳�Ա���ԣ�һ��Ҫ��д�������캯��
	test6();
	cout << "------------------------------" << endl;
	// ��ʼ���б�
	test7();
	cout << "------------------------------" << endl;
	test8();
	cout << "------------------------------" << endl;
	test9();
	cout << "------------------------------" << endl;
	// ������ľ�̬��Ա
	Tea te1("���", "��");
	cout << "te1.a = " << te1.getA() << endl;
	cout << "�޸�a" << endl;
	te1.setA(2);
	Tea te2("�̲�", "��");
	cout << "te1.a = " << te2.getA() << endl;
	cout << "te1.a = " << te1.getA() << endl;
	cout << "te1.b = " << Tea::t_b << endl;
	Tea::t_b = 2;
	cout << "te1.b = " << Tea::t_b << endl;
	//Tea::t_a = 2;   // ����˽��Ȩ�ޣ����ⲻ�ܷ���
	// cout << "----------------��̬��Ա����--------------" << endl;
	// ��̬��Ա����������ʹ�ö�����ã�Ҳ����ʹ�������
	// ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	te1.drink();
	Tea::drink();

	cout << "------------------------------" << endl;
	// thisָ�� 
	test10();
	cout << "------------------------------" << endl;
	test11();
	cout << "-------------test12------------" << endl;
	test12();
	cout << "------------------------------" << endl;
	return 0;
}

void swap(int& a, int& b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	return;
}
void swap1(int a, int b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void test1() {
	Person per1; // Ĭ���޲ι���

}

void test2(Person per) {
	cout << "��ַ�ǣ�" << &per << endl;
	per.print();
}

void test4() {
	Person per1("caber", 27);
	test2(per1);

}

Person test3() {

	Person per1("caber", 27);
	cout << "��ַ�ǣ�" << &per1 << endl;
	return per1;
}


void test5() {

	Person per1 = test3();
	cout << "��ַ�ǣ�" << &per1 << endl;
	per1.print();
}

void test6() {

	Student stu1(1,2);
	cout << "�����ǣ�"<< stu1.s_age << ",����ǣ�"<< *stu1.s_height <<  endl;
	Student stu2(stu1);
	cout << "�����ǣ�" << stu2.s_age << ",����ǣ�" << *stu2.s_height <<  endl;

}
void test7() {
	// ��ʼ���б�
	Phone pho1(1,2,3);
	//Phone pho1;

	pho1.show();

}

void test8() {
	// ��ʼ���б�
	Phone pho1(1, 2, 3);
	//Phone pho1;
	Teacher tea1("����", pho1);
	tea1.show();
	
}

void test9() {
	Teacher tea2("lisi", 11, 22, 33);
	tea2.show();
}

void test10() {
	Hand han1(5);
	Hand han2(10);
	Hand han3(10);
	Hand han4(10);
	Hand han5(10);
	han1.addSize(5);
	cout << "han1 size = " << han1.getSize() << endl;

    Hand aa = han2.addHandSize(han1).addHandSize(han1).addHandSize(han1);
	cout << "han2 size = " << han2.getSize() << endl;
	cout << "han2 ��ַ = " << &han2 << endl;
	cout << "aa size = " << aa.getSize() << endl;
	cout << "aa ��ַ = " << &aa << endl;
	cout << "---------------------------- "  << endl;
	Hand bb = han3.addHandSize1(han1).addHandSize1(han1).addHandSize1(han1);
	cout << "han3 size = " << han3.getSize() << endl;
	cout << "han3 ��ַ = " << &han3 << endl;
	cout << "bb size = " << bb.getSize() << endl;
	cout << "bb ��ַ = " << &bb << endl;
	cout << "---------------------------- " << endl;
	Hand cc = han4.addHandSize2(han1).addHandSize2(han1).addHandSize2(han1);
	cout << "han4 size = " << han4.getSize() << endl;
	cout << "han4 ��ַ = " << &han4 << endl;
	cout << "cc size = " << cc.getSize() << endl;
	cout << "cc ��ַ = " << &cc << endl;
	cout << "---------------------------- " << endl;
	Hand& dd = han5.addHandSize2(han1).addHandSize2(han1).addHandSize2(han1);
	cout << "han5 size = " << han5.getSize() << endl;
	cout << "han5 ��ַ = " << &han5 << endl;
	cout << "dd size = " << dd.getSize() << endl;
	cout << "dd ��ַ = " << &dd << endl;
}

void test11() {
	Clazz1* cla11 = NULL;
	// �൱�� Clazz1 * const p1 = NULL;
	cla11->showClazzName();
	cla11->show();
	// �������д��룬��ͬ������Ĵ���
	cout << "-------------��ͬ��--------------- " << endl;
	Clazz1 * const cla12 = NULL;
	cla12->showClazzName();
	cla12->show();


}

void test12() {
	// this  ָ�뱾����һ��ָ�볣����this ָ��ĵ�ַ��Ҳ���Ƕ�����ĵ�ַ���ܸģ����Ƕ����ֵ���Ը�
	// �������this ָ��ָ���ֵҲ���ܸģ���Ҫʹ�ó�����
	Clazz2 cla21;
	cla21.show1();
	cout << "------------" << endl;
	cla21.show2();
	cout << "------������------" << endl;
	const Clazz2 cla22;
	// cla22.show1();  ���� ������ֻ�ܵ��ó�����
	cla22.show2();
}




