#include "Contacts.h"
#include <iostream>

void Contacts::setContact(System::String^ contact) {
	Contacts::contact = contact;
}
System::String^ Contacts::getContact() {
	return Contacts::contact;
}