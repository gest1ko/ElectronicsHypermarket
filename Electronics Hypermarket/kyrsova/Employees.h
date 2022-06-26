#pragma once
#include "Hypermarket.h"

public ref class Employees : public Hypermarket {
private:
	System::String^ nameEmpl;
	System::String^ contactEmpl;

public:
	void setNameEmpl(System::String^ nameEmpl);
	System::String^ getNameEmpl();

	void setContactEmpl(System::String^ contactEmpl);
	System::String^ getContactEmpl();
};

///////////////////////////////////////////////////////////////////////////

public ref class Managerial_pos : public Employees {

};

public ref class CEOs : public Managerial_pos {

};

public ref class Directors : public Managerial_pos {

};

public ref class Deputies : public Managerial_pos {

};

///////////////////////////////////////////////////////////////////////////

public ref class Other_pos : public Employees {

};

public ref class Accountants : public Other_pos {

};

public ref class Marketers : public Other_pos {

};

public ref class Managers : public Other_pos {

};

///////////////////////////////////////////////////////////////////////////