#include "Adresses.h"
#include <iostream>

void Adresses::setCity(System::String^ city) {
	Adresses::city = city;
}
System::String^ Adresses::getCity() {
	return Adresses::city;
}

void Adresses::setStreet(System::String^ street) {
	Adresses::street = street;
}
System::String^ Adresses::getStreet() {
	return Adresses::street;
}

void Adresses::setNumber(System::String^ number) {
	Adresses::number = number;
}
System::String^ Adresses::getNumber() {
	return Adresses::number;
}