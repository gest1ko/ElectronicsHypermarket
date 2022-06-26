#include "Employees.h"
#include <iostream>

void Employees::setNameEmpl(System::String^ nameEmpl) {
	Employees::nameEmpl = nameEmpl;
}
System::String^ Employees::getNameEmpl() {
	return Employees::nameEmpl;
}

void Employees::setContactEmpl(System::String^ contactEmpl) {
	Employees::contactEmpl = contactEmpl;
}
System::String^ Employees::getContactEmpl() {
	return Employees::contactEmpl;
}