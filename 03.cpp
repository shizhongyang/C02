#define _CRT_SECURE_NO_WARNINGS
#include "My.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdarg.h>
using namespace std;

//头文件什么类  另一个实现
//构造函数  析构函数  拷贝构造函数
/*
class Stu{
public:
	int age;
	char *name;

public :
	Stu(){
		//一创建就调用
		cout << "-----" << endl;
	}

	Stu(char *name ,int age){
		this->name = name;
		this->age = age;
		cout << "--gff---" << endl;
	}
	


};

void main(){
	//My m;
	//m.age = 20;
	//cout << m.getAge() << endl;
	//Stu s;
	Stu s("ag", 10);

	getchar();
	}*/

/*

class Stu{
public:
	int age;
	char *name;

public:
	Stu(){
		//开辟
		this->name = (char*)malloc(100);
		strcpy(name, "jon");
		age = 20;
		
		//一创建就调用
		cout << "--无参---" << endl;
	}


	//析构函数  
	//当对象要被系统释放的时候  析构函数呗调用
	//善后处理 
	~Stu(){
		cout << "--xigou---" << endl;
		//释放
		free(this->name);
	}
};

void func(){
	Stu s;
}

void main(){
	//My m;
	//m.age = 20;
	//cout << m.getAge() << endl;
	//Stu s;
	
	func();
	getchar();
}
*/


//拷贝构造函数
//浅拷贝（值拷贝） 拷贝地址
/*
class Stu{
public:
	int age;
	char *name;

public:
	Stu(char *name, int age){
		this->name = name;
		this->age = age;
		cout << "--gff---" << endl;
	}
	////拷贝构造函数  （值拷贝）
	////默认 拷贝构造函数就是值拷贝 不写就是这种
	//Stu(const Stu &stu){
	//	this->age = stu.age;
	//	this->name = stu.name;
	//	cout << "--拷贝构造函数---" << endl;
	//}
	~Stu(){
		cout << "--xigou---" << endl;
		//释放
		free(this->name);
	}
	void myprint(){
		cout << name<<","<<age << endl;
	}

};

void fun(){
	Stu s("adg", 20);  //先创建 然后执行析构之后会释放内存
	Stu s2 = s;  //这样会报错  再次执行析构函数 仍然释放内存但是内存为空 会报错

	s2.myprint();
}

void main(){
	fun();

	getchar();
}
*/

//
//class Stu{
//public:
//	int age;
//	char *name;
//
//public:
//	Stu(char *name, int age){
//		int len = strlen(name);
//		this->name = (char*)malloc(len + 1);
//
//		strcpy(this->name, name);
//		this->age = age;
//		cout << "--gff---" << endl;
//	}
//
//	//深拷贝
//	//拷贝的是内存  指针指向的内容
//
//	//使用的场景
//
//	//声明时赋值  	Stu s2 = s;  
//	//把对象传到别的函数中会调用  作为参数传入 ，实参给形参赋值
//	//作为函数返回值返回给变量初始化赋值
//	Stu(const Stu &stu){
//		int len = strlen(stu.name);
//		this->name = (char*)malloc(len + 1);
//		strcpy(this->name, stu.name);
//		this->age = stu.age;
//		cout << "--拷贝构造函数---" << endl;
//	}
//	~Stu(){
//		cout << "--xigou---" << endl;
//		//释放
//		free(this->name);
//	}
//	void myprint(){
//		cout << name << "," << age << endl;
//	}
//
//};
//
//void fun1(Stu s){
//
//	s.myprint();
//}
//
//void fun(){
//	Stu s("adg", 20);
//	Stu s2 = s;  
//
//	s2.myprint();
//}
//void main(){
//	fun();
//	getchar();
//}