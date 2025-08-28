#pragma once
#include <iostream>
#include <string>

class Schwein
{
private:
	std::string name;
	int gewicht;

public:

	/*Schwein() {
		name = "Nobody";
		gewicht = 10;
	}*/

	explicit Schwein(std::string name="Nobody") {
		Schwein::name = name;
		gewicht = 10;
	}

	~Schwein() {
		std::cout << name << " RIP.\n QUiiiiieeeeekkkkk" << std::endl;
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

