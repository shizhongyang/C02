#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdarg.h>

//��׼�������ռ䣨�����ܹ���׼���壩standard
using namespace std; //�����ռ��൱��java�еİ�


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
//ָ������ã��������ָ��
//void getStu(Stu* &p){
//	p = (Stu*)malloc(sizeof(Stu));
//	p->age = 20;
//}


//���õ���Ҫ����  ��Ҫ�Ǻ����Ĳ����ͷ���ֵ
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


//ָ������ĵ�ַ ���ñ����ı���
/*
void main(){
	//ָ�볣����ָ��ĳ��������ı��ַ��ָ�룬���ǿ����޸���ָ�������
	//�е���final
	int a = 2, b = 3;
	int *const p = &a;
	//p = &b;  ����
	*p = 5;


	//����ָ��  ָ������ָ��.  ���ݲ����޸�
	const int *p2 = &a;
	p2 = &b;
	//*p2 = 9;  ����
	getchar();
}
*/


/*������Ҫ�������������Ĳ���
1.����������ȡ����û���κ����壬�ܱ�֤�������ݵĹ����в���������
2.���ÿ���ֱ�Ӳ���������ָ��Ҫȡֵ��*P����Ӳ������� ָ��Ŀɶ��Բ�
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
//	//���� ��ֹ������ ���зǿ��ж�
//	myprint2(p);
//
//	myprint2(&t);
//
//	//���ò���Ϊ��
//	//Teacher1 &t2;
//	//myprint(t2);
//
//}

//������
void myprintf3(const int &a){
	cout << a << endl;
}

/* 
void main(){

	int i = 9;
	//��������ֵ����
	//const int a;
	//���ñ���Ҫ��ֻ����Ϊ��
	//int &a;

	////������
	//int a = 10, b = 9;
	////c�ǳ�����
	//const int &c = a;
	////c = b  ����
	//myprintf3(c);

	Teacher1 t;

	Teacher1 &t1 = t;
	Teacher1 *p = &t;

	cout << sizeof(t1) << endl;
	cout << sizeof(p) << endl;
	getchar();
	}*/

//���� Ĭ��ֵ һ��ǰ��ĸ���ֵ �����Ҳ�����
void print4(int n,int x = 10,int y = 10){
	cout << x << endl;
}

//����
void print4(int n, bool  e){

}

//�ɱ����
void func(int i, ...){
	//�ɱ����ָ��
	va_list args_p;

	//��ʼ��ȡ�ɱ����
	va_start(args_p, i);

	/*int a = va_arg(args_p, int);
	int b = va_arg(args_p, int);
	cout << a  << endl;
	cout << b << endl;*/

	//����
	va_end(args_p);
}

//�ɱ���� ����Ҫ�������
//void func1(int i, ...){
//	//�ɱ����ָ��
//	va_list args_p;
//
//	//��ʼ��ȡ�ɱ����
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
//	//����
//	va_end(args_p);
//}
//
//void main(){
//	//print4(3);
//
//	func1(3, 4, 5,7,9);
//	getchar();
//}

//��