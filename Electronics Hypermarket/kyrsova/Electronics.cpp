#include <iostream>
#include "Electronics.h"

void Electronics::setName(System::String^ name) {
	Electronics::name = name;
}
System::String^ Electronics::getName() {
	return Electronics::name;
}

void Electronics::setMadeIn(System::String^ madeIn) {
	Electronics::madeIn = madeIn;
}
System::String^ Electronics::getMadeIn() {
	return Electronics::madeIn;
}

void Electronics::setAmount(int amount) {
	Electronics::amount = amount;
}
int Electronics::getAmount() {
	return Electronics::amount;
}

void Electronics::setId(int id) {
	Electronics::id = id;
}
int Electronics::getId() {
	return Electronics::id;
}

void Electronics::setPrice(int price) {
	Electronics::price = price;
}
int Electronics::getPrice() {
	return Electronics::price;
}

