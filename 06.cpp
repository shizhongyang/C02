#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdarg.h>
#include <fstream>
using namespace std;

//c++类型转换
//static_cast
//const_cast
//dynamic_cast
//reinterpret_cast
//原始类型转换，都是一种写法，可读性不高，有可能有潜在的风险 就是c的转换
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
	////自动转换
	////double d = i;
	//double d = 9.5;

	//int m = d;

	//int s = 8;
	//double s_d = 9.5;


	//s = static_cast<int>(d);

	int i = 9;
	int *p = &i;
	//c的转换
	//char * c_p = (char *)func(2);
	//c++意图明显
	char *c_p = static_cast<char*>(func(2));


	func2(c_p);


	getchar();
}
*/

/*
void func(const char c[]){


	//c[0] = 'h';  不能修改


	//其他人并不知道，这次转型是为了去常量const 
	char* c_p = (char*)c;

	c_p[1] = 'c';


	//提高了可读性
	char *c_p = const_cast<char*>(c);
	c_p[1] = 'c';

	//可以修改
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
		cout << "人" << endl;
	}
};

/*
//子类也要加virtual关键字
class Man :public Person{
public:
	void pring(){
		cout << "男人" << endl;

	}

	void chasing(){
		cout << "泡妞" << endl;
	}
};

class Woman :public Person{
public:
	void pring(){
		cout << "女人" << endl;

	}
	void carebaby(){
		cout << "生孩子" << endl;
	}
};

void func(Person * obj){
	obj->pring();

	//调用子类的特有函数 这样做很不安全 转型失败
	//但是并不知道转型失败
	//Man *man = (Man*)obj;
	//man->chasing();

	Man* m = dynamic_cast<Man*>(obj);
	//转型失败返回NULL
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
	//函数指针数组
	f_p f_array[6];
	//赋值
	f_array[0] = func1;

	//C方式
	//f_array[1] = (f_p)(func2);
	//C++方式  不具备移植性
	f_array[1] = reinterpret_cast<f_p>(func2);

	f_array[1]();

	system("pause");
}

*/

//void main(){
//	char* fname = "D://dest.txt";
//	//输出流
//	ofstream fout(fname);
//	//创建失败
//	if (fout.bad()){
//		return;
//	}
//
//	fout << "jack" << endl;
//	fout << "rose" << endl;
//
//	//关闭
//	fout.close();
//
//	//读取
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