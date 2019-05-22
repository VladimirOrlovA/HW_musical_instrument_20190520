#pragma once
#include"musicInstrum.h"

class stringed abstract : public musicInstrum
{
	string type;
public:
	stringed(string material_1, string material_2, string type)
		:musicInstrum(material_1, material_2)
	{
		this->type = type;
	}
	void setType(string type) { this->type = type; }
	string getType() const { return this->type; }
	void info() const override
	{
		cout << "\n Type:\t" << type
			<< "\n Base material:\t" << getMaterial_1()
			<< "\n Accessories material:\t" << getMaterial_2();
	}
};	
