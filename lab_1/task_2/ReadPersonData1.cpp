#include "header.h"

void ReadPersonData(string& name, unsigned short& age, double& salary) {
	//1
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);

}
