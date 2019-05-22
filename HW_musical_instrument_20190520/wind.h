#pragma once
#include"musicInstrum.h"

class wind abstract : public musicInstrum
{
	string type="wind";
public:
	wind(string material_1, string material_2)
		:musicInstrum(material_1, material_2){}
	void info() const override	{
		cout << "\n Type:            \t" << type
			<< "\n Base material:       \t" << getMaterial_1()
			<< "\n Accessories material:\t" << getMaterial_2();
	}
};

