#pragma once //VirtualTest.h ͷ�ļ�
#include<iostream>
using namespace std;

//�����豸
class EE {
protected:
	int price; //�۸�
public:
	EE() {}; //EE�Ĺ��캯��
	void whoAmINV(); //��ӡ����˭�����麯��ʵ�֣���EE��
	virtual void whoAmIV(); //��ӡ����˭���麯��ʵ�֣���EE��
};

//�ֻ�
class MT :public EE {
protected:
	int rent; //�����
public:
	MT() {}; //MT�Ĺ��캯��
	void whoAmINV(); //��ӡ����˭�����麯��ʵ�֣���MT��
	void whoAmIV(); //��ӡ����˭���麯��ʵ�֣���MT��
};

//�����
class CA :public EE {
protected:
	int pixel; //����
public:
	CA() {}; //CA�Ĺ��캯��
	void whoAmINV(); //��ӡ����˭�����麯��ʵ�֣���CA��
	void whoAmIV(); //��ӡ����˭���麯��ʵ�֣���CA��
};