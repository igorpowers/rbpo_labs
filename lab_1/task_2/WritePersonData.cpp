#include "header.h"

void WritePersonData(const string& name, const string& weight, const string& height, const unsigned short* age, const double salary) {
	cout << "���: " << name << endl;
	cout << "����:" << weight << endl;
	cout << "���:" << height << endl;
	cout << "�������:" << *age << endl;
	cout << "���������� �����: " << salary << endl;
}