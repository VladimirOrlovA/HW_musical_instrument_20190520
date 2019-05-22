#pragma once
#include<iostream>
#include<string>
using namespace std;

class musicInstrum abstract
{
	string material_1;
	string material_2;
public:
	musicInstrum(string material_1, string material_2) {
		this->material_1 = material_1;
		this->material_2 = material_2;
	}
	void setMaterial_1(string material_1) { this->material_1 = material_1; }
	string getMaterial_1() const { return this->material_1; }

	void setMaterial_2(string material_2) { this->material_2 = material_2; }
	string getMaterial_2() const { return this->material_2; }

	virtual void info() const = 0;
};