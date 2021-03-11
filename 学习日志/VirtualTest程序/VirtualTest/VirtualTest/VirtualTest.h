#pragma once //VirtualTest.h 头文件
#include<iostream>
using namespace std;

//电子设备
class EE {
protected:
	int price; //价格
public:
	EE() {}; //EE的构造函数
	void whoAmINV(); //打印我是谁（非虚函数实现）（EE）
	virtual void whoAmIV(); //打印我是谁（虚函数实现）（EE）
};

//手机
class MT :public EE {
protected:
	int rent; //月租费
public:
	MT() {}; //MT的构造函数
	void whoAmINV(); //打印我是谁（非虚函数实现）（MT）
	void whoAmIV(); //打印我是谁（虚函数实现）（MT）
};

//照相机
class CA :public EE {
protected:
	int pixel; //像素
public:
	CA() {}; //CA的构造函数
	void whoAmINV(); //打印我是谁（非虚函数实现）（CA）
	void whoAmIV(); //打印我是谁（虚函数实现）（CA）
};