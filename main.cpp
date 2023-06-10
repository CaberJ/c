#include <iostream>
using namespace std;
#include "point.h"
#include "struct.h"
#include "array.h"
#include "method.h"
#include "Circle.h"

int main() {

	// 数组
	int arr1[4] = { 1,2,3,4 };
	cout << "当前数组是：" << arr1 << endl;
	cout << "arr1大小是：" << sizeof(arr1) / sizeof(arr1[0]) << endl;
	printArr1(arr1, sizeof(arr1) / sizeof(arr1[0]));
	printArr1(arr1, sizeof(arr1) / sizeof(arr1[0]));
	// 二维数组  
	// 四种定义方式
	int arr2[2][3];
	int arr3[2][3] = { {1,2,3},{4,5,6} };
	int arr4[2][3] = { 1,2,3,4,5,6 };
	int arr5[][3] = { 1,2,3,4,5,6 };

	cout << "二维数组首地址int：" << (int)arr3 << endl;
	cout << "二维数组首地址：" << arr3 << endl;



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

	// 常量指针   指针指向的值不能改
	const int* p1 = &a;
	//*p1 = &b;  错误

	// 指针常量    指针指向的地址不能改
	int* const p2 = &a;
	//p2 = &b;    错误

	// const 修饰指针和常量
	const int* const p3 = &a;
	//p3 = &b;  错误
	//*p3 = b;  错误

	// 指针操作数组
	int c[] = { 1,2,3,4,5,6,7,8,9 };

	// p4 位数组首个元素的地址
	int* p4 = c;
	for (int i = 0; i < 9; i++) {
		cout << "c[i]= " << *p4 << endl;
		p4++;
	}

	// 结构体
	cout << "结构体测试开始。。。" << endl;

	struct student stu1 = { "张三",18,"西安" };
	// 结构体创建时，stuct关键字可以省略；
	student stu2;
	stu2.address = "李四";
	stu2.age = 20;
	stu2.address = "北京";

	cout << "学生姓名：" << stu1.name << "，学生年龄：" << stu1.age << "，学生地址：" << stu1.address << endl;

	// 结构体数组

	struct student stuArray[3] = { {"张三",18,"西安"} ,{"李四",19,"北京"} , {"王五",20,"深圳"} };
	for (int i = 0; i < 3; i++)
	{
		cout << "学生姓名：" << stuArray[i].name << endl;
		cout << "学生年龄：" << stuArray[i].age << endl;
		cout << "学生地址：" << stuArray[i].address << endl;
	}

	// 结构体指针
	student stu4;
	struct student* stuP1 = &stu4;
	stuP1->name = "caber";
	stuP1->age = 19;
	stuP1->address = "上海";
	cout << "学生姓名：" << stuP1->name << "，学生年龄：" << stuP1->age << "，学生地址：" << stuP1->address << endl;

	// 结构体嵌套
	teacher tea1 = { 1,"李白" };
	stuP1->teacher = tea1;
	cout << "学生姓名：" << stuP1->name
		<< "，学生年龄：" << stuP1->age
		<< "，学生地址：" << stuP1->address
		<< "，教师编号：" << stuP1->teacher.id
		<< "，教师姓名：" << stuP1->teacher.name << endl;

	// 结构体作为函数参数
	// 值传递
	printStudentTeacher(stu4);
	// 引用传递
	printStudentTeacherP(&stu4);
	// 引用传递修改参数实例
	changeTeacherName(&stu4);
	cout << "教师姓名已修改" << endl;
	printStudentTeacher(&stu4);

	// 结构体中使用const 
	// stu4.score = 99.5; 错误


	// 堆区开辟内存空间 new关键字
	// int* p = new int(2);  和下面两行意义一样
	int* p = new int;
	*p = 2;
	cout << "c=" << p << endl;
	cout << "c=" << *p << endl;
	delete p;
	cout << "c=" << p << endl; // 没有值
	//cout << "c=" << *p << endl;// 地址为随机，不会报错，但是会导致程序终止
	cout << "测试程序" << endl;
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
	// 测试函数
	cout << "sum 结果是：" << sum(1) << endl;
	cout << "sum 结果是：" << sum(1,2,3) << endl;
	cout << "sum1 结果是：" << sum1(1, 2) << endl;
	cout << "sum1 结果是：" << sum1(1, 2, 3) << endl;
	cout << "sum2 结果是：" << sum2(1, 6) << endl;		//结果是10， 第二个参数不生效 被占位符替代 ，第三个参数有默认值
	cout << "sum2 结果是：" << sum2(1, 6, 3) << endl;  //结果是4， 第二个参数不生效 被占位符替代 
	cout << "add 结果是：" << add(1, 2) << endl;		
	cout << "add 结果是：" << add(1, 2, 3) << endl;  
	int number = 1;
	cout << "inc(number) 结果是：" << inc(number) << endl;
	cout << "inc(1) 结果是：" << inc(1) << endl;

	// 类
	Circle c1;
	c1.r = 10;
	cout << "周长是：" << c1.getPerimeter() << endl;
	cout << "面积是：" << c1.getArea() << endl;


	return 0;
}