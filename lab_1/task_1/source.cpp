#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

unsigned short height;

unsigned short ReadPersonAge() {
	unsigned short age;
	cout << "������� ������� ��������:";
	cin >> age;
	return age;
}

string ReadPersonName() {
	string name;
	cout << "������� ��� ��������:";
	cin >> name;
	return name;
}

unsigned short ReadPersonHeight() {
	cout << "������� ���� ��������:";
	cin >> height;
	return height;
}

void ReadPersonWeight(unsigned short& weight) {
	cout << "������� ��� ��������:";
	cin >> height;
}

void ReadPersonSalary(double* salary) {
	cout << "������� ���������� �����:";
	cin >> *salary;
}

void WritePersonData(const string& name, const string& weight, const string& height, const unsigned short* age, const double salary) {
	cout << "���: " << name << endl;
	cout << "����:" << weight << endl;
	cout << "���:" << height << endl;
	cout << "�������:" << *age << endl;
	cout << "���������� �����: " << salary << endl;
}

void ReadPersonData(string& name, unsigned short& age, double& salary) {
	//1
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);

}

void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight) {
	//2
	name = ReadPersonName();
	age = ReadPersonAge();
	height = ReadPersonHeight();
	ReadPersonWeight(weight);
}

#ifndef DO_NOT_DEFINE_MAIN
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	string name;
	unsigned short age = 0;
	double salary = 0;
	unsigned short height = 200;
	unsigned short weight;
	cout << "----1----" << endl;
	ReadPersonData(name, age, salary);
	WritePersonData(name, "200", "60", &age, salary);
	cout << "----2----" << endl;
	ReadPersonData(name, age, weight, height);
	WritePersonData(name, to_string(weight), to_string(height), &age, 5000);
	return 0;
}
#endif