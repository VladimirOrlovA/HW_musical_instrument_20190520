#pragma once
#include"percussion.h"

class drum : public percussion
{
	string kind;
	int diameter;
public:
	drum(string material_1, string material_2, string type, string kind, int diameter)
		:percussion(material_1, material_2, type)
	{
		this->kind = kind;
		this->diameter = diameter;
	}
	void setKind(string kind) { this->kind = kind; }
	void setDiameter(int diameter) { this->diameter = diameter; }

	string getKind() const { return this->kind; }
	int getDiameter() const { return this->diameter; }

	void info() const override
	{
		cout << "\n Kind:\t" << kind
			<< "\n Diameter:\t" << diameter;
		percussion::info();
	}
};
