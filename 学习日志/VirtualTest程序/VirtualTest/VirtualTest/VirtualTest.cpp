#include"VirtualTest.h" //VirtualTest.cpp Դ�ļ�

//��ӡ����˭�����麯��ʵ�֣���EE��
void EE::whoAmINV() {
	cout << "I am a EE (not virtual)" << endl;
}

//��ӡ����˭���麯��ʵ�֣���EE��
void EE::whoAmIV() {
	cout << "I am a EE (virtual)" << endl;
}

//��ӡ����˭�����麯��ʵ�֣���MT��
void MT::whoAmINV() {
	cout << "I am a MT (not virtual)" << endl;
}

//��ӡ����˭���麯��ʵ�֣���MT��
void MT::whoAmIV() {
	cout << "I am a MT (virtual)" << endl;
}

//��ӡ����˭�����麯��ʵ�֣���CA��
void CA::whoAmINV() {
	cout << "I am a CA (not virtual)" << endl;
}

//��ӡ����˭���麯��ʵ�֣���CA��
void CA::whoAmIV() {
	cout << "I am a CA (virtual)" << endl;
}

int main() {
	EE* pee[2]; //����ָ��
	pee[0] = new MT(); //����ָ��ָ���������MT��
	pee[1] = new CA(); //����ָ��ָ���������CA��

	//ʹ�÷��麯��
	cout << "ʹ�÷��麯����������£�" << endl;
	for (int i = 0; i < 2; i++) {
		pee[i]->whoAmINV();
	}

	cout << endl;

	//ʹ���麯��
	cout << "ʹ���麯����������£�" << endl;
	for (int i = 0; i < 2; i++) {
		pee[i]->whoAmIV();
	}
}