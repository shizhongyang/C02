#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdarg.h>
#include "Plane.h"
#include "Jet.h"
#include "Copter.h"

using namespace std;

/*
//�̳�
//���๹�췽������
//�����������
class Human{
public:
	Human(char *name,int age){
		this->age = age;
		this->name = name;
	}

	void say(){
		cout << "˵��" << endl;
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


//�������඼����
void work(Human &h){
	h.say();
}

void main(){
	//�����ഫ��  �����Զ���ֵ
	Man man("45","dg",23,"",23);
	man.say();

	//�������͵�Ӧ�û���ָ��
	Human *h1 = &man;
	h1->say();

	Human &h2 = man;

	//��������ʼ���������͵Ķ���
	Human h3 = man;

	getchar();
	}*/

/*

//���캯���������������õ�˳��
class Human{
public:
	Human(char* name, int age){
		this->name = name;
		this->age = age;
		cout << "Human ���캯��" << endl;
	}
	~Human(){
		cout << "Human ��������" << endl;
	}
	void say(){
		cout << "˵��" << endl;
	}
protected:
	char* name;
	int age;
};

//����
class Man : public Human{
public:
	//�����๹�캯�����Σ�ͬʱ�����Զ���ֵ
	Man(char *brother, char *s_name, int s_age) : Human(s_name, s_age){
		this->brother = brother;
		cout << "Man ���캯��" << endl;
	}
	~Man(){
		cout << "Man ��������" << endl;
	}
	//���
	void chasing(){
		cout << "���" << endl;
	}
private:
	//�ֵ�
	char* brother;
};

void func(){
	//���๹�캯���ȵ���
	//��������������ȵ���
	Man m1("danny", "jack", 18);
}

void main(){
	func();
	system("pause");
	}*/


/*
//���������ø���ĳ�Ա
class Human{
public:
	Human(char* name, int age){
		this->name = name;
		this->age = age;
		cout << "Human ���캯��" << endl;
	}
	~Human(){
		cout << "Human ��������" << endl;
	}
	void say(){
		cout << "˵��" << endl;
	}
public:
	char* name;
	int age;
};

class Man : public Human{
public:
	//�����๹�캯�����Σ�ͬʱ�����Զ���ֵ
	Man(char *brother, char *s_name, int s_age) : Human(s_name, s_age){
		this->brother = brother;
		cout << "Man ���캯��" << endl;
	}
	~Man(){
		cout << "Man ��������" << endl;
	}
	//���
	void chasing(){
		cout << "���" << endl;
	}

	void say(){
		cout << "man ˵��" << endl;
	}
private:
	//�ֵ�
	char* brother;
};

void main(){
	//�Ǹ��ǣ����Ƕ�̬
	Man m1("alan", "john", 18);
	m1.say();
	//�Ǹ��� ���Ƕ�̬
	Human h1 = m1;
	h1.say(); 

	//���ø��� ������ֵ֮�඼�������ַ���
	m1.Human::say();
	m1.Human::age = 10;

	getchar();
}

*/

/*
//��̳�
class Person{

};


//����
class Citizen{

};

//ѧ���������ˣ����ǹ���
class Student : public Person, public Citizen{

};
*/

//�̳еķ�������
//������      �̳з�ʽ             ������
//public     �� public�̳� = > public
//public     �� protected�̳� = > protected
//public     �� private�̳� = > private
//
//protected  �� public�̳� = > protected
//protected  �� protected�̳� = > protected
//protected  �� private�̳� = > private
//
//private    �� public�̳� = > ������Ȩ����
//private    �� protected�̳� = > ������Ȩ����
//private    �� private�̳� = > ������Ȩ����



//�̳еĶ����� ���̳���A
//��̳У���ͬ·���̳�����ͬ����Աֻ��һ�ݿ������������ȷ������
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
	//ָ��������ʾ����
	//b.A1::name = "jason";
	//b.A2::name = "jason";

	system("pause");
}
*/

//�麯��
//��̬��������չ�ԣ�
//��̬��̬���������й����У�������һ�����������ã���д��
//��̬��̬������  ͬ��������ͬ�����б�

//������̬��������
//1.�̳�
//2.��������û���ָ��ָ������Ķ���
//3.��������д
//ҵ����
/*
void bizPlay(Plane& p){
	p.fly();
	p.land();
}


//ʵ�ֶ�̬��Ҫ����virtual�ؼ����ڸ���ķ�������
void main(){
	Plane p1;
	bizPlay(p1);

	//ֱ���ɻ�
	Jet p2;
	bizPlay(p2);

	Copter p3;
	bizPlay(p3);

	getchar();


}
*/

