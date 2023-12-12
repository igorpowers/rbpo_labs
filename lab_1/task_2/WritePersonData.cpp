#include "header.h"

void WritePersonData(const string& name, const string& weight, const string& height, const unsigned short* age, const double salary) {
	cout << "Имя: " << name << endl;
	cout << "Рост:" << weight << endl;
	cout << "Вес:" << height << endl;
	cout << "Возраст:" << *age << endl;
	cout << "Заработная плата: " << salary << endl;
}