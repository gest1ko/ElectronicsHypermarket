#include "Delivery.h"
#include <iostream>

void Delivery::setNameDel(System::String^ nameDel) {
	Delivery::nameDel = nameDel;
}
System::String^ Delivery::getNameDel() {
	return Delivery::nameDel;
}

void Delivery::setTime(int time) {
	Delivery::time = time;
}
int Delivery::getTime() {
	return Delivery::time;
}

void Delivery::setPriceDel(int priceDel) {
	Delivery::priceDel = priceDel;
}
int Delivery::getPriceDel() {
	return Delivery::priceDel;
}