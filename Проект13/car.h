#pragma once
#include "Headers.h"

class Car {
private:
	string name;
	int min;

public:
	Car() {
		this->name = "";
		this->min = 0;
	}
	Car(string name, int min) {
		this->name = name;
		this->min = min;
	}
};