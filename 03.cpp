#define _CRT_SECURE_NO_WARNINGS
#include "My.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdarg.h>
using namespace std;

//ͷ�ļ�ʲô��  ��һ��ʵ��
//���캯��  ��������  �������캯��
/*
class Stu{
public:
	int age;
	char *name;

public :
	Stu(){
		//һ�����͵���
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
		//����
		this->name = (char*)malloc(100);
		strcpy(name, "jon");
		age = 20;
		
		//һ�����͵���
		cout << "--�޲�---" << endl;
	}


	//��������  
	//������Ҫ��ϵͳ�ͷŵ�ʱ��  ���������µ���
	//�ƺ��� 
	~Stu(){
		cout << "--xigou---" << endl;
		//�ͷ�
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


//�������캯��
//ǳ������ֵ������ ������ַ
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
	////�������캯��  ��ֵ������
	////Ĭ�� �������캯������ֵ���� ��д��������
	//Stu(const Stu &stu){
	//	this->age = stu.age;
	//	this->name = stu.name;
	//	cout << "--�������캯��---" << endl;
	//}
	~Stu(){
		cout << "--xigou---" << endl;
		//�ͷ�
		free(this->name);
	}
	void myprint(){
		cout << name<<","<<age << endl;
	}

};

void fun(){
	Stu s("adg", 20);  //�ȴ��� Ȼ��ִ������֮����ͷ��ڴ�
	Stu s2 = s;  //�����ᱨ��  �ٴ�ִ���������� ��Ȼ�ͷ��ڴ浫���ڴ�Ϊ�� �ᱨ��

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
//	//���
//	//���������ڴ�  ָ��ָ�������
//
//	//ʹ�õĳ���
//
//	//����ʱ��ֵ  	Stu s2 = s;  
//	//�Ѷ��󴫵���ĺ����л����  ��Ϊ�������� ��ʵ�θ��βθ�ֵ
//	//��Ϊ��������ֵ���ظ�������ʼ����ֵ
//	Stu(const Stu &stu){
//		int len = strlen(stu.name);
//		this->name = (char*)malloc(len + 1);
//		strcpy(this->name, stu.name);
//		this->age = stu.age;
//		cout << "--�������캯��---" << endl;
//	}
//	~Stu(){
//		cout << "--xigou---" << endl;
//		//�ͷ�
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