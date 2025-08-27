#pragma once
#include <iostream>
#include <string>

class Schwein
{
private:
	std::string name;
	int gewicht;

public:

	Schwein() {
		name = "Nobody";
		gewicht = 10;
	}
	Schwein(std::string name) {
		Schwein::name = name;
		gewicht = 10;
	}
	void setName(std::string neuerName) {
		if (neuerName == "Elsa") return;
		name = neuerName;
	}

	std::string getName() {
		return name;
	}

	void fuettern() {
		gewicht++;
	}

	void ausgabe() {
		std::cout << "Dieses Schwein heisst " << name << " und wiegt " << gewicht << std::endl;
	}

};

