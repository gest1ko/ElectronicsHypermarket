#pragma once
#include "Hypermarket.h"

public ref class Adresses : public Hypermarket {
private:
	System::String^ city;
	System::String^ street;
	System::String^ number;

public:
	void setCity(System::String^ city);
	System::String^ getCity();

	void setStreet(System::String^ street);
	System::String^ getStreet();

	void setNumber(System::String^ number);
	System::String^ getNumber();
};

///////////////////////////////////////////////////////////////////////////

public ref class Shops : public Adresses {

};

public ref class All_in_one_shops : public Shops {

};

public ref class Categories_shops : public Shops {

};

///////////////////////////////////////////////////////////////////////////

public ref class Other_Adresses : public Adresses {

};

public ref class Storages : public Other_Adresses {

};

public ref class Delivery_departments : public Other_Adresses {

};

///////////////////////////////////////////////////////////////////////////