#include"VirtualTest.h" //VirtualTest.cpp 源文件

//打印我是谁（非虚函数实现）（EE）
void EE::whoAmINV() {
	cout << "I am a EE (not virtual)" << endl;
}

//打印我是谁（虚函数实现）（EE）
void EE::whoAmIV() {
	cout << "I am a EE (virtual)" << endl;
}

//打印我是谁（非虚函数实现）（MT）
void MT::whoAmINV() {
	cout << "I am a MT (not virtual)" << endl;
}

//打印我是谁（虚函数实现）（MT）
void MT::whoAmIV() {
	cout << "I am a MT (virtual)" << endl;
}

//打印我是谁（非虚函数实现）（CA）
void CA::whoAmINV() {
	cout << "I am a CA (not virtual)" << endl;
}

//打印我是谁（虚函数实现）（CA）
void CA::whoAmIV() {
	cout << "I am a CA (virtual)" << endl;
}

int main() {
	EE* pee[2]; //基类指针
	pee[0] = new MT(); //基类指针指向子类对象（MT）
	pee[1] = new CA(); //基类指针指向子类对象（CA）

	//使用非虚函数
	cout << "使用非虚函数的情况如下：" << endl;
	for (int i = 0; i < 2; i++) {
		pee[i]->whoAmINV();
	}

	cout << endl;

	//使用虚函数
	cout << "使用虚函数的情况如下：" << endl;
	for (int i = 0; i < 2; i++) {
		pee[i]->whoAmIV();
	}
}