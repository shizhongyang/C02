#include "My.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdarg.h>
using namespace std;


//���캯�������Գ�ʼ���б�
//class Teas{
//private :
//	char *name;
//public:
//	Teas(char *name){
//		this->name = name;
//		cout << "tea�вι��캯��" << endl;
//	}
//	~Teas(){
//		cout << "tea��������" << endl;
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
//	//���Զ���
//	//Tea t1 = Tea("dd"); �����̶���
//	Teas t1;
//	Teas t2;
//public:
//
//	//������ֵ  ֱ�Ӹ����̶���ֵҲ��
//	Stus(int id, char *t1_n, char *t2_n) :t1(t1_n), t2(t2_n){
//		this->id = id;
//		cout << "stu�вι��캯��" << endl;
//	}
//	~Stus(){
//		cout << "stu��������" << endl;
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
		cout << "tea�вι��캯��" << endl;
	}
	~Teas(){
		cout << "tea��������" << endl;
	}

	char *getName(){
		return this->name;
	}
	

};

void funs(){
	//c++д��  ����ù������������
	Teas *t = new Teas("g");
	cout << t->getName() << endl;
	delete t;

	//c��д�� �������
	Teas *t2 = (Teas*)malloc(sizeof(Teas));
	t2->getName();
	free(t2);

}


void main(){
	funs();
	//��������
	//C
	//int *p1 = (int*)malloc(sizeof(int) * 10);
	//p1[0] = 9;
	//free(p1);

	//C++  new ��delete ����Ҫ�ɶ�ʹ��
	int *p2 = new int[10];
	p2[0] = 2;
	//�ͷ����� []
	delete[] p2;



	getchar();
	}*/




//static ��̬���Ժͷ���
class Teas{
public:
	char *name;
	static int total ;
public:
	Teas(char *name){
		this->name = name;
		cout << "tea�вι��캯��" << endl;
	}
	~Teas(){
		cout << "tea��������" << endl;
	}

	char *getName(){
		return this->name;
	}
	//����  ��̬����
	static void count(){
		total++;
	}
};
//��̬���Գ�ʼ��ֵ
int Teas::total = 9;


//��Ĵ�С

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
//�����ǹ���� ����Ҫ�б�ʶ��˭�İ취
class Teas1{
private:
	char *name;
	int age;
public:
	Teas1(char *name, int age){
		this->name = name;
		this->age = age;
		cout << "tea�вι��캯��" << endl;
	}
	~Teas1(){
		cout << "tea��������" << endl;
	}


	//�����������ε���this
	//�Ȳ��ܸı�ָ���ֵ���ֲ��ܸı�ָ��ָ�������
	//const Teacher* const this 
	//��֤���ݵİ�ȫ
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


	//C/C++ �ڴ������ջ���ѡ�ȫ�֣���̬��ȫ�֣������������ַ����������������
	//��ͨ������ṹ����ͬ���ڴ沼�� 
	//��������ȫ�ֲ�������Ĵ�С  ��Ϊ���ڳ��������  ����  Ϊ�����ֺ�����thisָ��

	//JVM Stack ��java�����ջ���������������͡��������ã�
	//Native Method Stack�����ط���ջ��
	//������
	//��������
	//ֱ���ڴ�

	//cout << sizeof(A)<< endl;
	//cout << sizeof(B) << endl;

	Teas1 t("s", 1);
	t.myprint();
	printf("%#X\n", &t);


	//��������ֻ�ܵ��ó���������




	getchar();
	}*/

/*

//��Ԫ����
class A{

	//B���Է���a����������
	friend class B;

	//��Ԫ����
	friend void modify_i(A*p, int a);
private:
	int i;  //��η���˽�е�����
public:
	A(int i){
		this->i = i;
	}
	void myprint(){
		cout << i << endl;
	}
};


//��Ԫ�����ⲿʵ��
void modify_i(A*p, int a){
	p->i = a;
}

//��Ԫ��
class B{
public :
	void accessAny(){
		a.i = 30;
	}
private: A a;
};
*/
//���޸����ǽ�������ָ��ָ����һ�������������� ����ȷ�ĺ�����

/*

//���������
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

//���أ�  Java String�������ֹ���
Point operator+(Point &p1, Point &p2){
	Point tmp(p1.x+p2.x, p1.y + p2.y);
	return tmp;
}
//����-
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
	//��Ա���������������
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
//������˽��ʱ��ͨ����Ԫ����������������
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

	//����������أ����ʻ��Ǻ�������
	//p1.operator+(p2)


	Point p1(10, 29);
	Point p2(20, 10);

	Point p3 = p1 + p2;


	getchar();
}*/