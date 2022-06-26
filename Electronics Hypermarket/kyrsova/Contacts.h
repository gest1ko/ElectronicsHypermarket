#pragma once
#include "Hypermarket.h"

public ref class Contacts : public Hypermarket {
private:
	System::String^ contact;

public:
	void setContact(System::String^ contact);
	System::String^ getContact();
};

///////////////////////////////////////////////////////////////////////////

public ref class Email : public Contacts {

};

public ref class Support_email : public Email {

};

public ref class Business_email : public Email {

};

public ref class Advertising_email : public Email {

};

///////////////////////////////////////////////////////////////////////////

public ref class Phone : public Contacts {

};

public ref class Support_phone : public Phone {

};

public ref class Business_phone : public Phone {

};

///////////////////////////////////////////////////////////////////////////