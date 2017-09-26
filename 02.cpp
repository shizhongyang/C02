#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdarg.h>

//标准的命名空间（包含很过标准定义）standard
using namespace std; //命名空间相当于java中的包


struct Teacher{
	char *name;
	int age;
};

void printMy(Teacher &t){

	cout << t.name << "," << t.age << endl;
}

void printMy2(Teacher *t){

	cout << t->name << "," << t->age << endl;
}

struct  Stu
{
	char*name;
	int age;
};

void getStu(Stu **p){
	Stu *stu = (Stu*)malloc(sizeof(Stu));
	stu->age = 20;
	*p = stu;
}
//指针的引用，代替二级指针
//void getStu(Stu* &p){
//	p = (Stu*)malloc(sizeof(Stu));
//	p->age = 20;
//}


//引用的主要功能  主要是函数的参数和返回值
//void main(){
//	Teacher t;
//	t.name = "shix";
//	t.age = 20;
//	printMy(t);
//
//	//printMy2(&t);
//	Stu *s = NULL;
//	getStu(&s);
//
//	getchar();
//}


//指针变量的地址 引用变量的别名
/*
void main(){
	//指针常量，指针的常量，不改变地址的指针，但是可以修改它指向的内容
	//有点像final
	int a = 2, b = 3;
	int *const p = &a;
	//p = &b;  错误
	*p = 5;


	//常量指针  指向常量的指针.  内容不能修改
	const int *p2 = &a;
	p2 = &b;
	//*p2 = 9;  错误
	getchar();
}
*/


/*引用主要功能是做函数的参数
1.单纯给变量取别名没有任何意义，能保证参数传递的过程中不产生副本
2.引用可以直接操作变量，指针要取值（*P）间接操作变量 指针的可读性差
*/
struct Teacher1{
	char name[20];
	int age;
};

void myprint(Teacher1 &t){
	cout << t.name << "," << t.age << endl;
}

void myprint2(Teacher1 *t){

	cout << t->name << "," << t->age << endl;
}

//void main(){
//	Teacher1 t;
//	Teacher1 *p = NULL;
//	//报错 防止不报错 进行非空判断
//	myprint2(p);
//
//	myprint2(&t);
//
//	//引用不能为空
//	//Teacher1 &t2;
//	//myprint(t2);
//
//}

//常引用
void myprintf3(const int &a){
	cout << a << endl;
}

/* 
void main(){

	int i = 9;
	//常量不赋值不行
	//const int a;
	//引用必须要用只不能为空
	//int &a;

	////常引用
	//int a = 10, b = 9;
	////c是常引用
	//const int &c = a;
	////c = b  不行
	//myprintf3(c);

	Teacher1 t;

	Teacher1 &t1 = t;
	Teacher1 *p = &t;

	cout << sizeof(t1) << endl;
	cout << sizeof(p) << endl;
	getchar();
	}*/

//函数 默认值 一旦前面的给了值 后面的也必须给
void print4(int n,int x = 10,int y = 10){
	cout << x << endl;
}

//重载
void print4(int n, bool  e){

}

//可变参数
void func(int i, ...){
	//可变参数指针
	va_list args_p;

	//开始读取可变参数
	va_start(args_p, i);

	/*int a = va_arg(args_p, int);
	int b = va_arg(args_p, int);
	cout << a  << endl;
	cout << b << endl;*/

	//结束
	va_end(args_p);
}

//可变参数 必须要多个参数
//void func1(int i, ...){
//	//可变参数指针
//	va_list args_p;
//
//	//开始读取可变参数
//	va_start(args_p, i);
//	int value;
//	while (1)
//	{
//		value = va_arg(args_p, int);
//		if (value <= 0){
//			break;
//		}
//
//		cout << value << endl;
//	}
//
//	//结束
//	va_end(args_p);
//}
//
//void main(){
//	//print4(3);
//
//	func1(3, 4, 5,7,9);
//	getchar();
//}

//类