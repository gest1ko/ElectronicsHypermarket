#pragma once
#include "Hypermarket.h"

public ref class Delivery : public Hypermarket {
private:
	System::String^ nameDel;
	int time;
	int priceDel;

public:
	void setNameDel(System::String^ nameDel);
	System::String^ getNameDel();

	void setTime(int time);
	int getTime();

	void setPriceDel(int priceDel);
	int getPriceDel();
};

///////////////////////////////////////////////////////////////////////////

public ref class Home_delivery : public Delivery {

};

public ref class Courier : public Home_delivery {

};

public ref class Robot : public Home_delivery {

};

///////////////////////////////////////////////////////////////////////////

public ref class Come_and_get_delivery : public Delivery {

};

public ref class In_store : public Come_and_get_delivery {

};

public ref class In_Department : public Come_and_get_delivery {

};

///////////////////////////////////////////////////////////////////////////