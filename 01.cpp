#include <stdio.h>
#include <stdlib.h>
#include <iostream>
////��׼�������ռ䣨�����ܹ���׼���壩standard
using namespace std; //�����ռ��൱��java�еİ�

/*
//�Զ��������ռ�  ��ͬ�Ķ������ڲ�ͬ�������ռ� Ҳ���� ��������
namespace NSP_A{
	int a = 9;
	struct teacher{
		char name[20];
		int age;
	};
	struct Stu{
		char name[20];
		int age;
	};
}
namespace NSP_B{
	int a = 10;
	//�����ռ�Ƕ��
	namespace NSP_C{
		int c = 90;

	}

	struct Stu{
		char name[20];
		int age;
	};
}


#define PI 3.14
//��
class MyC{

	//����Ȩ�޷������η�
private:
	double r;
	double s;


public:
	void setR(double r){
		this->r = r;
	}
	double getS(){
		return PI*r*r;
	}

};


//�ṹ����c++����  �ṹ�岻�ܼ̳�
struct MyTeacher{
public:
	char name[20];
	int age;
public :
	void say(){
		cout << this->age <<"��" << endl;
	}
};


//ָ��ֵ����
void swap_1(int *a, int *b){
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}


//���õ�ֵ����
void swap_2(int &a, int &b){
	int c = 0;
	c = a;
	a = b;
	b = c;
}

*/


//void main(){
	// << ��������� ����û�����壬����֮��
	//std::cout << "this is c + + " << std::endl;

	//ʹ�����Ժ�
	//cout << "this is c + + " << endl;

	//ʹ�������ռ�
	//���ʷ� �൱��java .
	/*cout << NSP_A::a << endl;
	cout << NSP_B::a << endl;
	cout << NSP_B::NSP_C::c << endl;*/

	//ʹ�������ռ�Ľṹ��
	/*struct NSP_A::teacher t;
	t.age = 10;*/

	//������д
	/*using namespace NSP_A;
	Stu stu;
	stu.age = 10;*/
	//�������ͻ a��b���涼��Stu ����Ҫ�������ռ�
	//using namespace NSP_B;
	//Stu stu;
	/*MyC c1;
	c1.setR(4);
	cout << "���"<<c1.getS() << endl;*/
	
	/*MyTeacher m;
	m.age = 10;
	m.say();*/
	//----------------------------------------
	//��������
	//bool isSingle = true;
	//bool isSingle = 17;
	//cout << isSingle << endl; //����0����true
	//cout << sizeof(bool) << endl;  //һ���ֽ�
	//----------------------------------------
	//int a = 10, b = 20;
	//int c = (a > b) ? a : b;

	//cout << c << endl;
	//((a > b) ? a : b) = 30;  //��������ֱ�Ӹ�ֵ  ֻ����C++�п���
	//cout << b << endl;

	//----------------------------------------
	//����
	//�������൱��һ�����ƺ�  �ڴ��ַ�ı��� 0x000000001 �ɲ����Խж������
	//int a = 10;

	//bȡ��һ�������������������  b��a�����Է�����һ���ڴ�
	//����ͱ�ʾ����
	//int &b = a;
	//cout << b << endl;

	//----------------------------------------
	//int x = 10;
	//int y = 20;
	//swap_1(&x, &y);
	//printf("%d,%d \n", x, y);
	//swap_2(x, y);
	//printf("%d,%d \n", x, y);


	//getchar();

//}



//�����൱�ڸ� a b��ֵ  ���ύ��ֵ
void swap_2(int a, int b){
	int c = 0;
	c = a;
	a = b;
	b = c;
}
//void main(){
//	int x = 10;
//	int y = 20;
//	swap_2(x, y);
//
//	cout << x << "y"<< y << endl;
//	getchar();
//}