#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdarg.h>
#include <fstream>
using namespace std;

//c++����ת��
//static_cast
//const_cast
//dynamic_cast
//reinterpret_cast
//ԭʼ����ת��������һ��д�����ɶ��Բ��ߣ��п�����Ǳ�ڵķ��� ����c��ת��
/*
void * func(int type){
	switch (type){

	case 1:{
			   int i = 0;
			   return &i;
			   break;
	}		
	case 2:{
			   char a = 'A';
			   return &a;
			   break;
	}
	default:{
				return NULL;
	}

		break;
	}
	
}

void func2(char *c_p){
	cout << *c_p << "------------" << endl;
}

void main(){

	//int i = 0;
	////�Զ�ת��
	////double d = i;
	//double d = 9.5;

	//int m = d;

	//int s = 8;
	//double s_d = 9.5;


	//s = static_cast<int>(d);

	int i = 9;
	int *p = &i;
	//c��ת��
	//char * c_p = (char *)func(2);
	//c++��ͼ����
	char *c_p = static_cast<char*>(func(2));


	func2(c_p);


	getchar();
}
*/

/*
void func(const char c[]){


	//c[0] = 'h';  �����޸�


	//�����˲���֪�������ת����Ϊ��ȥ����const 
	char* c_p = (char*)c;

	c_p[1] = 'c';


	//����˿ɶ���
	char *c_p = const_cast<char*>(c);
	c_p[1] = 'c';

	//�����޸�
	cout << c << endl;
	

}

void main(){
	char c[] = "hello";

	func(c);

	getchar();

}

*/


class Person{
public:
	virtual void pring(){
		cout << "��" << endl;
	}
};

/*
//����ҲҪ��virtual�ؼ���
class Man :public Person{
public:
	void pring(){
		cout << "����" << endl;

	}

	void chasing(){
		cout << "���" << endl;
	}
};

class Woman :public Person{
public:
	void pring(){
		cout << "Ů��" << endl;

	}
	void carebaby(){
		cout << "������" << endl;
	}
};

void func(Person * obj){
	obj->pring();

	//������������к��� �������ܲ���ȫ ת��ʧ��
	//���ǲ���֪��ת��ʧ��
	//Man *man = (Man*)obj;
	//man->chasing();

	Man* m = dynamic_cast<Man*>(obj);
	//ת��ʧ�ܷ���NULL
	if (m != NULL){
		m->chasing();
	}

	Woman* w = dynamic_cast<Woman*>(obj);
	if (w != NULL){
		w->carebaby();
	}

}

void main(){
	Woman w1;
	Person *p1 = &w1;

	func(p1);

	Woman *w_p = &w1;
	Person *p2 = w_p;



	getchar();
}
*/

void func1(){

}

char *func2(){
	return "av";
}


typedef void(*f_p)();
/*

void main(){
	//����ָ������
	f_p f_array[6];
	//��ֵ
	f_array[0] = func1;

	//C��ʽ
	//f_array[1] = (f_p)(func2);
	//C++��ʽ  ���߱���ֲ��
	f_array[1] = reinterpret_cast<f_p>(func2);

	f_array[1]();

	system("pause");
}

*/

//void main(){
//	char* fname = "D://dest.txt";
//	//�����
//	ofstream fout(fname);
//	//����ʧ��
//	if (fout.bad()){
//		return;
//	}
//
//	fout << "jack" << endl;
//	fout << "rose" << endl;
//
//	//�ر�
//	fout.close();
//
//	//��ȡ
//
//}

#include <vector>

void main(){
	vector<int> v;
	v.push_back(12);
	v.push_back(10);
	v.push_back(6);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	getchar();

}