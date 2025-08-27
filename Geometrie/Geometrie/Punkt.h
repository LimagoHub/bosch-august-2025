#pragma once
#include <iostream>
const static double MAX{ 10.0 };
class Punkt
{
private:
	
	double x, y;

	void setX(double x) {
		if (x > MAX) x = MAX;
		if (x < -MAX) x = -MAX;
		Punkt::x = x;
	}
	void setY(double y) {
		if (y > MAX) y = MAX;
		if (y < -MAX) y = -MAX;
		Punkt::y = y;
	}

public:
	Punkt(double x, double y)
	{
		setX(x);
		setY(y);
	}

	Punkt()
	{
		x = y = 0.0;
		
	}

	double getX() const {
		return x;
	}

	double getY() const{
		return y;
	}

	/*void rechts() {
		rechts(1.0);
	}*/


	void rechts(double offset = 1.0) {
		setX(getX() + offset);
	}
	void links() {
		setX(getX() - 1);
	}
	void oben() {
		setY(getY() + 1);
	}
	void unten() {
		setY(getY() - 1);
	}

	void ausgabe() const{
		std::cout << "X = " << getX() << ", Y = " << getY() << std::endl;
	}
};

