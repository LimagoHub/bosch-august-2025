#include <iostream>
#include <string>
struct TMesswert
{
	std::string Ort;
	unsigned long Druck;
	float Temperatur;

	TMesswert()
	{
		Ort = "unbekannt";
		Druck = 0;
		Temperatur = 0;
	}

	TMesswert(const std::string& ort, unsigned long druck, float temperatur)
		
	{
		TMesswert::Ort = ort;
		TMesswert::Druck = druck;
		TMesswert::Temperatur = temperatur;
	}
};

class CWindgenerator
{
private:
	TMesswert messwerte[3];

	CWindgenerator()
	{
		messwerte[0]= {"Hamburg", 1001, 20};
		messwerte[1] = { "Frankfurt", 1001, 23 };
		messwerte[2] = { "Berlin", 990, 17 };
	};
};

int main()
{
	//TMesswert einzelnerMesswert{"Bochum", 995, 19};

	TMesswert messwerte[3];

	/*for (int i = 0; i < 3; i++)
	{
		std::cout
			<< "Ort: " << messwerte[i].Ort
			<< ", Druck: " << messwerte[i].Druck
			<< ", Temperatur: " << messwerte[i].Temperatur
			<< std::endl;
	}*/

	
}
