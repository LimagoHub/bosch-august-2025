#pragma once
#include "Punkt.h"
class Kreis : public Punkt
{
private:
	double radius;

public:
	Kreis():Punkt(1,1){
		radius = 0;
		
	}

	double get_radius() const
	{
		return radius;
	}

	void set_radius(double radius)
	{
		this->radius = radius;
	}

	void ausgabe() const override
	{
		Punkt::ausgabe();
		std::cout << "Radius = " << radius << std::endl;
	}
};

