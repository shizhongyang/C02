#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdarg.h>
#include "Plane.h"
#include "Jet.h"
#include "Copter.h"

using namespace std;

/*
//继承
//向父类构造方法传参
//代码的重用性
class Human{
public:
	Human(char *name,int age){
		this->age = age;
		this->name = name;
	}

	void say(){
		cout << "说话" << endl;
	}
private:
	char* name;
	int age;
};

class Man : public Human{
public :
	Man(char *bro, char *s_name, int s_age, char *h_name, int h_age) :Human(s_name, s_age), h(h_name,h_age){
		this->bro = bro;
	}
	//
	void chasing(){
		cout << "-----" << endl;
	}

private:
	char*bro;
	Human h;
};


//父类子类都可以
void work(Human &h){
	h.say();
}

void main(){
	//给父类传参  给属性对象赋值
	Man man("45","dg",23,"",23);
	man.say();

	//父类类型的应用或者指针
	Human *h1 = &man;
	h1->say();

	Human &h2 = man;

	//子类对象初始化父类类型的对象
	Human h3 = man;

	getchar();
	}*/

/*

//构造函数与析构函数调用的顺序
class Human{
public:
	Human(char* name, int age){
		this->name = name;
		this->age = age;
		cout << "Human 构造函数" << endl;
	}
	~Human(){
		cout << "Human 析构函数" << endl;
	}
	void say(){
		cout << "说话" << endl;
	}
protected:
	char* name;
	int age;
};

//男人
class Man : public Human{
public:
	//给父类构造函数传参，同时给属性对象赋值
	Man(char *brother, char *s_name, int s_age) : Human(s_name, s_age){
		this->brother = brother;
		cout << "Man 构造函数" << endl;
	}
	~Man(){
		cout << "Man 析构函数" << endl;
	}
	//泡妞
	void chasing(){
		cout << "泡妞" << endl;
	}
private:
	//兄弟
	char* brother;
};

void func(){
	//父类构造函数先调用
	//子类的析构函数先调用
	Man m1("danny", "jack", 18);
}

void main(){
	func();
	system("pause");
	}*/


/*
//子类对象调用父类的成员
class Human{
public:
	Human(char* name, int age){
		this->name = name;
		this->age = age;
		cout << "Human 构造函数" << endl;
	}
	~Human(){
		cout << "Human 析构函数" << endl;
	}
	void say(){
		cout << "说话" << endl;
	}
public:
	char* name;
	int age;
};

class Man : public Human{
public:
	//给父类构造函数传参，同时给属性对象赋值
	Man(char *brother, char *s_name, int s_age) : Human(s_name, s_age){
		this->brother = brother;
		cout << "Man 构造函数" << endl;
	}
	~Man(){
		cout << "Man 析构函数" << endl;
	}
	//泡妞
	void chasing(){
		cout << "泡妞" << endl;
	}

	void say(){
		cout << "man 说话" << endl;
	}
private:
	//兄弟
	char* brother;
};

void main(){
	//是覆盖，并非动态
	Man m1("alan", "john", 18);
	m1.say();
	//是覆盖 并非多态
	Human h1 = m1;
	h1.say(); 

	//调用父类 函数赋值之类都是用这种方法
	m1.Human::say();
	m1.Human::age = 10;

	getchar();
}

*/

/*
//多继承
class Person{

};


//公民
class Citizen{

};

//学生，既是人，又是公民
class Student : public Person, public Citizen{

};
*/

//继承的访问修饰
//基类中      继承方式             子类中
//public     ＆ public继承 = > public
//public     ＆ protected继承 = > protected
//public     ＆ private继承 = > private
//
//protected  ＆ public继承 = > protected
//protected  ＆ protected继承 = > protected
//protected  ＆ private继承 = > private
//
//private    ＆ public继承 = > 子类无权访问
//private    ＆ protected继承 = > 子类无权访问
//private    ＆ private继承 = > 子类无权访问



//继承的二义性 都继承了A
//虚继承，不同路径继承来的同名成员只有一份拷贝，解决不明确的问题
/*
class A{
public:
char* name;
};

class A1 : virtual public A{

};

class A2 : virtual public A{

};

class B : public A1, public A2{

};

void main(){
	B b;
	b.name = "jason";
	//指定父类显示调用
	//b.A1::name = "jason";
	//b.A2::name = "jason";

	system("pause");
}
*/

//虚函数
//多态（程序扩展性）
//动态多态：程序运行过程中，觉得哪一个函数被调用（重写）
//静态多态：重载  同个函数不同参数列表

//发生动态的条件：
//1.继承
//2.父类的引用或者指针指向子类的对象
//3.函数的重写
//业务函数
/*
void bizPlay(Plane& p){
	p.fly();
	p.land();
}


//实现多态需要加上virtual关键字在父类的方法当中
void main(){
	Plane p1;
	bizPlay(p1);

	//直升飞机
	Jet p2;
	bizPlay(p2);

	Copter p3;
	bizPlay(p3);

	getchar();


}
*/

//纯虚函数(抽象类)
//1.当一个类具有一个纯虚函数，这个类就是抽象类
//2.抽象类不能实例化对象
//3.子类继承抽象类，必须要实现纯虚函数，如果没有，子类也是抽象类
//抽象类的作用：为了继承约束，根本不知道未来的实现

class Shape{
public:
	virtual void  getArea() = 0;
	void print(){
		cout << "hi" << endl;
	}
};

//圆
class Circle :public Shape{
public:
	Circle(int r){
		this->r = r;
	}

private:
	int r;
};