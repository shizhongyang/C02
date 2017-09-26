#include <stdio.h>
#include <stdlib.h>
#include <iostream>
////标准的命名空间（包含很过标准定义）standard
using namespace std; //命名空间相当于java中的包

/*
//自定义命名空间  相同的东西放在不同的命名空间 也可以 加以区分
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
	//命名空间嵌套
	namespace NSP_C{
		int c = 90;

	}

	struct Stu{
		char name[20];
		int age;
	};
}


#define PI 3.14
//类
class MyC{

	//共用权限访问修饰符
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


//结构体在c++里面  结构体不能继承
struct MyTeacher{
public:
	char name[20];
	int age;
public :
	void say(){
		cout << this->age <<"岁" << endl;
	}
};


//指针值交换
void swap_1(int *a, int *b){
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}


//引用的值交换
void swap_2(int &a, int &b){
	int c = 0;
	c = a;
	a = b;
	b = c;
}

*/


//void main(){
	// << 运算符重载 本身没有意义，重载之后
	//std::cout << "this is c + + " << std::endl;

	//使用了以后
	//cout << "this is c + + " << endl;

	//使用命名空间
	//访问符 相当于java .
	/*cout << NSP_A::a << endl;
	cout << NSP_B::a << endl;
	cout << NSP_B::NSP_C::c << endl;*/

	//使用命名空间的结构体
	/*struct NSP_A::teacher t;
	t.age = 10;*/

	//这样简写
	/*using namespace NSP_A;
	Stu stu;
	stu.age = 10;*/
	//这样会冲突 a和b里面都有Stu 必须要加命名空间
	//using namespace NSP_B;
	//Stu stu;
	/*MyC c1;
	c1.setR(4);
	cout << "面积"<<c1.getS() << endl;*/
	
	/*MyTeacher m;
	m.age = 10;
	m.say();*/
	//----------------------------------------
	//布尔类型
	//bool isSingle = true;
	//bool isSingle = 17;
	//cout << isSingle << endl; //大于0都是true
	//cout << sizeof(bool) << endl;  //一个字节
	//----------------------------------------
	//int a = 10, b = 20;
	//int c = (a > b) ? a : b;

	//cout << c << endl;
	//((a > b) ? a : b) = 30;  //这样可以直接赋值  只有在C++中可以
	//cout << b << endl;

	//----------------------------------------
	//引用
	//变量名相当于一个门牌号  内存地址的别名 0x000000001 可不可以叫多个名字
	//int a = 10;

	//b取了一个别名，代表这个别名  b和a都可以访问这一块内存
	//这个就表示引用
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



//这样相当于给 a b赋值  不会交换值
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