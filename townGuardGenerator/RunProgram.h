#ifndef RUN_PROGRAM_H
#define RUN_PROGRAM_H
#include "TownGuard.h"
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<memory>
#include<array>
#include<fstream>
#include <iomanip>

class RunProgram
{
public:
	void runProgram();

	void generateGuard();
	void generateCorporal(string role);
	void generateSergeant(string role);

	//overloaded function
	ofstream& generateGuard(ofstream& file);
	ofstream& generateCorporal(ofstream& file, string role);
	ofstream& generateSergeant(ofstream& file, string role);

	void generatePatrol(int quantity);
	void generatePatrols(int quantity);
	void generateSquad(int quantity);
	void generateSquads(int quantity);

	//Overloaded function
	ofstream& generatePatrol(int quantity, ofstream& file);
	ofstream& generatePatrols(int quantity, ofstream& file);
	ofstream& generateSquad(int quantity, ofstream& file);
	ofstream& generateSquads(int quantity, ofstream& file);

	void generateWatch();
	void generateCompany();
};

#endif // !RUN_PROGRAM_H

