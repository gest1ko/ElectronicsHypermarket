#pragma once
#include "Hypermarket.h"

public ref class Electronics : public Hypermarket {
private:
	System::String^ name;
	System::String^ madeIn;
	System::String^ type;
	int amount;
	int id;
	int price;

public:
	void setName(System::String^ name);
	System::String^ getName();

	void setMadeIn(System::String^ madeIn);
	System::String^ getMadeIn();

	void setAmount(int amount);
	int getAmount();

	void setId(int id);
	int getId();

	void setPrice(int price);
	int getPrice();
};

///////////////////////////////////////////////////////////////////////////

public ref class Devices : public Electronics {

};

public ref class Laptops : public Devices {

};

public ref class Smartphones : public Devices {

};

public ref class Tablets : public Devices {

};

///////////////////////////////////////////////////////////////////////////

public ref class Accessories : public Electronics {

};

public ref class Headphones : public Accessories {

};

public ref class Keyboards : public Accessories {

};

public ref class PC_mouses : public Accessories {

};

///////////////////////////////////////////////////////////////////////////

public ref class PC_components : public Electronics {

};

public ref class Graphic_cards : public PC_components {

};

public ref class Processors : public PC_components {

};

public ref class RAM : public PC_components {

};

///////////////////////////////////////////////////////////////////////////

public ref class Household_appliances : public Electronics {

};

public ref class Refrigerators : public Household_appliances {

};

public ref class Washing_machines : public Household_appliances {

};

public ref class Blenders : public Household_appliances {

};

///////////////////////////////////////////////////////////////////////////