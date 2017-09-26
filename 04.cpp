#include "My.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdarg.h>
using namespace std;


//构造函数的属性初始化列表
//class Teas{
//private :
//	char *name;
//public:
//	Teas(char *name){
//		this->name = name;
//		cout << "tea有参构造函数" << endl;
//	}
//	~Teas(){
//		cout << "tea析构函数" << endl;
//	}
//
//	char *getName(){
//		return this->name;
//	}
//	
//
//};
//
//
//class Stus{
//	int id;
//	//属性对象
//	//Tea t1 = Tea("dd"); 这样固定了
//	Teas t1;
//	Teas t2;
//public:
//
//	//给对象赋值  直接给个固定的值也行
//	Stus(int id, char *t1_n, char *t2_n) :t1(t1_n), t2(t2_n){
//		this->id = id;
//		cout << "stu有参构造函数" << endl;
//	}
//	~Stus(){
//		cout << "stu析构函数" << endl;
//	}
//	void myprint(){
//		cout << id<< t1.getName() << ""<< endl;
//	}
//
//};
//
//void funs(){
//	Stus stu(10, "dg", "d");
//	stu.myprint();
//}
//
//void main(){
//	funs();
//	getchar();
//}

/*
class Teas{
private :
	char *name;
public:
	Teas(char *name){
		this->name = name;
		cout << "tea有参构造函数" << endl;
	}
	~Teas(){
		cout << "tea析构函数" << endl;
	}

	char *getName(){
		return this->name;
	}
	

};

void funs(){
	//c++写法  会调用构造和析构函数
	Teas *t = new Teas("g");
	cout << t->getName() << endl;
	delete t;

	//c的写法 不会调用
	Teas *t2 = (Teas*)malloc(sizeof(Teas));
	t2->getName();
	free(t2);

}


void main(){
	funs();
	//数组类型
	//C
	//int *p1 = (int*)malloc(sizeof(int) * 10);
	//p1[0] = 9;
	//free(p1);

	//C++  new 和delete 不必要成对使用
	int *p2 = new int[10];
	p2[0] = 2;
	//释放数组 []
	delete[] p2;



	getchar();
	}*/




//static 静态属性和方法
class Teas{
public:
	char *name;
	static int total ;
public:
	Teas(char *name){
		this->name = name;
		cout << "tea有参构造函数" << endl;
	}
	~Teas(){
		cout << "tea析构函数" << endl;
	}

	char *getName(){
		return this->name;
	}
	//计数  静态函数
	static void count(){
		total++;
	}
};
//静态属性初始化值
int Teas::total = 9;


//类的大小

//class B{
//public:
//	int a;
//	int b;
//	int c;
//	void myprintf(){
//		cout << "dddd" << endl;
//	}
//};


//this 
//函数是共享的 必须要有标识是谁的办法
class Teas1{
private:
	char *name;
	int age;
public:
	Teas1(char *name, int age){
		this->name = name;
		this->age = age;
		cout << "tea有参构造函数" << endl;
	}
	~Teas1(){
		cout << "tea析构函数" << endl;
	}


	//常函数，修饰的是this
	//既不能改变指针的值，又不能改变指针指向的内容
	//const Teacher* const this 
	//保证数据的安全
	void myprint() const{
		printf("%#X\n", this);

		//this->name = "ag";
		//this = (Teas1)0x00009;
		cout << this->name << this->age << "" << endl;
	}
};



/*

void main(){
	//Teas::total++;
	//cout << Teas::total << endl;
	//Teas::count();
	//cout << Teas::total << endl;
	//Teas t("y");
	//
	//t.count();
	//cout << Teas::total << endl;


	//C/C++ 内存分区：栈、堆、全局（静态、全局）、常量区（字符串）、程序代码区
	//普通属性与结构体相同的内存布局 
	//程序代码和全局不计做类的大小  因为存在程序代码区  共享  为了区分函数用this指针

	//JVM Stack （java虚拟机栈）（基本数据类型、对象引用）
	//Native Method Stack（本地方法栈）
	//方法区
	//程序技术区
	//直接内存

	//cout << sizeof(A)<< endl;
	//cout << sizeof(B) << endl;

	Teas1 t("s", 1);
	t.myprint();
	printf("%#X\n", &t);


	//常量对象只能调用常量函数。




	getchar();
	}*/

/*

//友元函数
class A{

	//B可以访问a中所有属性
	friend class B;

	//友元函数
	friend void modify_i(A*p, int a);
private:
	int i;  //如何访问私有的属性
public:
	A(int i){
		this->i = i;
	}
	void myprint(){
		cout << i << endl;
	}
};


//友元函数外部实现
void modify_i(A*p, int a){
	p->i = a;
}

//友元类
class B{
public :
	void accessAny(){
		a.i = 30;
	}
private: A a;
};
*/
//热修复就是将函数的指针指向另一个函数，错误函数 到正确的函数。

/*

//运算符重载
class Point{
public:
	int x;
	int y;
public:
	Point(int x = 0, int y = 0){
		this->x = x;
		this->y = y;
	}
	void myprint(){
		cout << x << "," << y << endl;
	}
};

//重载＋  Java String就是这种规则
Point operator+(Point &p1, Point &p2){
	Point tmp(p1.x+p2.x, p1.y + p2.y);
	return tmp;
}
//重载-
Point operator-(Point &p1, Point &p2){
	Point tmp(p1.x - p2.x, p1.y - p2.y);
	return tmp;
}
*/


/*
class Point{
public:
	int x;
	int y;
public:
	Point(int x = 0, int y = 0){
		this->x = x;
		this->y = y;
	}
	//成员函数，运算符重载
	Point operator+(Point &p2){
		Point tmp(this->x + p2.x, this->y + p2.y);
		return tmp;
	}

	void myprint(){
		cout << x << "," << y << endl;
	}
};
*/

/*
//当属性私有时，通过友元函数完成运算符重载
class Point{
	friend Point operator+(Point &p1, Point &p2);
private:
	int x;
	int y;
public:
	Point(int x = 0, int y = 0){
		this->x = x;
		this->y = y;
	}

	void myprint(){
		cout << x << "," << y << endl;
	}
};


Point operator+(Point &p1, Point &p2){
	Point tmp(p1.x + p2.x, p1.y + p2.y);
	return tmp;
}
*/

/*
void main(){

	A *a = new A(10);
	a->myprint();

	modify_i(a, 20);
	a->myprint();

	//Point p1(10, 29);
	//Point p2(20, 10);

	//Point p3 = p1 + p2;

	//p3.myprint();

	//运算符的重载，本质还是函数调用
	//p1.operator+(p2)


	Point p1(10, 29);
	Point p2(20, 10);

	Point p3 = p1 + p2;


	getchar();
}*/