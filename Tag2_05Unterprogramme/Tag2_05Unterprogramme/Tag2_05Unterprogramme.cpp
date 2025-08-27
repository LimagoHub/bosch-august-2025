#include <iostream>
#include <string>

#include "Demo.h"
#include "Steuer.h"

struct Peter {
	double a;
	double b;
	double c;
};

void unter(int &a) { // 1000
	a = 100;
}

void ober() {
	Peter a;
	int x = 10;// Adresse 1000
	unter(x);
	std::cout << x << std::endl;
}
void setUp() {

}

void loop() {

}
int main()
{

	int z = 10;
	z = 0b1110000;
	z = 0xff;
	z = 010;
	


	setUp();
	while (true) {
		loop();
	}

	ober();
	/*
	double einkauspreis = 100.0;
	double verkaufspreis = Brutto(einkauspreis);

	std::cout << verkaufspreis << std::endl;

	verkaufspreis = Brutto(200);

	std::cout << verkaufspreis << std::endl;
 */
}



