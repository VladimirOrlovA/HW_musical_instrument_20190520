#pragma once
#include"stringed.h"

class guitar : public stringed
{
	string kind;
	int cntStrings;
public:
	guitar(string material_1, string material_2, string type, string kind, int cntStrings)
		:stringed(material_1, material_2){
		this->kind = kind;
		this->cntStrings = cntStrings;
	}
	void setKind(string kind) { this->kind = kind; }
	void setCntStrings(int diameter) { this->cntStrings = cntStrings; }

	string getKind() const { return this->kind; }
	int getCntStrings() const { return this->cntStrings; }

	void info() const override
	{
		
		cout << "\n Kind:            \t" << kind
			<< "\n Number of strings:   \t" << cntStrings;
		stringed::info();
	}
};