//���麯��(������)
//1.��һ�������һ�����麯�����������ǳ�����
//2.�����಻��ʵ��������
//3.����̳г����࣬����Ҫʵ�ִ��麯�������û�У�����Ҳ�ǳ�����
//����������ã�Ϊ�˼̳�Լ����������֪��δ����ʵ��

/*
class Shape{
public:
	virtual void  getArea() = 0;
	void print(){
		cout << "hi" << endl;
	}
};

//Բ
class Circle :public Shape{
public:
	Circle(int r){
		this->r = r;
	}

private:
	int r;
};
*/


//�ӿڣ�ֻ���߼��ϵĻ��֣��﷨�ϸ��������д��û������
//���Ե���һ���ӿ�
/*
class Drawble{
virtual void draw();
};
*/

//ģ�庯�������ͣ�
/*
void myswap(int& a,int& b){
int tmp = 0;
tmp = a;
a = b;
b = tmp;
}

void myswap(char& a, char& b){
char tmp = 0;
tmp = a;
a = b;
b = tmp;
}
*/

/*
//���֣�����������ҵ���߼�һ�����������Ͳ�һ��
template <typename T>
void myswap(T& a, T& b){
T tmp = 0;
tmp = a;
a = b;
b = tmp;
}

void main(){
//����ʵ�����ͣ��Զ��Ƶ�
int a = 10, b = 20;
myswap<int>(a,b);
cout << a << "," << b << endl;

char x = 'v', y = 'w';
myswap(x, y);
cout << x << "," << y << endl;

system("pause");
}
*/

/*
template<class T>
class A{
public:
	A(T a){
		this->a = a;
	}

protected:
	T a;

};

class B :public A<int>{
public:
	B(int a, int b){
		this->b = b;
	}
private:
	int b;
};

//ģ����̳�ģ����
template <class T>
class C :public A<T>{
public:
	C(T c, T a) :A<T>(a){
		this->c = c;
	}

protected:
	T c;
};

*/



//�׳��쳣����Ӧ���������ͣ����뵽��Ӧ��catch����
//void main(){
//
//	try{
//		int age = 300;
//		if (age>200)
//		{
//			throw "�쳣";
//		}
//	}
//	/*catch (int x){
//		cout << "int �쳣" << endl;
//	}*/
//	catch (char *b){
//		cout << b << endl;
//	}
//	catch (...){
//		cout << "δ֪�쳣" << endl;
//	}
//
//	getchar();
//}


/*
//throw �׳�������
void mydiv(int a, int b){
	if (b == 0){
		throw "�׳��쳣,����Ϊ0";
	}
}

void func(){
	try{
		mydiv(8, 0);
	}catch (char *a){
		cout << a << endl;
	}
}


void main(){
	try{
		func();
	}
	catch (char *a){
		throw a;
	}
	getchar();
}
*/




/*
class MyException{

};


void mydiv(int a, int b){
	if (b == 0){
		throw MyException();
		//throw new MyException; //��Ҫ�׳��쳣ָ��	 �׳�һ��ָ�뻹Ҫ�ͷ��ڴ�	
	}
}

void main(){
	try{
		mydiv(8, 0);
	}

	//���� ������á�
	catch (MyException& e2){
		cout << "MyException����" << endl;
	}
	//���������ĸ���
	//catch (MyException e){
	//	cout << "MyException" << endl;
	//}
	catch (MyException* e1){
		cout << "MyExceptionָ��" << endl;
		delete e1; //�ͷ� 
	}

	system("pause");
}
*/
//throw �����������׳����쳣����
//void mydiv(int a, int b) throw (char*, int) {
//	if (b == 0){
//		throw "����Ϊ��";
//	}
//}


/* include <stdexcept>
//��׼�쳣��������NullPointerException�� ��Ҫ����ͷ�ļ�
class NullPointerException : public exception{
public:
	NullPointerException(char *msg) :exception(msg){

	}
};


void mydiv(int a,int b){
	if (b > 10){
		throw out_of_range("������Χ");
	}
	else if (b == NULL){
		throw NullPointerException("Ϊ��");

	}
	else
	{
		throw invalid_argument("�������Ϸ�");
	}


}

void main(){
	try{
		mydiv(9, NULL);
	}
	catch (out_of_range e1){
		cout << e1.what() << endl;
	}
	catch (NullPointerException &e2){
		cout << e2.what() << endl;
	}
	catch (...){

	}

	getchar();

}
*/


/*
class Err{

public :
	class MyException{
		public:MyException(){

		}
	};
};

void mydiv(int a, int b){
	if (b > 10){
		throw Err::MyException();
	}

	}*/