#pragma once
#include<vector>
#include"musicInstrum.h"

class orchestra
{
	string name;
	vector<musicInstrum*> instrum;
public:
	orchestra(string name) {
		this->name = name;
	}
	void setName(string name) { this->name = name; }
	string getName() const { return this->name; }

	void addInstrument(musicInstrum*mi) {
		instrum.push_back(mi);
	}

	void info() const
	{
		cout << "\n-----------------------------------\n"
			<< "\n     Orchestra - " << name
			<<"\n   <<<<<<<<<<<<   >>>>>>>>>>>>\n"
			<<"\nComposition of music instriments: \n";
		for (musicInstrum* mi : instrum)
		{
			cout << "\n Music instrument:  \t" << string(typeid(*mi).name()).substr(6);
			mi->info();
			cout << endl;
		}
		cout << "\n-----------------------------------\n";
	}
};