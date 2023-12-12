#include "header.h"

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