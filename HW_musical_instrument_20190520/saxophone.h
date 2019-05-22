#pragma once
#include"wind.h"

class saxophone : public wind
{
	string kind;
public:
	saxophone(string material_1, string material_2, string type, string kind)
		:wind(material_1, material_2, type)
	{
		this->kind = kind;
	}
	void setKind(string kind) { this->kind = kind; }
	string getKind() const { return this->kind; }
	
	void info() const override
	{
		cout << "\n Kind:\t" << kind;
		wind::info();
	}
};